#include <stdio.h>
int main()
{
    // int a;
    // int b;
    // scanf("%d %d",&a,&b);
    // printf("%d",a+b);

    // int h=7;
    // int area=3.14*h*h;
    // printf(" AREA OF CIRCLE- \n %d \n",area);

    // int k=9;
    // int m=7;
    // int temp;
    // temp=k;
    // k=m;
    // m=temp;
    // printf("%d %d",k,m);

    // int k=9;
    // int m=7;
    // k=k+m;
    // m=k-m;
    // k=k-m;
    // printf("SWAPPING USING ONLY TWO VARIABLES %d %d",k,m);

    // int x;
    // scanf("%d",&x);
    // if(x%2==0)
    //     printf("even");
    // else
    //     printf("odd");

    // char gender;
    // scanf("%c",&gender);
    // if(gender=='M' || gender=='m'){
    //     printf("Male");
    //                }
    //  else if(gender=='F' || gender=='f'){
    //     printf("female");
    // }
    // else{
    //     printf("others");
    // }

    // char vow;
    // scanf("%c",&vow);
    // if(vow=='a'|| vow=='e'|| vow=='i'|| vow=='o'|| vow=='u'|| vow=='A'|| vow=='E'|| vow=='I'|| vow=='O'|| vow=='U'){
    //     printf("it is vowel");
    // }
    //     else{
    //         printf("it is not a vowel");
    //     }

    //     int a;
    //     scanf("%d",&a);
    //     if(a>40){
    //         printf("PASS");
    //     }
    //     else{
    //         printf("FAIL");
    //     }

    // int x;
    // scanf("%d", &x);
    // if (x == 1)
    // {
    //     printf("add");
    // }
    // else if (x == 2)
    // {
    //     printf("sub");
    // }
    // else if (x == 3)
    // {
    //     printf("mul");
    // }
    // else if (x == 4)
    // {
    //     printf("div");
    // }
    // else{
    //     printf("others");
    // }

    // return 0;

    // int h;
    // scanf("%d", &h);
    // switch (h)
    // {
    // case 1:
    //     printf("add");
    //     break;

    // case 2:
    //     printf("sub");
    //     break;

    // case 3:
    //     printf("mul");
    //     break;

    // default:
    //     printf("others");
    //     break;
    // }

    // int a, b;
    // int num = 0;
    // printf("No.  Food Item     Price \n 1.   Noodles      200\n 2.   Pizza        320\n 3.   Sandwich     80\n 4.   Coffee       60\n 5.   Juice        90\n");
    // printf("Select item from these :\n");
    // scanf("%d", &a);
    // printf("Enter your quantity :\n");
    // scanf("%d", &b);
    // switch (a)
    // {
    // case 1:
    //     printf("You selected Noodles\n");
    //     num = 200;
    //     break;
    // case 2:
    //     printf("You selected Pizza\n");
    //     num = 320;
    //     break;
    // case 3:
    //     printf("You selected Sandwich\n");
    //     num = 80;
    //     break;
    // case 4:
    //     printf("You selected Coffee\n");
    //     num = 60;
    //     break;
    // case 5:
    //     printf("You selected Juice\n");
    //     num = 90;
    //     break;

    // default:
    //     printf("Wrong input\n");
    //     num = 0;
    //     break;
    // }
    // printf("Your total is %d",b*num);
    // // printf("Enter ")
    // return 0;


    // int a, b;
    // int num = 0;
    // printf("No.  Food Item     Price \n 1.   Noodles      200\n 2.   Pizza        320\n 3.   Sandwich     80\n 4.   Coffee       60\n 5.   Juice        90\n");
    // printf("Select item from these :\n");
    // scanf("%d", &a);
    // printf("Enter your quantity :\n");
    // scanf("%d", &b);
    // if(a==1){
    //     printf("You selected Noodles\n");
    //     num=200;
    // }
    // else if(a==2){
    //     printf("You selected Pizza\n");
    //      num=320;
    // }
    // else if(a==3){
    //     printf("You selected Sandwich\n");
    //      num=60;
    // }
    // else if(a==4){
    //     printf("You selected Coffee\n");
    //      num=80;
    // }
    // else if(a==5){
    //     printf("You selected juice\n");
    //      num=90;
    // }
    // else{
    //      printf("Wrong input\n");
    // }
    // printf("Your total is %d",b*num);
    
//    int a,b,c;
//   printf("Enter 3 numbers: ");
//   scanf("%d %d %d",&a,&b,&c);
//   if(a>b && a>c){
//     printf("First number is greater");
//   }
//   else if(b>c && b>a){
//     printf("Second number is greater");
//   }
//   else if(c>a && c>b)
//     printf("Third number is greater");
// 


// int userid,passwd;
//     printf("Enter user id and password \n");
//     scanf("%d %d",&userid,&passwd);
//     if(userid==101 && passwd==123)
//         printf("Welcome");
//     else if(userid==101 && passwd!=123)
//         printf("Invalid passwd");
//     else if(userid!=101 && passwd==123)
//         printf("Invalid userid");
//     else    
//         printf("Invalid user");

    // int a=8,b=5;
    // int c;
    // c=a&b;
    // printf("%d",c);
        int a;
        scanf("%d",&a);
        int c=0;
        while(a!=0){
            if(a>=2000){
               int b=a/2000;
               c+=b;
               a=a-b*2000;
               printf("2000: %d \n",b);
            } else if (a>=500) {
                int b=a/500;
                c+=b;
                a=a-b*500;
                printf("500: %d \n",b);
            }else if(a>=200){
                int b=a/200;
                c+=b;
                a=a-b*200;
                printf("200: %d \n",b);
            }else if(a>=100){
                int b=a/100;
                c+=b;
                a=a-b*100;
                printf("100: %d \n",b);
            }else if(a>=50){
                int b=a/50;
                c+=b;
                a=a-b*50;
                printf("50: %d \n",b);
            }else if(a>=20){
                int b=a/20;
                c+=b;
                a=a-b*20;
                printf("20: %d \n",b);
            }else if(a>=10){
                int b=a/10;
                c+=b;
                a=a-b*10;
                printf("10: %d \n",b);
            }else if(a>=5){
                int b=a/5;
                c+=b;
                a=a-b*5;
                printf("5: %d \n",b);
            }else if(a>=2){
                int b=a/2;
                c+=b;
                a=a-b*2;
                printf("2: %d \n",b);
            }else{
                int b=a/1;
                c+=b;
                a=a-b*1;
                printf("1: %d \n",b);
            }
        }
        printf("total: %d", c);
    }



