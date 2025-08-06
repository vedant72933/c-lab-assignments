#include <stdio.h>
#include <math.h>

int main()
{
       float a,b,c, discriminant, root1,root2, realpart,imagpart;


    printf("ENTER COEFFICIENTS a, b and c:");
    scanf("%f%f%f",&a , &b, &c);

    discriminant = b * b - 4 * a * c;

    if(discriminant > 0){
       root1 = (-b + sqrt(discriminant)) / (2 * a);
       root2 = (-b - sqrt(discriminant)) / (2 * a);
       printf("Real and distinct roots: %.2f and %.2f", root1, root2);

    }else if (discriminant == 0){
           root1 = -b / (2 * a);
           printf("Real and equal roots: %.2f and %.2f", root1, root1);
    }else{
    realpart = -b/ (2 * a);
    imagpart = sqrt(-discriminant)/(2 * a);
    printf("complex roots: %.2f + %.2f - %.2f",
           realpart,imagpart,realpart,imagpart);
           }
    return 0;
}
