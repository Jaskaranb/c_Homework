//write a program to print this pattern
#include<stdio.h>
int main()
{
    int rows, i,j;
    printf("enter the numbers of rows :");
    scanf("%d", &rows);
    
    for (i=1;i<=rows;i++)//1+1=2+1=3+1=4
    {
        for (j=1;j<=i;j++)//1+1=2+1=3+1=4
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
    }
    
