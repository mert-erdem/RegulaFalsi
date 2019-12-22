#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

double f(double x)
{
	return exp(x)-x-2;
}


main()
{
	double xnow,xprev;
	double a=1,b=1.8;
	short its=18;
	short i;
	xnow=(a*f(b)-b*f(a))/(f(b)-f(a));
	for(i=0;i<its;i++)
	{
		xprev=xnow;
		if(f(a)*f(xprev)<0)
		{
			b=xprev;
			xnow=(a*f(b)-b*f(a))/(f(b)-f(a));
		}
		else if(f(b)*f(xprev)<0)
		{
			a=xprev;
			xnow=(a*f(b)-b*f(a))/(f(b)-f(a));
		}
		printf("%4.8lf  %4.8lf  eps=%4.8lf\n",xprev,xnow,fabs(xnow-xprev));
		
	}
	
	
	printf("\n\nSonuc=%4.8lf",xnow);
	
	getch();
	return 0;
	
}
