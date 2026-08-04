#include <stdio.h>
int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
float div(float x, float y);

int main(){
    printf("Welcome!! This a a basic calculator program designed to add, subtract, multiply and divide.\n");
    printf("Enter desired operation (+,-,*,/):  \n");
    char op;
    scanf("%c", &op);
    int x;
    printf("Enter first number:\n");
    scanf("%d", &x);
    int y;
    printf("Enter second number: \n");
    scanf("%d", &y);
    int result;
    float resultDiv;

    if (op=='+'){
        result=add(x, y);
        printf("The result is: %d\n", result);
    }
    
    else if (op=='-'){
        result=sub(x,y);
        printf("The result is: %d\n", result);
    }
    
    else if (op=='*'){
        result=mult(x,y);
        printf("The result is: %d\n", result);
    }
    
    else if (op=='/'){
        resultDiv=div(x,y);
        printf("The result is: %.1f\n", resultDiv);
    }

    return 0;
}

int add(int x, int y){
    return x+y;
}

int sub(int x, int y){
    return x-y;
}

int mult(int x, int y){
    return x*y;
}

float div(float x, float y){
    return x/y;
}