#include<stdio.h>
int main()
{
   float base,height,area;
   printf("Base= ");
   scanf("%f",&base);
   printf("Height= ");
   scanf("%f",&height);
   area = (float) 0.5*base*height;
   printf("Area= %0.2f\n",area);

}
