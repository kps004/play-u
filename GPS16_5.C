/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a[100],p,i,j,k,l,n,min;
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<k;i++)
   {
       min = a[i];
      for(j=i;j<k;j++)
      {
          if(min>=a[j])
          {
              p=j;
              min=a[j];
          }
      }
      a[p]=a[i];
      a[i]=min;
       
   }
//......................
 for(i=k;i<n;i++)
   {
       min = a[i];
      for(j=i;j<n;j++)
      {
          if(min<a[j])
          {
              p=j;
              min=a[j];
          }
      }
      a[p]=a[i];
      a[i]=min;
       
   }
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }

    return 0;
}
