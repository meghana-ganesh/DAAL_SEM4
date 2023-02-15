#include<stdio.h>
#include<stdlib.h>


void input(int *arr,int n)
{
    printf("\nenter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}

void string_matching(int *arr,int *str,int n,int m)
{
    for(int i=0;i<m-n;i++)
    {

    }
}

int main()
{
    int n;
    int *arr = (int*)malloc(n*sizeof(int));
    int *str = (int*)malloc(n*sizeof(int));
    input(arr,n);
    input(str,m);
    
}