// Write a C program that takes three numbers as input and prints the largest of the three.
#include <stdio.h>

int a;
int b;
int c;

int main() {
    printf("Find Largest of Three Numbers \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a <= b){
        if(b <= c){
            printf("%d", c);
        }
        if(b > c){
            printf("%d", b);
        }
    }
    else{
        if(a <= c){
            printf("%d", c);
        }
        if(a > c){
            printf("%d", a);
        }
    }
    return 0;
}
