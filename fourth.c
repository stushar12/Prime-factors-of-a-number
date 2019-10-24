#include<stdio.h>
int main()
{
  int n;
  printf("\n Enter the value of n= ");
  scanf("%d",&n);
  printf("\n Prime factors are \n");
  for(int i=2;i<=n;i++)
  {
    while(n%i==0)
    {
      printf("%d ",i);
      n=n/i;
    }
  }
}
