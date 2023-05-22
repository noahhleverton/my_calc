#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_LIM 15
#define STACK_SIZE (int)(top - postfix_expression)

char postfix_expression[STACK_LIM];
char *top = &postfix_expression[0];


/* STACK functions */
bool check_empty(void){
    return (int)(top - postfix_expression) == 0;
}


bool check_full(void){
    return (int)(top - postfix_expression) == STACK_LIM;
}


int pop(){
    if (check_empty()){
        printf("Error: nothing in stack to pop\n");
        return 0; /* Not sure what to return here, probably shouldn't halt the program entirely though */
    }
    else {
        return *(--top);
    }
}


void print_stack(){

    printf("[");
    
    for (int i = 0; i < STACK_SIZE; i++){
        if (i == STACK_SIZE - 1){
            printf("%c", postfix_expression[i]);
        } else {
            printf("%c, ", postfix_expression[i]);
        }
    }

    printf("]\n");
}


void push(char x){
    if (check_full()){
        printf("Error: No more room in stack\n");
        exit(EXIT_FAILURE);
    }
    else {
        *(top++) = x;  
    }
}

/* Returns precendence of the inputted operator (only supports +,-,* and / right now) */
int precedence(char operator){

    if (operator == '*' || operator == '/')
        return 2;
    else if (operator == '+' || operator == '-')
        return 1;
    else 
        return 0;

}

char* infix_to_postfix(char *infix_expression){
    return infix_expression;
}

int main(void){
    char infix_expression[] = "2 + 3 * 6 - 8";
    char *token;
    
    token = strtok(infix_expression, " ");

    /* Need to implement logic for building postfix expression */
    while (token != NULL){
        /* Check if token is a number, push it immediately if so */
        push(*token);
        token = strtok(NULL, " ");
    }

    print_stack();
    
    return 0;
}