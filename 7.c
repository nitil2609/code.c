#include<stdio.h>
int main(){
    int num;
    printf("enter num(0-100)=");
    scanf("%d", &num);
    if(num >=30 && num >= 0){
        printf("pass");
    }
    else {
        printf("fail");
    }
    
    return 0;
}
