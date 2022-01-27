#include<stdio.h>

int main(){
    float num1;
    float num2;
    char op;

    // + - * /

    printf("enter num1: ");
    scanf("%f", &num1);

    printf("\nenter num2: ");
    scanf("%f", &num2);

    printf("\nenter operator: ");
    scanf(" %c", &op);

    switch (op){

    case '+':
        printf("%f", num1 + num2);
        break;

    case '-':
        printf("%f", num1 - num2);
        break;

    case '/':
        printf("%f", num1 / num2);
        break;

    case '*':
        printf("%f", num1 * num2);
        break;
        
    default:
        printf("invalid operator");
        break;
    }
}
