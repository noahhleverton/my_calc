/* A simple implementation of a stack containing integers */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_LIM 5
#define STACK_SIZE (int)(top - contents)

int contents[STACK_LIM];
int *top = &contents[0];


bool check_empty(void){
    return (int)(top - contents) == 0;
}


bool check_full(void){
    return (int)(top - contents) == STACK_LIM;
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
            printf("%d", contents[i]);
        } else {
            printf("%d, ", contents[i]);
        }
    }

    printf("]\n");
}


void push(int x){
    if (check_full()){
        printf("Error: No more room in stack\n");
        exit(-1);
    }
    else {
        *(top++) = x;  
    }
}


int main(void){

    for (int i = 0; i < STACK_LIM; i++){
        push(i);
    }

    print_stack();

    return 0;
}