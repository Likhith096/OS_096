#include<stdio.h>
#define r 3
#define c 3
void rowAdd(int mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        int rsum =0;
        for(int j=0;j<c;j++)
        {
            rsum+=mat[i][j];
        }
        printf("Row %d sum is:%d\n",i,rsum);
    }
}

void colAdd(int mat[r][c])
{
    for(int i=0;i<c;i++)
    {
        int csum =0;
        for(int j=0;j<r;j++)
        {
            csum+=mat[i][j];
        }
        printf("Row %d sum is:%d\n",i,csum);
    }
}

void display(int mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

void add(int mat[r][c])
{
    printf("Enter the matrix to be added\n");
    int mat2[r][c];
    int res[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            res[i][j] = mat[i][j] + mat2[i][j];
        }
    }
    display(res);
}

void sub(int mat[r][c])
{
    printf("Enter the matrix to be subtracted\n");
    int mat2[r][c];
    int res[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            res[i][j] = mat[i][j] - mat2[i][j];
        }
    }
    display(res);
}

int main()
{
    int mat[r][c];
    printf("Enter the matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    while(1)
    {
    printf("Enter 1 to prform row-wise addition to a matrix\nEnter 2 to perform column-wise addition to matrix\nEnter 3 to display\n");
    printf("Enter 4 to add matrices\n Enter 5 to subtract matrices\n");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: rowAdd(mat);
        break;
        case 2: colAdd(mat);
        break;
        case 3: display(mat);
        break;
        case 4: add(mat);
        break;
        case 5: sub(mat);
        break;
        default: printf("Wrong case\n");
    }
    }
    return 0;
}