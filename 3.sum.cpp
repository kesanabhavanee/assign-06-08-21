#include <stdio.h>

int main()
{
    int a[10],i,j,sum=0;
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            sum=sum+a[i];
        }
        else if(a[i]<0)
        {
           continue; 
        }
        else
        {
            break;
        }
        
    }
    printf("%d",sum);
    return 0;
}
