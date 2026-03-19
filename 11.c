#include<stdio.h>
//to find charecter is upper case or lower case
int main(){
    char  A ,Z ,a ,z ,ch;
    printf("enter character=");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("upper case \n");

    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("lower case \n");
    }
    else {
        printf("not a alphabet \n");
    }
    return 0;
}