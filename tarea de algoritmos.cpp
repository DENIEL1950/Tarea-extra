#include<iostream>
#include<math.h>
double factorial(int num)
{
    double fac=1;
    for(int i=1; i<=num; i++)
        fac*=i;
    return fac;
}
int potencias(int base, int exponente)
{
    int res=1;
    for (int k=1; k<=exponente; k++)
        res=res * base;
    return res;
}

double serie03(int n)
{

double suma=0;
for (int k=2; k<=n; k++)
    suma= suma + (factorial(k) / potencias(5, k-1));
    return suma;
}