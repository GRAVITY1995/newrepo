#include<stdio.h>
void main()
{
    int a[20]={5,6,8,2,6,7,5,10};
    int i,j,c=0,r[20];
    for(i=0;i<20;i++)
    {
        for(j=i+1;j<20;j++)
        {
            if(a[i]==a[j])
            {
                r[c]=a[i];
                c++;
            }
        }
    }
    printf("1st repeting %d \n",r[0]);
    printf("2nd repeting %d ",r[1]);
}
