#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int ip[10],head,seek=0,i,min,temp,j,diff[10],tr,n;
    float avg;
    printf("enter the no. of spots:");
    scanf("%d",&n);
    printf("enter the spots:");
    for(i=0;i<n;i++){
        scanf("%d",&ip[i]);
    }
    printf("enter head pos:");
    scanf("%d",&head);
    for(i=0;i<n;i++)
    {
        diff[i]=abs(head-ip[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(diff[i]>diff[j])
            {
                temp=diff[i];
                diff[i]=diff[j];
                diff[j]=temp;

                temp=ip[i];
                ip[i]=ip[j];
                ip[j]=temp;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        //printf("head moves from %d to %d with seek",head,ip[i],abs(head-ip[i]));
        seek=seek+abs(head-ip[i]);
        head=ip[i];
    }
    printf("total seek:-%d\n",seek);
    avg=seek/n;
    printf("avg seek:-%f\n",avg);
}
