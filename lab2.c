
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    printf("Discriminant calculator\n");
    
    printf("Enter a:\n");
    scanf("%d", &a);
 printf("Enter b:\n");
    scanf("%d", &b);
printf("Enter c:\n");
    scanf("%d", &c);
    int d;
  d=(b*b)-4*a*c;
  if (d>0)
  {
    printf("D = %d", d);
    printf(" (2 korenya)"); 
  }
  if (d<0)
  {
      printf("D = %d", d);
      printf(" (koreniv ne maye)");
  }
  if (d==0)
  {
      printf("D = %d", d);

      printf(" (1 korin)");
  } 
    return 0;
}

