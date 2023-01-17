#include <stdio.h>
void main()
{
    int a;
    scanf("%d", &a);
    int c = 0;
    while (a != 0)
    {
        if (a >= 2000)
        {
            int b = a / 2000;
            c += b;
            a = a - b * 2000;
            printf("2000: %d \n", b);
        }
        else if (a >= 500)
        {
            int b = a / 500;
            c += b;
            a = a - b * 500;
            printf("500: %d \n", b);
        }
        else if (a >= 200)
        {
            int b = a / 200;
            c += b;
            a = a - b * 200;
            printf("200: %d \n", b);
        }
        else if (a >= 100)
        {
            int b = a / 100;
            c += b;
            a = a - b * 100;
            printf("100: %d \n", b);
        }
        else if (a >= 50)
        {
            int b = a / 50;
            c += b;
            a = a - b * 50;
            printf("50: %d \n", b);
        }
        else if (a >= 20)
        {
            int b = a / 20;
            c += b;
            a = a - b * 20;
            printf("20: %d \n", b);
        }
        else if (a >= 10)
        {
            int b = a / 10;
            c += b;
            a = a - b * 10;
            printf("10: %d \n", b);
        }
        else if (a >= 5)
        {
            int b = a / 5;
            c += b;
            a = a - b * 5;
            printf("5: %d \n", b);
        }
        else if (a >= 2)
        {
            int b = a / 2;
            c += b;
            a = a - b * 2;
            printf("2: %d \n", b);
        }
        else
        {
            int b = a / 1;
            c += b;
            a = a - b * 1;
            printf("1: %d \n", b);
        }
    }
    printf("total: %d", c);
}
