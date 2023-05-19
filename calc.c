#include <stdio.h>
#include <stdlib.h>

/* Performs one binary operation, returns the result */
float bin_op(float a, float b, char op){
    float result;

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
            if (b == 0){
                printf("Error: division by zero\n");
                return 1;
            }
            else {
                result = a / b;
                break;
            }
        default:
            printf("Error: invalid binary operation\n");
            exit(-1);
    }

    return result;
}

/* A minimal command line calculator */
int main()
{
    float a, b, result;
    char op;

    printf("Enter two binary operations (ie: a + b):\n");
    scanf("%f %s %f", &a, &op, &b);

    result = bin_op(a, b, op);

    printf("= %.2f\n", result);

    return 0;

}
