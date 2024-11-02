#include<stdio.h>

int main(void){
    char name[100];
    int age;

    printf("Please enter your name:\n");
    scanf("%s",name);
    
    printf("Please enter your age:\n");
    scanf("%d",&age);

    if(age<18){
        printf("you are not allowed to enter this site");
    }else{
        printf("%s are welcome...",name);
    }
}