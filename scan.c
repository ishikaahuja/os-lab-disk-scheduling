#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ip[10],le[10],r[10],head,seek,temp,i,j=0,k=0,l,m,n;
    int high=100;
    int low=0;
    printf("enter q size");
    scanf("%d",&n);
    printf("enter q");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ip[i]);
    }
    printf("enter head");
    scanf("%d",&head);
    for(i=0;i<n;i++)
    {
        if(ip[i]>=head)
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
    for(i=0;i<j;i++)
    {
        printf("%d\n",r[i]);
    }

    for(i=0;i<k;i++)
    {
        for(l=i+1;l<k;l++)
        {
            if(le[i]<le[l])
            {
                temp=le[i];
                le[i]=le[l];
                le[l]=temp;
            }
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d\n",le[i]);
    }

    for(i=1,l=0;l<j;l++,i++)
    {
        ip[i]=r[l];
    }
    ip[i+1]=high;
    for(i=i+2,l=0;l<k;i++,l++)
    {
        ip[i]=le[l];
    }
    ip[i+1]=low;
    ip[0]=head;
    for(i=0;i<n+2;i++)
    {
        seek=seek+abs(ip[i]-ip[i+1]);
    }
    for(i=0;i<n+3;i++)
    {
        printf("%d\n",ip[i]);
    }
    printf("seek:-%d",seek);

}
