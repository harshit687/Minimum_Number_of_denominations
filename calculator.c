#include <stdio.h>
void main()
{
    int a, b, sum, sub, mul, div;
    char operator;
    scanf("%c",&operator);
    scanf("%d %d", &a, &b);
    switch (operator)
    {
    case '+':
        sum = a + b;
        printf("%d", sum);
        break;
    case '-':
        sub = a - b;
        printf("%d", sub);
        break;
    case '*':
        mul = a * b;
        printf("%d", mul);
        break;
        div = a / b;
        printf("%d", div);
        break;
    }
}