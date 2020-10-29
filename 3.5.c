#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main(void)
{
int n,i,m=0, flag=0;
  void sigint_handler(int sig);

{
  printf("Enter the number to check prime:");
  scanf("%d", &n);
  m=n/2;
}
  for(i=2; i<m; i++)
{
if(n%i==0)
{
printf("Number is not prime. \n\n");
flag=1;
break;
}
}
if(flag == 0)
printf("Number is prime. \n\n");
return 0;
}

void sigint_handler(int sig)
{
  printf("Jangan Kacau saya! \n");
}

