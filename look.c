#include<stdio.h>
#include<stdlib.h>
int high=100;
int low=0;
int main()
{
    int ip[10],head,r[10],le[10],temp,i,j=0,k=0,l,m,n,seek=0;
    float avg;
    printf("no. of elements:");
    scanf("%d",&n);
    printf("enter q:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ip[i]);
        le[i]=low;
        r[i]=high;
    }
    printf("enter head\t:");
    scanf("%d",&head);
    for(i=0;i<n;i++)
    {
        if(head-ip[i]>0)
        {
            r[j]=ip[i];
            j++;
        }
        else
        {
            le[k]=ip[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
    {
        for(l=i+1;l<j;l++)
        {
            if(r[i]>r[l])
            {
                temp=r[i];
                r[i]=r[l];
                r[l]=temp;
            }

        }
    }
    for(i=0;i<k;i++)
    {
        for(m=0;m<k;m++)
        {

            if(le[i]<le[m])
            {
                temp=le[i];
                le[i]=le[m];
                le[m]=temp;
            }
        }
    }
    for(i=1,m=0;m<j;m++,i++)
    {

        ip[i]=le[m];
    }
    for(i=j+1,m=0;m<k;m++,i++)
    {
        ip[i]=r[m];
    }
    ip[0]=head;
    for(i=0;i<n-1;i++)
    {

        seek=seek+abs(ip[i]-ip[i+1]);
        //sprintf("%d\n",seek);

    }
    printf("total seek time %d",seek);
    avg=seek/n;
    printf("avg seek %f",avg);
}
