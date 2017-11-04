#include<stdio.h>
int Fib(int n)   //Prgram to calculate Fibbonacci series.
{   if(n==0)
    return 0;

    else if(n==1)
    return 1;

    else
    return (Fib(n-1) + Fib(n-2));
}

int main()
{   int n ,i;
    printf("Enter The Number upto Which Series ha to b Calculated .\n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {   printf(" %d ",Fib(i));
    }
    return 0;
}
