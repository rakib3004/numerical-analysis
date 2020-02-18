#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(X) ((X)-(4*sin(X)))
#define fp(X) (1- 4*(cos(X)))
#define EPS 1.0e-9
int main()
{

int n=0;
double a=2,x0;
while(1){
//get root
x0=a-(f(a)/fp(a));
n++;

if(fabs(f(x0))<EPS){
printf("root =%lf\n",x0);
printf("No of itr. = %d\n",n);
exit(0);
}

//next loop
//printf("\n%lf\n",a);
 a=x0;
//printf("%lf\n",a);
  }
}
