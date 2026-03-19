//checking the number is positive ,negative ,odd or even 
#include<stdio.h>
int main(){
    int num;
    printf("enter num=");
    scanf("%d", &num);

    if(num >= 0){
        printf("positive num \n" );
        if(num % 2 == 0){
            printf("even num \n" );
            
        }
        else {
            printf("odd num \n");
        }
        
        }else if( num <= 0){
            printf("negative num \n");

        }
        else {
            printf("imegenori");
        }
      
        
        return 0;
    }

