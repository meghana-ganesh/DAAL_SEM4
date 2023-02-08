#include<stdio.h>
#include<stdlib.h>

int isPrime(int x)
{
    int count = 0;
    for(int i=2;i<x+1;i++)
    {
        if(x%i == 0)
        {
            count++;
        }
    }
    if(count == 1)
        return 1;
    else 
        return 0;
}

void primefactorization(int *exp,int *cst,int m,int *k)
{
    int count=0;
    for(int i=2;i<m+1;i++)
    {
        int n = m;
        if(isPrime(i)==1 && (m%i)==0)
        {
            while((n%i) == 0)
            {
                count++;
                n = (float)n/i;
                printf("n:%d\n",n);
            }
        }
        if(count>0)
        {
            printf("count:%d\n",count);
            cst[*k] = i;
            printf("i:%d\n",i);
            exp[*k] = count;
            (*k)++;
            count = 0;
        }
        else
        {
            count = 0;
        }
    }
}


int main()
{
    int *cst;
    int *exp;
    int k = 0;
    cst = (int*)malloc(20*sizeof(int));
    exp = (int*)malloc(20*sizeof(int));
    primefactorization(exp,cst,36,&k);
    for(int i=0;i<k;i++)
    {
        printf("%d^%d ",cst[i],exp[i]);
    }
    return 0;
}