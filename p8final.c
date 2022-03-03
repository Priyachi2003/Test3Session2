#include <stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
int find_gcd(int a, int b)
{
  int t;
  while(b!=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
Fraction input_fraction()
{
  Fraction f;
  printf("input a fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
int input_n_fractions(int n, Fraction f[n])
{
  printf("enter the n number of fraction\n");
  scanf("%d",&n);
for(int i=0;i<n;i++)
  {
    f[i]=input_fraction();
  }}
Fraction add_fractions(Fraction f1, Fraction f2)
{
   Fraction sum;
   sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g=find_gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction sum;
  for(int i=0;i<n;i++)
    {
sum=add_fractions(sum,f[i]);
  }
  return sum;
}
void output(int n, Fraction f[n], Fraction sum)
{
 int i;
  for(i=0;i<n;i++)
    {
      printf("%d/%d",f[i].num,f[i].den);
    }
  printf("%d/%d",f[i].num,f[i].den);
  printf("is %d/%d\n",sum.num,sum.den);
}
int main()
{
  
  Fraction f1,f2,sum,f;
  //int f[n];
  input_n_fractions(int n, f);
  add_n_fractions(int n,f);
  output(int n, f,sum);
  return 0;
  } 
  
  
  