// Create a C program that performs basic arithmetic operations (addition, subtraction, multiplication, division).

#include <stdio.h>

int a;
float num1;
float num2;

int main() {
    printf("Simple Calculator");
    printf("Choose a basic arithmetic operation: \n");
    printf("1. addition\n2. subtraction\n3. multiplication\n4. division \n");
    printf("==>: ");
    scanf("%d", &a);
    if(a == 1){
        printf("1. addition\n");
        printf("Enter 2 numbers: \n");
        printf("num1: ");
        scanf("%f", &num1);
        printf("num2: ");
        scanf("%f", &num2);
        printf("%f", num2 + num1);
    }
    else if(a == 2){
        printf("2. subtraction\n");
        printf("Enter 2 numbers: \n");
        printf("num1: ");
        scanf("%f", &num1);
        printf("num2: ");
        scanf("%f", &num2);
        printf("%f", num1 - num2);
    }
    else if(a == 3){
        printf("3. multiplication\n");
        printf("Enter 2 numbers: \n");
        printf("num1: ");
        scanf("%f", &num1);
        printf("num2: ");
        scanf("%f", &num2);
        printf("%f", num1 * num2);
    }
    else if(a == 4){
        printf("4. division\n");
        printf("Enter 2 numbers: \n");
        printf("num1: ");
        scanf("%f", &num1);
        printf("num2: ");
        scanf("%f", &num2);
        printf("%f", num1 / num2);
    }
    else{
        printf("No command was found");
    }
    return 0;
}
