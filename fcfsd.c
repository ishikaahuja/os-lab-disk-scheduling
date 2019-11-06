#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ip[10],head,n,seek=0,diff=0,i;
    float avg;
    printf("enter the size of q:");
    scanf("%d",&n);
    printf("enter head:");
    scanf("%d",&head);
    printf("enter q");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ip[i]);
    }
    diff=abs(ip[0]-head);
    seek=seek+diff;
    printf("head moves from---%d-->%d with seek %d\n",head,ip[0],diff);
    for(i=0;i<n-1;i++)
    {
        diff=abs(ip[i]-ip[i+1]);
        seek=seek+diff;
        printf("head moves from---%d-->%d with seek %d\n",ip[i],ip[i+1],diff);
    }
    avg=seek/n;
    printf("avg seek time %f",avg);

}
