#include <stdio.h>
#include <stdlib.h>
#include<limits.h> //For int_min and int_max
int main()
{
    int n, RQ[100], curr, totHM = 0, tr, dir;
    printf("Enter the number of I/O Requests\n");
    scanf("%d", &n);
    printf("Enter the Request sequence\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &RQ[i]);
    printf("Enter the Initial position of R/W head\n");
    scanf("%d", &curr);

    printf("Enter the total no of tracks in the disk:\n");
    scanf("%d", &tr); // 0 to tr-1 is range of tracks

    printf("Enter head movement direction(1 for High and 0 for Low):\n");
    scanf("%d", &dir);

    int mxtrack = tr - 1;
    int mntrack = 0;

    if (dir == 1)
    {
        int num = -1; //This number should be less than 50 and closest
        for(int i=0;i<n;i++)
        {
            if(RQ[i]<curr && RQ[i]>num)
            {
                num=RQ[i];
            }
        }
        totHM = (mxtrack - curr) + (mxtrack - mntrack) + (num - mntrack);
    }

    if(dir == 0)
    {
        int num = -1;//This number should be more than 50 and closest
        for(int i=0;i<n;i++)
        {
            if(RQ[i]<curr && RQ[i]>num)
            {
                num=RQ[i];
            }
        }
        totHM = (curr - mntrack) + (mxtrack - mntrack) + (mxtrack - num);
    }

    printf("The Total Head Movement is %d ", totHM);
    return 0;
}
//7
//82 170 43 140 24 16 190 
//50
//200