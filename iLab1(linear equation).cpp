#include <stdio.h>

int main()
   {
   printf("solving the linear equation\n"
   "enter coeffs a,b for equation: ax + b = 0\n\n"
   "a = ");

   double a = 0;
   scanf("%lg", &a);

   printf("b = ");

   double b = 0;
   scanf("%lg", &b);

   printf("\n"
   "solving the equation: %lgx + %lg = 0\n", a, b);

   if (a != 0)
      printf("1 root: x=%lg\n\n", -b/a);

   else
       {
       if (b != 0)
          printf("no roots\n\n");

       else
          printf("infinity roots\n\n");
        }

   printf("The linear equation is solved");

   return 0;

   }
