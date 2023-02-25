#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void addno2(float a, float b);
void addno3(float a, float b, float c);
void addno4(float a, float b, float c, float d);
void addno5(float a, float b, float c, float d, float e);
void sub(float a, float b);
void multi2(float a, float b);
void multi3(float a, float b, float c);
void multi4(float a, float b, float c, float d);
void multi5(float a, float b, float c, float d, float e);
void division(float a, float b);
void square(float a);
void squarert(float a);
void cubert(float a);
// void fact(int a);
void addno2(float a, float b)
{
     float r;
     r = a + b;
     printf("Sum of %f and %f is %f\n", a, b, r);
}

void addno3(float a, float b, float c)
{
     float r;
     r = a + b + c;
     printf("Sum of %f, %f and %f is %f\n", a, b, c, r);
}

void addno4(float a, float b, float c, float d)
{
     float r;
     r = a + b + c + d;
     printf("Sum of %f, %f, %f and %f is %f\n", a, b, c, d, r);
}

void addno5(float a, float b, float c, float d, float e)
{
     float r;
     r = a + b + c + d + e;
     printf("Sum of %f, %f, %f, %f and %f is %f\n", a, b, c, d, e, r);
}

void sub(float a, float b)
{
     float r;
     r = a - b;
     printf("Diffrence of %f and %f is %f", a, b, r);
}

void multi2(float a, float b)
{
     float r;
     r = a * b;
     printf("Product of %f and %f is %f\n", a, b, r);
}

void multi3(float a, float b, float c)
{
     float r;
     r = a * b * c;
     printf("Product of %f, %f and %f is %f\n", a, b, c, r);
}

void multi4(float a, float b, float c, float d)
{
     float r;
     r = a * b * c * d;
     printf("Product of %f, %f, %f and %f is %f\n", a, b, c, d, r);
}

void multi5(float a, float b, float c, float d, float e)
{
     float r;
     r = a * b * c * d * e;
     printf("Product of %f, %f, %f, %f and %f is %f\n", a, b, c, d, e, r);
}

void division(float a, float b)
{
     float r;
     r = a / b;
     printf("Division of %f and %f is %f\n", a, b, r);
}

void square(float a)
{
     float r;
     r = pow(a, 2);
     printf("Square of %f is %f\n", a, r);
}

void squarert(float a)
{
     float r;
     r = pow(a, 1/2);
     printf("Square root of %f is %f\n", a, r);
}

void cubert(float a)
{
     float r;
     r = pow(a, 3);
     printf("Cube of %f is %f\n", a, r);
}

void main()
{
     float a, b, c, d, e;
     int x, y, z;
     printf("Please enter your choice \n");
     printf("1. Addition\n");
     printf("2. Substraction\n");
     printf("3. Multiplication\n");
     printf("4. Division\n");
     printf("5. Square of a number\n");
     printf("6. Square root\n");
     printf("7. Cube root\n");
     // printf("8. Factorial\n");
     scanf("%d", &x);
     //clrscr();
     switch (x)
     {
     case 1:
          printf("Enter your choice:--\n");
          printf("1. Addition of 2 numbers\n");
          printf("2. Addition of 3 numbers\n");
          printf("3. Addition of 4 numbers\n");
          printf("4. Addition of 5 numbers\n");
          scanf("%d", &y);
          //clrscr();
          if (y == 1)
          {
               printf("Enter first number:--\n");
               scanf("%f", &a);
               printf("Enter second number:--\n");
               scanf("%f", &b);
               addno2(a, b);
          }
          if (y == 2)
          {
               printf("Enter first number:--\n");
               scanf("%f", &a);
               printf("Enter second number:--\n");
               scanf("%f", &b);
               printf("Enter third number:--\n");
               scanf("%f", &c);
               addno3(a, b, c);
          }

          if (y == 3)
          {
               printf("Enter first number:--\n");
               scanf("%f", &a);
               printf("Enter second number:--\n");
               scanf("%f", &b);
               printf("Enter third number:--\n");
               scanf("%f", &c);
               printf("Enter fourth number:--\n");
               scanf("%f", &d);
               addno4(a, b, c, d);
          }

          if (y == 4)
          {
               printf("Enter first number:--\n");
               scanf("%f", &a);
               printf("Enter second number:--\n");
               scanf("%f", &b);
               printf("Enter third number:--\n");
               scanf("%f", &c);
               printf("Enter fourth number:--\n");
               scanf("%f", &d);
               printf("Enter fifth number:--\n");
               scanf("%f", &e);
               addno5(a, b, c, d, e);
          }
          break;

     case 2:
          printf("Enter larger number:--\n");
          scanf("%f", &a);
          printf("Enter Smaller number:--\n");
          scanf("%f", &b);
          sub(a, b);
          break;

     case 3:
          printf("Enter your choice:--\n");
          printf("1. Multiplication of 2 numbers\n");
          printf("2. Multiplication of 3 numbers\n");
          printf("3. Multiplication of 4 numbers\n");
          printf("4. Multiplication of 5 numbers\n");
          scanf("%d", &y);
          //clrscr();
          if (y == 1)
          {
               printf("Enter first number:--\n");
               scanf("%f", &a);
               printf("Enter second number:--\n");
               scanf("%f", &b);
               multi2(a, b);
          }
          if (y == 2)
          {
               printf("Enter first number:--\n");
               scanf("%f", &a);
               printf("Enter second number:--\n");
               scanf("%f", &b);
               printf("Enter third number:--\n");
               scanf("%f", &c);
               multi3(a, b, c);
          }

          if (y == 3)
          {
               printf("Enter first number:--\n");
               scanf("%f", &a);
               printf("Enter second number:--\n");
               scanf("%f", &b);
               printf("Enter third number:--\n");
               scanf("%f", &c);
               printf("Enter fourth number:--\n");
               scanf("%f", &d);
               multi4(a, b, c, d);
          }

          if (y == 4)
          {
               printf("Enter first number:--\n");
               scanf("%f", &a);
               printf("Enter second number:--\n");
               scanf("%f", &b);
               printf("Enter third number:--\n");
               scanf("%f", &c);
               printf("Enter fourth number:--\n");
               scanf("%f", &d);
               printf("Enter fifth number:--\n");
               scanf("%f", &e);
               multi5(a, b, c, d, e);
          }
          break;

     case 4:
          printf("Enter number:--\n");
          scanf("%f", &a);
          printf("Enter Divisor:--\n");
          scanf("%f", &b);
          division(a, b);
          break;

     case 5:
          printf("Enter the number:--\n");
          scanf("%f", &a);
          square(a);
          break;

     case 6:
          printf("Enter the number:--\n");
          scanf("%f", &a);
          squarert(a);
          break;

     case 7:
          printf("Enter the number:--\n");
          scanf("%f", &a);
          cubert(a);
          break;

     /*case 8 :
     printf("Enter the number:--\n");
     scanf("%d",&a);
     fact(a);
     break;
     */
     default:
          printf("Enter a valid input\n");
          getchar();
     }
}
