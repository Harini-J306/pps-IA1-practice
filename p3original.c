#include<stdio.h>
int input_n()
{
  int n;
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int sum =0;
  for(int i=1; i<=n; i++)
  {
    sum= sum + i;
  }
  return sum;
}
void output(int n,int sum)
{
  for(int i=1; i<n; i++)
  {

  }
  printf("sum of %d numbers is %d\n",n,sum);
}
int main()
{
  int n,sum;
  printf("enter the maximum value\n");
  n=input()
}