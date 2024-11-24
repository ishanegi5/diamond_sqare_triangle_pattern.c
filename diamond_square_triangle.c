#include<stdio.h>
int main()
{ int i,j,k;
printf("Tringle= \n");
   for(i=0;i<5;i++)
   {
    for(j=i;j<5;j++)
    {
        printf(" ");
    }
    for(k=0;k<=i;k++)
    {
        printf("* ");
    }
    printf("\n");
   }
   printf("\n");
   printf("Square= \n");
   for(i=0;i<5;i++)
   {
    for(j=0;j<1;j++)
    {
        printf(" ");
    }
    for(k=0;k<5;k++)
    {
        printf("* ");
    }
    printf("\n");
   }
   printf("\n");
   printf("Diamond= \n");
   for(i=0;i<5;i++)
   {
    for(j=i;j<5;j++)
    {
        printf(" ");
    }
    for(k=0;k<=i;k++)
    {
        printf("* ");
    }
    if(i<=4)
    {
       printf("\n");
    }
    
   }
   for(i=4;i>0;i--)
   {
    for(j=5;j>=i;j--)
    {
        printf(" ");
    }
    for(k=0;k<i;k++)
    {
        printf("* ");
    }
    printf("\n");
   }
   printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
