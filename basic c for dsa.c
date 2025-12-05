//WAP to area of square
#include<stdio.h>
int main()
{
    int c,a;
    printf("enter a area of side:");
    scanf("%d",&a);
    c=a*a;
    printf("%d",c);
}
//WAP to largest no ie yes and no print
#include<stdio.h>
int main()
{
    int c,a;
    printf("enter a two number:");
    scanf("%d%d",&a,&c);
    if(a<c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
//WAP even or odd 

#include<stdio.h>
int main()
{
    int c,a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
//WAP sum of 1 to n number
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            sum=sum+i;
        }
    printf("%d",sum);
}
// is number is prime 
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter a number:");
    scanf("%d",&n);
   if(n%2!=0)
        {
           printf("prime no");
        }
    else
   {
       printf("no prime ");
   }

}

//calculate of n number of factorial
#include<stdio.h>
int main()
{
    int n,b=1,i;
    printf("enter a number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        b=b*i;
    }
    printf("%d",b);
}
//given a person,s age find if they should get a driving license or not
#include<stdio.h>
int main()
{
    int n,b=1,i;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>18)
    {
        printf("driving license is applicable");
    }
    else
    {
         printf("driving license not applicable");
    }
   
}