#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//--------------------------------------------------
const double inaccuracy = 1e-5;
//--------------------------------------------------
int LinerEquation(double a, double b, double* x1);
int QuadEquation(double a, double b, double c, double* x1, double* x2);
int isZero(double value);
//--------------------------------------------------
int main()
   {
   printf("solving the quadratic equation\n\n"
   "enter the coeffs a,b,c:\n"
   "a = ");

   double a = 0, b = 0, c = 0;
   scanf("%lg", &a);

   printf("b = ");
   scanf("%lg", &b);

   printf("c = ");
   scanf("%lg", &c);

   double x1 = 0, x2 = 0;

   if (isZero(a))
      LinerEquation(b, c, &x1);

   else
      QuadEquation(a, b, c, &x1, &x2);

   printf("\nCongrats!! Quadratic equation is solved");

   }

//--------------------------------------------------

int LinerEquation(double a, double b, double* x1)
   {
   if (!isZero(a))
      {
      *x1 = -b / a;
      printf("\n1 root: x = %lg\n", *x1);
      return 1;
      }

      if (!isZero(b))
         {
         printf("\nno roots\n");
         return 0;
         }

      if (isZero(a) && isZero(b))
         {
         printf("\ninfinity roots\n");
         return 3;
         }

      printf("ERROR IN LINER");

    }

 //--------------------------------------------------

 int QuadEquation(double a, double b, double c, double* x1, double* x2)
   {
   double d = b * b - 4 * a * c;
   if (d < 0)
      {
      printf("\nno roots\n");
      return 0;
      }

   if (isZero(d))
      {
      *x1 = -b / (2*a);
      printf("\n1 root: x = %lg\n", *x1);
      return 1;
      }

   if (d > 0)
      {
      double sqrt_d = sqrt(d);
      *x1 = (-b - sqrt_d) / (2*a);
      *x2 = (-b + sqrt_d) / (2*a);
      printf("\n2 roots: x1 = %lg x2 = %lg\n", *x1, *x2);
      return 2;
      }

   printf("ERROR IN QUADRATIC");
   }

 //--------------------------------------------------

 int isZero(double value)
    {
    if (fabs(value) >= inaccuracy)
       return 0;
       return 1;
    }
