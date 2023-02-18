#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void input(int *arr,int n)
{
    printf("\nenter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

}

void possible_sets(int *arr,int n,int *subs,int *k)
{
    int pow_set_size = pow(2,n);
    int count = 0;
    int j = 0;
    for(count=0;count<pow_set_size;count++)
    {
        subs[*k] = 0;
        for(j=0;j<n;j++)
        {
            if(count & 1<<j)
            {
                subs[*k] += arr[j];
            }
        }
        (*k)++;
    }
    // for(int i=0;i<*k;i++)
    // {
    //     printf("%d ",subs[i]);
    // }
}


int partition_soln(int *arr,int n,int *subs,int *k)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    int key = (float)sum/2;
    int flag = 0;
    // printf("\nkey:%d",key);
    for(int i=0;i<*k;i++)
    {
        if(key == subs[i])
        {
            flag+=1;
        }
    }
    return flag;
}
// 1 5 5 11
int main()
{
    int n;
    int k=0;
    printf("\nenter no. of elements in the array:");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    int *subs = (int*)malloc(n*sizeof(int));

    input(arr,n);
    possible_sets(arr,n,subs,&k);
    if(partition_soln(arr,n,subs,&k) >= 2)
        printf("true");
    else 
        printf("false");
}