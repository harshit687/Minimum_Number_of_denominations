#include<stdio.h>
void main(){
    // int a,b,c;
    // scanf("%d %d %d",&a,&b,&c);
    // if(a>b && a>c){
    //     printf("a is greater");
    // }
    // else if(b>c && b>a){
    //             printf("b is greater");
    // }
    // else{
    //             printf("c is greater");
    // }

         //PATTERSN ---1
    // int j,i;
    // for(j=1;j<=5;j++){
    //     for(i=1;i<=j;i++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
     //PATTERN---2
     int j,i;
    for(j=1;j<=5;j++){
        for(i=5;i>=j;i--){
            printf("*");
        }
        printf("\n");
    }


}
