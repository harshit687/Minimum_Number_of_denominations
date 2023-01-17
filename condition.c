#include<stdio.h>
void main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>80){
        printf("grade is f");
    }
    else if(marks>70){
        printf("grade is d");
    }
    else if(marks>60){
        printf("grade is c");
        }
        else if(marks>40){
        printf("grade is a");
        }
        else{
            printf("pass");
        }
}