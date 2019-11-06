#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ip[10],le[10],r[10],head,temp,l,m,n,i,j=0,k=0;
    int seek=0;
    float avg;
    printf("enter no. of elements");
    scanf("%d",&n);
    printf("enter q:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ip[i]);
    }
    printf("enter head pos");
    scanf("%d",&head);
    for(i=0;i<n;i++)
    {
        if(head>ip[i])
        {
            le[j]=ip[i];
            j++;
        }
        else
        {
            r[k]=ip[i];
            k++;
        }

    }
    for(i=0;i<k;i++)
    {
        for(l=i+1;l<k;l++)
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
        for(l=i+1;l<j;l++)
        {
            if(le[i]>le[l])
            {
                temp=le[i];
                le[i]=le[l];
                le[l]=temp;
            }
        }
    }
    for(i=1,l=0;l<j;i++,l++)
    {
        ip[i]=r[l];

    }
    for(i=j+1,l=0;l<k;i++,l++)
    {
        ip[i]=le[l];

    }
    ip[0]=head;
    for(i=0;i<n+1;i++)
    {
        seek=seek+abs(ip[i]-ip[i+1]);

    }
    for(i=0;i<n+1;i++)
    {
        printf("%d\n",ip[i]);

    }
    printf("%d",seek);



}
