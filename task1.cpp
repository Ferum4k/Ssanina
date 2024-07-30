#include <stdio.h>
#include <TXLib.h>
#include <math.h>
/*quadratic equation solver */

const double eps = 1e-5

int main()
{
    double x = 0.0, x1 = 0.0, x2 = 0.0;
    double a = 0, b = 0, c = 0;

    scanf("%f","%f","%f",&a, &b, &c);

    double D = pow(b,2) - 4 * a * c;

    if (a == 0)
        x = -c/b;
        printf("%f",x);
    else()
    {
        if (b == 0)
            D = -4*a*c;

        if (c == 0)
            D = pow(b, 2);

        if (D < 0)
            printf("No answer, unlucky");

        if (abs((D - 0)) < eps)
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
}
