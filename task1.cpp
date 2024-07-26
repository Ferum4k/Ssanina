#include <stdio.h>
#include <TXLib.h>
#include <math.h>
/*Решалка квадратных уравнений */

main()
{
    double x = 0.0, x1 = 0.0, x2 = 0.0;
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    double D = pow(b,2) - 4 * a * c;
    if (D < 0)
        printf("Нет корней");
    if (D == 0)
    {
        x = (-b) / (2*a) ;
        printf("%f",x);
    }
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        printf("%f",x1,x2);
    }
}
