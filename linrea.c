#include<stdio.h>
#include<stdbool.h>
int main(){
    char chack = false;
    char num;
    printf("enter a number which are you seek:-");
    scanf("%c",&num);
    char arr[10]={'k','a','l','i','n','s','w','z','p','x'};
    for (int i=0;i<(sizeof(arr)/sizeof(char));i++){
        if(arr[i]==num){
            printf("Element is founded at index is:-%d",i);
            chack=true;
            break;
        }
    }
    if(chack==false){
        printf("element is not founded in array ");
    }
}