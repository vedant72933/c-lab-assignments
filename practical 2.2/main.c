#include <stdio.h>
#include <stdlib.h>

int main()
{
       int choice;
       float a, b;
    printf("menu:\n");
    printf("1. add\n2.subtract\n3.multiply\n4.divide\n");
    printf("ENTER YOUR CHOICE (1-4):");
    scanf("%d", &choice);

    printf("ENTER TWO NUMBERS:");
    scanf("%f %f", &a, &b);
    switch(choice){
    case 1:
           printf("Result = %.2f", a + b);
           break;
    case 2:
           printf("Result = %.2f", a - b);
           break;
    case 3:
           printf("Result = %.2f", a * b);
           break;
    case 4:
           if (b != 0)
               printf("Result = %.2f",a / b);
           else
               printf("Error: Division by zero!");
           break;
    default:
       printf("Invalid choice.");
       printf("CONGURALUTIONS:\n");

}
    return 0;
}
