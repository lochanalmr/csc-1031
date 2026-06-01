#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculator\n\n");

    printf("Menu:\n");
    printf("+: Addition\n");
    printf("-: Subtraction\n");
    printf("*: Multiplication\n");
    printf("/: Division\n");

    char operation = '\0';
    printf("Insert operation: ");
    scanf("%c", &operation);

    if (operation != '+' && operation != '-' && operation != '*' && operation != '/'){
        printf("Invalid operation!\n");
        return 1;
    }

    float number1 = 0.0;
    printf("\nInsert Number 1: ");
    scanf("%f", &number1);

    float number2 = 0.0;
    printf("Insert Number 2: ");
    scanf("%f", &number2);

    float answer = 0.0;
    if (operation == '+'){
        answer = number1 + number2;
    }
    if (operation == '-'){
        answer = number1 - number2;
    }
    if (operation == '*'){
        answer = number1 * number2;
    }
    if (operation == '/'){
        answer = number1 / number2;
    }
    printf("%.3f %c %.3f = %.3f\n", number1, operation, number2, answer);
    return 0;
}
