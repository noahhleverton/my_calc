#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

/* A minimal command line calculator */
int main()
{
    float a, b, result;
    char op;

    printf("Enter two binary operations (ie: a + b):\n");
    scanf("%f %s %f", &a, &op, &b);

    /* Error handling */
    if ((b == 0.0) && (strcmp(&op, "/") == 0)){
        printf("Division by zero!\n");
        exit(-1);
    }

    switch(op){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Invalid operator\n");
            exit(-1);
    }

    printf("= %.2f\n", result);

    return 0;

}
