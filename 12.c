#include<stdio.h>
//to find out a natural number 
int main(){
    int num ;
    printf("enter num=");
    scanf("%d", &num);
    if(num > 0 ){
        printf("natural num\n");
    }
    else{
        printf("not a natural num\n");

    }
    return 0;
}