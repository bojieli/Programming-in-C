#include<stdio.h>
main()
{
  int a1,a2,a3,a4;
  a1=a2=a3=a4=12;
  a1+=a1;
  a2*=2+3;
  a3/=a3+a3;
  a4+=a4-=a4*=a4;
  printf("a1=%d,a2=%d,a3=%d,a4=%d\n",a1,a2,a3,a4);
}
