#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef _fraction Fraction
Fraction input_fraction()
{
  Fraction f;
  printf("enter the fraction\n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
fraction largest_fraction(fraction f1,fraction f2,fraction f3)
{
  f1=f1.num/f1.den;
  f2=f2.num/f2.den;
  f3=f3.num/f3.den;
  if((f1.num/f1.den)>(f2.num/f2.den) && (f1.num/f1.den)>(f3.num/f3.den))
 return f1.num/f1.den;
  else if((f2.num/f2.den)>(f3.num/f3.den))
    return f2.num/f2.den;
  else
    return f3.num/f3.den;
  