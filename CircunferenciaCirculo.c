#include <stdio.h>

int main(int argc, char const *argv[])
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\n ENTER THE RADIUS OF A CIRCLE: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCIRCUMFERENCE: %lf", circumference);
    printf("\nAREA: %lf", area);

    printf("\n\n"); //BAJA EL MENSAJE DE LA TERMINAL

    return 0;
}
