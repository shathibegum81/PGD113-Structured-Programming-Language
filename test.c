#include <stdio.h>
#include <math.h>

int main() {
  printf("My name is Shathi Begum.\n My registration number is 2022010707.\n");
  printf("Enter 3 number.\n");

  int x, y, z, sum_result;
  scanf("%d %d $d", &x, &y, &z);
  sum_result = pow(x,3) + pow(y,3) + pow(z,3) + 2*pow(x,2)*y + 3*x*y*z;
  printf("Sum result is %d\n",sum_result );

  float r, area;
  printf("Enter radius number.\n");
  scanf("%f", &r);
  area = 4*3.14159*pow(r,2);
  printf("Area is %f\n", area);

  float c, f;
  printf("Enter number in Celcius.\n");
  scanf("%f", &c);
  f = c*1.8+32;
  printf("Fahrenheit temparature is %f\n", c);
  
  printf("Enter 3 number.\n");
  float a,b,c, average;
  scanf("%f %f %f ", &a, & b, &c);
  average = (a+b+c)/3;
  printf("average number is %f\n", average);
  return 0;
}
