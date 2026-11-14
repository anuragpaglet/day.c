#include<stdio.h>
int main() {
    int a;
    int b;
    char op;
    printf(" enter the first number :");
    scanf("%d", &a);
    printf(" enter the second number :");
    scanf("%d",&b);
    printf(" + , -, *,  /");
    printf(" enter the operator :");
    scanf(" %c",&op);

    switch(op) {

        case '+':
            printf(" the sum is : %d", a+b);
            break;
        case '-':
            printf(" the sum is : %d", a-b);
            break;
        case '*':
            printf(" the sum is : %d", a*b);
            break;
        case '/':
            printf(" the sum is : %d", a/b);
            break;
        default:
            printf(" invalid operator");
            break;
    }

}