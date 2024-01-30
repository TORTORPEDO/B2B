#include <stdio.h>

/* creates function with 
NO variable passed*/

int main() {
int a;

int b;

printf("Enter a number");

scanf("%d",&a);

printf("Please enter a second number");

scanf("%d", &b);

printf("%d + %d = %d" , a, b, a + b);
}