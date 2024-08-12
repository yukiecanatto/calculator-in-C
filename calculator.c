#include <stdio.h>
#include <stdlib.h>

int main () {

    float num1, num2;
    char op;

    printf("Enter the first number \n");
    scanf("%f" ,&num1);

    printf("Enter the second number \n");
    scanf("%f" ,&num2);

    printf("Enter the operation '+', '-', '*', '/' \n");
    scanf("%s" ,&op);

    switch (op) {

    case '+':
        printf("The sum of the values is: %.2f", num1 + num2);
        break;

    case '-':
        printf("The subtraction of the values is: %.2f", num1 - num2);
        break;

    case '*':
        printf("The multiplication of the values is: %.2f", num1 * num2);
        break;

    case '/':

        if (num2 == 0) {
            printf("There's no division by zero \n");
            break;
        }
        printf("The division of values is: %.2f", num1 / num2);
        break;
    
    default:
    printf("Invalid operation \n");
        break;
    }


    return 0;
}