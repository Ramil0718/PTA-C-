#include<stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	if(x==10)
		printf("f(10.0) = 0.1");
	else
		printf("f(%.1lf) = %.1lf",x,x);
}
