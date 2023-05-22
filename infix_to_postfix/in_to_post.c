#include <stdio.h>


/* Returns precendence of the inputted operator (only supports +,-,* and / right now) */
int precedence(char operator){

    if (operator == '*' || operator == '/')
        return 2;
    else if (operator == '+' || operator == '-')
        return 1;
    else 
        return 0;

}


int main(void){
    char *infix_expression = "2 + 3 * 6 - 8";

    printf("The address of the pointer is %p\n", infix_expression);
    printf("It's value is %s\n", infix_expression);
    
    return 0;
}