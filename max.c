#include<stdio.h>
void main()
{

    int i,a[20]={2000,2000,15,65,35,2000},high,sec,c;
    high=a[0];sec=a[1];
     if(high<sec)
    {
        c=high;
        high=sec;
        sec=c;
    }
    for(i=0;i<6;i++)
    {
        if(high=sec)
     {
         sec=a[i];
     }
        if(a[i]>high)
        {
            sec=high;
            high=a[i];
        }
        else if(a[i]!=high&&a[i]>sec)
        {
            sec=a[i];
        }
    }
    printf("max value in array %d",high);
    printf("\n second largest is %d",sec);
}
//101.prashant@gmail.com
