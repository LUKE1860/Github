#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <time.h>
int main(){
  char b;
  char a;
  char h;
  double r;
  double y;
  double z;
  
  /*clock_t start_t, end_t;
     double total_t;
start_t=clock();*/
printf("Choose a calculator: N or T\n");
scanf("%s",&b);
if(b=='N'){
printf("+ - * / power=P\n");
printf("Enter a symbol\n");
scanf("%s",&a);
switch (a){
  case ('+'):
  printf("Enter a number\n");
  scanf("%lf",&r);
  printf("Enter a second number\n");
  scanf("%lf",&y);
  double s=r+y;
  printf("Equals %lf\n",s);
  break;
  case ('-'):
  printf("Enter a number\n");
  scanf("%lf",&r);
  printf("Enter a second number\n");
  scanf("%lf",&y);
  double c=r-y;
  printf("Equals %lf\n",c);
  break;
  case ('*'):
  printf("Enter a number\n");
  scanf("%lf",&r);
  printf("Enter a second number\n");
  scanf("%lf",&y);
  double d=r*y;
  printf("Equals %lf\n",d);
  break;
  case ('/'):
  printf("Enter a number\n");
  scanf("%lf",&r);
  printf("Enter a second number\n");
  scanf("%lf",&y);
  double g=r/y;
  printf("Equals %lf\n",g);
  break;
  case('P'):
  printf("Enter a number\n");
  scanf("%lf",&r);
  printf("Enter a second number\n");
  scanf("%lf",&y);
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
  switch(h){
    case('S'):
    printf("Enter a number\n");
    scanf("%lf",&z);
    double sn=sin(z);
    printf("Equals %lf\n",sn);
    break;
    case('C'):
    printf("Enter a number\n");
    scanf("%lf",&z);
    double cn=cos(z);
    printf("Equals %lf\n",cn);
    break;
    case('T'):
    printf("Enter a number\n");
    scanf("%lf",&z);
    double tn=tan(z);
    printf("Equals %lf\n",tn);
    break;
    case('R'):
    printf("Enter a number\n");
    scanf("%lf",&z);
    double sr=asin(z);
    printf("Radians equals %lf\n",sr);
    break;
    case('E'):
    printf("Enter a number\n");
    scanf("%lf",&z);
    double cr=acos(z);
    printf("Radians equals %lf\n",cr);
    break;
    case('U'):
    printf("Enter a number\n");
    scanf("%lf",&z);
    double tr=atan(z);
    printf("Radians equals %lf\n",tr);
    break;
    case('I'):
    printf("Enter a number\n");
    scanf("%lf",&z);
    double sq=sqrt(z);
    printf("Square root equals %lf\n",sq);
    default:
    break;
}
}
/*end_t=clock();
printf("%ld\n",end_t);
total_t=(double)(end_t-start_t);
printf("%f\n",total_t);*/
return 0;
}
