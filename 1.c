#include <stdio.h>
#include <math.h>
#include "1.h"
#include <assert.h>
#include <ctype.h>
int main(){
printf("Choose a calculator: N or T\n");
scanf("%s",&b);
if(b=='N'){
printf("+ - * / power=P\n");
printf("Enter a symbol\n");
scanf("%s",&a);
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
  case ('/'):
  double g=r/y;
  printf("Equals %lf\n",g);
  break;
  case('P'):
  double pw=pow(r,y);
  printf("Power equals %lf\n",pw);
  break;
  default:
  break;
}
}

if(b=='T'){
  printf("S-sine C-cosine T-tangent I-Square root \n");
  printf("R=sine of radians E-cosine of radians U=tangent of radians\n");
  printf("Enter a symbol\n");
  scanf("%s",&h);
  printf("Enter a number\n");
  scanf("%lf",&z);
  switch(h){
    case('S'):
    double sn=sin(z);
    printf("Equals %lf\n",sn);
    break;
    case('C'):
    double cn=cos(z);
    printf("Equals %lf\n",cn);
    break;
    case('T'):
    double tn=tan(z);
    printf("Equals %lf\n",cn);
    break;
    case('R'):
    break;
    double sr=asin(z);
    printf("Radians equals%lf\n",sr);
    break;
    case('E'):
    double cr=acos(z);
    printf("Radians equals%lf\n",cr);
    break;
    case('U'):
    double tr=atan(z);
    printf("Radians equals %lf\n",tr);
    break;
    case('I'):
    double sq=sqrt(z);
    printf("Square root equals %lf\n",sq);
    default:
    break;
  }
}


  return 0;
}
