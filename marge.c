#include<stdio.h>
int main(){

    int arr1[10]={
        11,12,13,14,15
    };
    int arr2[5]={
        60,70,80,90,100
    };
    for (int i=0;i<=(sizeof(arr2)/sizeof(int)-1);i++){
        arr1[sizeof(arr1)/sizeof(int)+i]=arr2[i];
    }
    for (int i=0;i<=(sizeof(arr1)/sizeof(int)-1);i++){
        printf("%d",arr1[i])
    }
}