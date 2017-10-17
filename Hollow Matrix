#include<stdio.h>
int main()
{
    int i , j , n,arr[10][10];
    printf("Enter a no:-");
    scanf("\n%d",&n);
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
            {
                printf("Enter a value:-");
                scanf("\n%d",&arr[i][j]);
            }
    }
    printf("Given Matrix\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
            {
                printf("%d\t",arr[i][j]);

            }
        printf("\n");
    }
    printf("Hollow Printing\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
                printf("%d\t",arr[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
}
