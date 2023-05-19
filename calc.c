#include <stdio.h>
#include <string.h>

int main()
{
    float a, b, c, result;
    char op;

    printf("Enter two binary operations (ie: a + b * c):\n");
    scanf("%f %c %f %c %f", &a, &op1, &b, &op2, &c);

	// Decide on order operations should be performed

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
            result = a / b;
            break;
        default:
            printf("Error: invalid binary operation\n");
            return 1;
    }

    printf("= %.2f\n", result);

    return 0;

}
