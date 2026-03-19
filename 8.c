#include<stdio.h>
int main(){
    int sub1, sub2 ,sub3, sub4 ,sub5 , avg ;
    printf("enter sub1=");
    scanf("%d", &sub1);

    printf("enter sub2=");
    scanf("%d", &sub2);

    printf("enter sub3=");
    scanf("%d", &sub3);

    printf("enter sub4=");
    scanf("%d", &sub4);

    printf("enter sub5=");
    scanf("%d", &sub5);
    avg = (sub1+sub2+sub3+sub4+sub5)/5;

    printf("%d" , avg);

    if(avg > 90 ){
        printf("a++");
    }
    else if("avg < 90 && avg > 60"){
        printf("a+");

    }
    else if(" avg < 60 && avg > 33"){
        printf("a");
    }
else {
    printf("fail");

}
return 0;
}