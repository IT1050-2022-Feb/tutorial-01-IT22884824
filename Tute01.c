/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2;
  float avg;

  printf("Enter mark 1 :");
  scanf("%d", &mark1);

  printf("Enter mark 2 :");
  scanf("%d", &mark2);

  avg = (mark1 + mark2) / 2.0;

  printf("the average is % .1f", avg);

  return 0;
}
