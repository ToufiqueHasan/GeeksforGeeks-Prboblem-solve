#include<bits/stdc++.h>

/*Binary Search for reversely ordered array with a complexity of O(nlogn) */
int binarySearch(int a[],int key,int i,int j){

    int mid;

    if(i<=j){
        mid=i+(j-i)/2;

        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            binarySearch(a,key,i,mid-1);
        }
        else{
            binarySearch(a,key,mid+1,j);
        }
    }
    else{
        return -1;
    }

}
int main(){
    int key=23,i=0,j=9;
    //int arr[]={2,5,8,12,16,24,38,56,72,91};
    int arr[]={91,72,56,38,23,16,12,8,5,2};
    int index = binarySearch(arr,key,i,j);
    printf("Index: %d",index);

}
