/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
 int num,count=1,total=0;//Intialize & define the variable

printf("Enter the number:");//Enter the input number
scanf("%d",&num);//Read the input number

while(count<=num)//Repetition
{
  total=total+count;//Calculation for the finf the total value of the numbers
  count++;
}
printf("Sum is:%d",total);//print the sum of the 1-n number


  return 0;
}
//end of the main function
