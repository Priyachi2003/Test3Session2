#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct_fraction Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("enter the fraction\n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
Fraction largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  if((f1.num/f1.den)>(f2.num/f2.den) && (f1.num/f1.den)>(f3.num/f3.den))
 return f1.num/f1.den;
  else if((f2.num/f2.den)>(f3.num/f3.den))
    return f2.num/f2.den;
  else
    return f3.num/f3.den;
  }
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  if(largest==f1)
    printf("%d",f1);
  else if(largest==f2)
    printf("%d",f2);
  else
    printf("%d",f3);
}
int main()
{
  Fraction f1,f2,f3,largest;
  f1= input_fraction();
f2= input_fraction();
  f3= input_fraction();
  largest=largest_fraction();
  output(f1,f2,f3,largest);
  return 0;
  
}


  
  
  