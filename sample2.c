#include<stdio.h>

int main()
{
 int fahr = 100.0;

 scanf("%d",&fahr);

 printf("fahr:%d\t celsius:%6.2f\n", fahr, (5.0/9.0) * fahr - 32.0);
}