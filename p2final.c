#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;

Fraction input_fraction()
{
  printf("enter any number\n");
  scanf("%d %d %d %d %d %d",&num1,&den1,&num2,&den2,&num3,&den3);
}
Fraction smallest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  Fraction x;
  if(f1=den2*den3*x/den1)
    return f1;
  else if(f2=den1*den3/den2)
    return f2;
  else
    return f3;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
{
  if(smallest==f1)
    printf("%d is smallest",f1);
  else if(smallest==f2)
    printf("%d is smallest",f2);
  else
    printf("%d is smallest",f3);
}
int main()
{
  Fraction f1,f2,f3,smallest;
  int num1= input_fraction();
  int den1= input_fraction();
  int num2= input_fraction();
  int den2= input_fraction();
  int num3= input_fraction();
  int den3= input_fraction();
  smallest_fraction(f1, f2, f3);
  output( f1,f2,f3, smallest);
  return smallest;
}