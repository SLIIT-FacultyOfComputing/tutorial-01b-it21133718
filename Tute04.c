/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
//Defining the functions 
int minimum(int num1,int num2);
int maximum(int num1,int num2);
int multiply(int num1,int num2);

//Start main function & calling functions
int main() {
   int no1, no2;//Define the variable
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

//called functions minimum
int minimum(int num1,int num2)
{
   int mini;//Define the variable
   if(num1>num2)
   {
     mini=num2;
   }
  else
  {
    mini=num1;
  }

   return mini;
}

//called functionsmaximum
int maximum(int num1,int num2)
{  
  int max;//Define the variable
  if(num1>num2)
  {
    max=num1;
  }
   else
   {
     max=num2;
   }
   return max;
}

//called function multiply
int multiply(int num1,int num2)
{
  int multi;//Define the variable

  multi=num1*num2;
  return multi;
}

//End of the main function