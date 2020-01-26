#include<bits/stdc++.h>

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int temp,n=7,d=2;

    for(int i=0;i<d;i++){
        temp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
