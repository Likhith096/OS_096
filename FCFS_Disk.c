#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,R[100],curr,totHeadMovement=0;
    printf("Enter the number of I/O Requests\n");
    scanf("%d",&n);
    printf("Enter the Request sequence\n");
    for(int i=0;i<n;i++)
        scanf("%d",&R[i]);
    printf("Enter the Initial position of R/W head\n");
    scanf("%d",&curr);

    for(int i=0;i<n;i++)
    {
        totHeadMovement += abs(R[i] - curr);
        curr = R[i];
    }
    
    printf("Total head moment is %d", totHeadMovement);
    return 0;
}