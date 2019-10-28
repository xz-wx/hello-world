#include <stdio.h>
#define N 5
int main()
{
    int a[5],i,j,k;
    for(i=0;i<=4;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<=4;i++)
 {
  for(j=0;j<=4;j++)
  {
   if(a[i]>a[j])
   {
    k=a[i]; a[i]=a[j]; a[j]=k;
   }
  }
 }
 printf("最大的五位数是：\n");
 for(i=0;i<=4;i++)
 {
  printf("%d",a[i]);
 }
    return 0;
}

