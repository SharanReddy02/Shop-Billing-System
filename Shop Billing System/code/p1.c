#include<stdio.h>
void main()
{
    int a,b,c,c1,c2,c3;
    char istriangle;
do
{
    printf("enter 3 integers which are sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("a=%d\t b=%d\t c=%d",a,b,c);

    c1=a>=0 && a<=10;
     c2=b>=0 && b<=10;
      c3=c>=0 && c<=10;
      if(!c1)
      printf("the value of a=%d is not in the range of permitted value",a);

      if(!c2)
      printf("the value of b=%d is not in the range of permitted value",b);

      if(!c3)
      printf("the value of c=%d is not in the range of permitted value",c);
}
while(!(c1&&c2&&c3));

// type of triangle

if(a<b+c && b<a+c && c<a+b)
istriangle='y';
else
istriangle='n';

if(istriangle='y')
if((a==b)&&(b=c))
printf("equilateral triangle\n");

else if(a!=b && a!=c && b!=a)
printf("scalene triangle\n");
else 
printf("isoceles triangle\n");
else
printf("not a triangle\n");
}



