#include <stdio.h>
#include <math.h>
#include "1.h"
#include <assert.h>
#include <ctype.h>
int main(){
printf("+ - * /\n");
printf("S-sine C-cosine T-tangent\n");
printf("Sr=sine of radians Cr-cosine of radians Tr=tangent of radians\n");
printf("Enter a symbol\n");
scanf("%s",&a);
assert(isalnum(a));
printf("Enter a number\n");
scanf("%lf",&r);
printf("Enter a second number\n");
scanf("%lf",&y);
switch (a) {
  case ('+'):
  double s=r+y;
  printf("Equals %lf\n",s);
  break;
  case ('-'):
  double c=r-y;
  printf("Equals %lf\n",c);
  break;
  case ('*'):
  double d=r*y;
  printf("Equals %lf\n",d);
  break;
default:
printf("Try again\n");
}




  return 0;
}
