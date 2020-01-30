#include<bits/stdc++.h>

int* inserSort(int *a,int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    return a;

}
void findPair(int* a,int n,int gs){

    int i=0,j=n-1;

    while(i<j){
        if(a[i]+a[j]==gs){
            //index[0]=i;
            //index[1]=j;
            printf("%d %d",i,j);
            return ;
        }
        else if(a[i]+a[j]<gs){
            i=i+1;
        }
        else{
            j=j-1;
        }
    }

}
int main(){
    int arr[]={11,15,6,8,9,10,19};
    int *rArr=inserSort(arr,7);
    int gs=16; /*Given sum*/
    printf("Sorted array: \n");
    for(int i=0;i<7;i++){
        printf("%d ",rArr[i]);
    }
    printf("\nIndexes are: \n");

    findPair(rArr,7,gs);



}
