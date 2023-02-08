#include<stdio.h>
int main()
{
    int m,n,t;
    printf("enter m and n:");
    scanf("%d %d",&m,&n);
    if(m>n)
        t = n;
    else
        t = m;
    while(t != 0)
    {
        if(m % t == 0)
        {
            if(n % t == 0)
            {
            printf("GCD is %d",t);
            break;;
            }
        }
        t = t-1;
    }
}