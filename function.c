#include <stdio.h>

int primeNum();

int main(){

    int sum;

    sum = primeNum();

}
int primeNum()
{

    int n, flag=0;

    printf("Enter the value: ");
    scanf("%d", &n);

    for(int i=2; i<n; i++)
        if(n%i==0)
        flag=1;

    if(flag==0)

    printf("Number is prime");
    else
    printf("Number is not prime");

}
