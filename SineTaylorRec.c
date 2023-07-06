#include <stdio.h>

double SineTaylorRec(double x, unsigned int n);

double SineTaylorRec(double x, unsigned int n){
    if(n == 0)
        return x;
    else
        return ((-1) * x * x) / ((2 * n + 1) * (2 * n)) * SineTaylorRec(x, n-1);
}

int main(){
    double x;
    unsigned int n;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter n: ");
    scanf("%u", &n);
    printf("Sine of %lf is %lf\n", x, SineTaylorRec(x, n));
    return 0;
}