/*Find the largest pair sum in an unsorted array*/
/*Also applicable for second max element*/

#include<stdio.h>

///find the max element
int _max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int _min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

void findPair(int* a,int n){

    int i,first,second;
    first=_max(a[0],a[1]);
    second=_min(a[0],a[1]);

    for(i=3;i<n;i++){
        if(a[i]>first){
            first=a[i];
        }
        else if(a[i]>second){
            second=a[i];
        }
    }
    printf("%d\n",first+second);
}
int main(){
    int n=4;
    int arr[]={7,2,-1,2};
    findPair(arr,n);

    return 0;
}
