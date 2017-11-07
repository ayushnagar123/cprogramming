#include<stdio.h>
int main()
{   int m,n,i,c=0;
    int A[50];
    for(n=1,m=3;n<5,m<5;n+5,m+5)
    {   for(i=0;i<50;i++)
        {   if( (i==(2*n+1))||(i==(2*m+1)) )
            {
            }
            else
            A[i]=i;
            c++;
        }
    }
    printf("\n");
    for(i=0;i<c;i++)
    {   printf("%d",A[i]);
    }


    return 0;
}
