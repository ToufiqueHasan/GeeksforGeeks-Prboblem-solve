/*Find the Rotation Count in Rotated Sorted array*/

#include<bits/stdc++.h>

int rotCount(int* a,int n){
    int _min,index;
    _min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<_min){
            _min=a[i];
            index=i;
        }
    }
    return index;
}
int main(){
    int arr[]={15, 18, 2, 3, 6, 12};
    int n= sizeof(arr)/sizeof(int);

    int rotNum=rotCount(arr,n);
    printf("%d\n",rotNum);

}
