#include<stdio.h>
int main()
{
    int i,j,n,min,pivot,temp;
    int a[15],p;
    printf("enter a range:");
    scanf("%d",&n);
    
    printf("enter a %d number:",n);
    for(p=0;p<n;p++)
    {
        scanf("%d",&a[p]);
    }
   
    for(i=0;i<n;i++)
    {
        min=a[i];
        pivot=i;
        for(j=1+i;j<n;j++)
        {
    
        if(a[j]<min)
           {
            min=a[j];
            pivot=j;
           }            
        }  
         temp=a[i];
         a[i]=a[pivot];
         a[pivot]=temp; 
    }
    printf("after shorting");
        for(i=0;i<n;i++)
        {
        printf("%d",a[i]);
        }
    
}