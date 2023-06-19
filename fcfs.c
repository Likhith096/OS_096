#include<stdio.h>
int main()
{
    printf("Enter the number of process\n");
    int n;
    scanf("%d",&n);
    printf("Enter the Burst time in each process\n");
    int burstTime[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&burstTime[i]);
    }
    int waitingTime[n];
    int turnaroundTime[n];
    waitingTime[0] = 0;
    turnaroundTime[0] = waitingTime[0] + burstTime[0];
    for(int i=1;i<n;i++)
    {
        waitingTime[i] = waitingTime[i-1] + burstTime[i-1];
        turnaroundTime[i] = waitingTime[i] + burstTime[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("For Process %d :Waiting Time is %d and Turnaround time is %d\n",i+1,waitingTime[i],turnaroundTime[i]);
    }
    float avgwait = 0.0 , avgturnaround = 0.0;
    for(int i=0;i<n;i++)
    {
        avgwait += waitingTime[i];
        avgturnaround += turnaroundTime[i];
    }
    avgwait /= n;
    avgturnaround /= n;
    printf("Average waiting time is %f ",avgwait);
    printf("\nAverage Turnaround time is %f ",avgturnaround);

    return 0;
}