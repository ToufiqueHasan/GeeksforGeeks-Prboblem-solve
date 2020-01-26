#include<bits/stdc++.h>

int main(){
    int arr[]={1,2,3,4,5};
    int i,j,temp,n=5;

    temp=arr[n-1];
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[i]=temp;

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
