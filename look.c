#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, RQ[100], curr, totHM = 0, tr;
    printf("Enter the number of I/O Requests\n");
    scanf("%d", &n);
    printf("Enter the Request sequence\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &RQ[i]);
    printf("Enter the Initial position of R/W head\n");
    scanf("%d", &curr);

    printf("Enter the total no of tracks in the disk:\n");
    scanf("%d", &tr); // 0 to tr-1 is range of tracks

    //direction considered- towards larger values first
    int max=RQ[0];
    int min=RQ[0];
    for(int i=0;i<n;i++)
    {
        if(RQ[i]>max)
        {
            max=RQ[i];
        }
        if(RQ[i]<min)
        {
            min=RQ[i];
        }
    }
    totHM=(max-curr)+(max-min);
    printf("The Total Head Movement is %d ", totHM);
    return 0;
}
//7
//82 170 43 140 24 16 190 
//50
//200