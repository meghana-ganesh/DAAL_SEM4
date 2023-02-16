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

int partition_soln(int *arr,int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    int key = (float)sum/2;
    int flag = 0;
    printf("\nkey:%d",key);
//     while(flag != 1 && n>0)
//     {
//         for(int i=n;i>0;i--)
//         {
//             ()

//         }
//     }
    return flag;
}
// 1 5 5 11
int main()
{
    int n;
    printf("\nenter no. of elements in the array:");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    input(arr,n);
    if(partition_soln(arr,n) >= 1)
        printf("true");
    else 
        printf("false");
}
