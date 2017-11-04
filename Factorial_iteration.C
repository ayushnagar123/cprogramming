#include<stdio.h>
long int Factorial(int n)
{   long int F;
    if((n==0)||(n==1))
    {return 1;
    }
    else
    {   F=n*Factorial(n-1);
        return F;
    }
}
int main()
{   int n;
    printf("Enter The Number Whose factorial is to be Calculated. ");
    scanf("%d",&n);
    long int ans=Factorial(n);
    printf("\nFACTORIAL: \t %ld",ans);
    return 0;
}
