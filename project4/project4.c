#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
double int_leftrect(double from, double to, double n, double (*func)())
{
   double h = (to-from)/n;
   double sum = 0.0, x;
   for(x=from; x <= (to-h); x += h)
      sum += func(x);
   return h*sum;
}

int main(){
	
}