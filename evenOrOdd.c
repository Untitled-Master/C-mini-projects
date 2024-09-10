// Write a C program that checks if a given number is even or odd.
#include <stdio.h>
int a;

int main() {
    printf("Even or Odd Checker\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("%d is and an even number", a);
    }
    else{
        printf("%d is and an odd number", a);
    }
    return 0;
}
