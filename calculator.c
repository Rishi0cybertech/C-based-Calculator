#include <stdio.h>
int main ()
{
  int a, b;
  int sum, multiplication, division, substraction, choice;
  
  printf("Enter the value of a : ");
  scanf("%d", &a);
  printf("Enter the value of b : ");
  scanf("%d", &b);
  
  printf("For Addition press 1\n");
  printf("For Multiplication press 2\n");
  printf("For Division press 3\n");
  printf("For Substraction press 4\n");

  scanf("%d", &choice);
  printf("You choosed %d , here is your answer\n");

  switch(choice)
    {
      case 1:
      sum = a + b;  
      printf("The sum is %d", sum);
      break;

      case 2: 
      multiplication = a * b;
      printf("The product is %d", multiplication);
      break;

      case 3:
      division = a / b;
      printf("The division is %d", division);
      break;

      case 4:
      substraction = a - b;
      printf("The substraction is %d", substraction);
      break;

      default:
      printf("error");
    };
  return 0;
}
