#include<stdio.h>
void binarysearch(int r,int s,int a[])
{
    int i,l=0,m;
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==s)
        {
            printf("number is found  at position %d:",m+1);
            break;
        }
        if(a[m]>s)
        {
            r=m-1;
        }
        if(a[m]<s)
        {
            l=m+1;
        }
    }
    if(l>r)
    {
        printf("number is not found:");
    }
}

int main()
{

    int r,a[100],i,l=0,m,s;
    printf("enter a range:");
    scanf("%d",&r);

    printf("enter a  %d number",r);
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter a number that you want to search :");
    scanf("%d",&s);
     binarysearch(r,s,a);
  
}