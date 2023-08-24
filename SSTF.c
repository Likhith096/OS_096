//Shortest Seek Time first , Disk scheduling Algorithm
//For each 'curr'(Position of R/W head) check the nearest seek time and perform it.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,R[100],curr,totHeadMovement=0,count =0;
    printf("Enter the number of I/O Requests\n");
    scanf("%d",&n);
    printf("Enter the Request sequence\n");
    for(int i=0;i<n;i++)
        scanf("%d",&R[i]);
    printf("Enter the Initial position of R/W head\n");
    scanf("%d",&curr);
    
    while(count != n) //For each curr we do 
    {
        int min = 1000, d, index;
        for (int i = 0; i < n; i++)
        {
            d = abs(R[i] - curr);
            if (min > d)
            {
                min = d;
                index = i; //This will be new curr position
            }
        }
        totHeadMovement += min;
        curr = R[index];
        R[index] = 1000; //As this is already over 
        count++;
    }

    printf("Total head movement is %d ", totHeadMovement);
    return 0;
}
    
