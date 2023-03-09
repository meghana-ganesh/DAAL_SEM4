#include<stdio.h>
#include<stdlib.h>


void createadjmat(int **mat,int v)
{
    int c;
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            printf("\ndoes vertex %d have an edge with %d(Y/N)?",i+1,j+1);
            fflush(stdin);
            scanf("%c",&c);
            if(c == 'Y' || c == 'y')
                mat[i][j] = 1;
            else if(c == 'N' || c == 'n')
                mat[i][j] = 0;
            else
            {
                printf("invalid character entered!!");
                return;
            }
        }
    }
}

void dfs_traversal(int **mat,int v,int start)
{
    int tos = -1,i = start-1,k = 0,empty = 1;
    int *stack = (int*)malloc(v*sizeof(int));
    int visited[v],visit_order[v];
    
    stack[++tos] = start;
    visited[start] = 1;
    visit_order[k++] = start;


    while(tos < v-1)
    {
        for(int j=0;j<v;j++)
        {
            empty = 1;
            if(mat[i][j] == 1 && visited[j+1] != 1)
            {
                empty = 0;
                stack[++tos] = j+1;
                visited[j+1] = 1;
                visit_order[k++] = j+1; 
                i = j;
                break;
            }
            
        }
        if(empty == 1)
        {
            if(tos != -1)
            {
                
            }
        }
       

    }

    
    for(int i=tos;i>-1;i--)
    {
        printf("%d ",stack[i]);
    }

    printf("\nvisit order:\n");
    for(int j=0;j<k;j++)
    {
        printf("%d ",visit_order[j]);
    }
}

void display(int **mat,int v)
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int v,e;
    printf("enter the no. of vertices:");
    scanf("%d",&v);
    printf("\nenter the no. of edges:");
    scanf("%d",&e);
    int **mat = (int**)malloc(v*sizeof(int*));
    
    for(int i=0;i<v;i++)
    {
        mat[i] = (int*)malloc(v*sizeof(int));
    }
    createadjmat(mat,v);
    display(mat,v);
    dfs_traversal(mat,v,3);
}