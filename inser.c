#include<stdio.h>
#include<stdbool.h>
int main(){
    int num;
    printf("Enter a number while element insert in array:- ");
    scanf("%d",&num);

    int po;
    printf("enter a position of where insert element:-");
    scanf("%d",&po);

    int arr[11]={
        11,12,13,14,15,60,70,80,90,900
    };
    for (int i=(sizeof(arr)/sizeof(int)-1);i>=po;i--){
        arr[i]=arr[i-1];
        // printf("%d ",arr[i]);
    }
    arr[po]=num;
    for(int i=0;i<11;i++){
        printf("%d  ",arr[i]);
    }
    return 0;

}