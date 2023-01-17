#include<stdio.h>
#include<conio.h>
void main(){
    int i,num,harsh;
    printf("printing table of\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
    harsh=i*num;
    printf("%d * %d = %d\n",num,i,harsh);
    }
}
