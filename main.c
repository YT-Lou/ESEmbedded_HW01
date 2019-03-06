#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int main()
{
        printf("key a Function \nEX: 1 + 1\n");
        scanf("%i %c %i", &a, &b, &c);
        int (*z1a)(int a,char b,int c) = {plus,minus,multiply,divided}
        int main()
        printf("%d %c %d = %d\n", a, b, c, z1a(a, c));
}
