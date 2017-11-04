#include<stdio.h>
int main()
{   int i,j,n,temp,a[10];
    printf("Enter The Size Of the Array.\n");
    scanf("%d",&n);
    printf("Enter The Array.\n");
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {   for(j=0;j<n-i-1;j++)
        {   if(a[j]>a[j+1])
            {   temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n The Array Sorted in Ascending Order . \n");
    for(i=0;i<n;i++)
    {   printf("\t%d",a[i]);
    }
    return 0;
