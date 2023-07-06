#include<stdio.h>

unsigned int FactorialRec(unsigned int pn);

unsigned int FactorialRec(unsigned int pn)
{
    if(pn == 0)
        return 1;
    else
        return pn * FactorialRec(pn-1);
}

int main()
{
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);
    printf("Factorial of %u is %u\n", n, FactorialRec(n));
    return 0;
}