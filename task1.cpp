#include <stdio.h>
//#include <TXLib.h>
#include <math.h>
/*quadratic equation solver */

const double eps = 1e-5 // TODO semicolon
                        // TODO use appropriate case for consts (kEps or EPS, ...)

int main()
{
    double x = 0.0, x1 = 0.0, x2 = 0.0;
    double a = 0, b = 0, c = 0;

    scanf("%f","%f","%f",&a, &b, &c); // TODO read about format strings, mind spaces
 
    double D = pow(b,2) - 4 * a * c; // TODO space
                                     // use d, not D

    if (a == 0) // Brackets
        x = -c/b; // What if a == 0 and b == 0?
        printf("%f",x);
    else() // Nahuia???
    {
        if (b == 0) // Same (nahui?)
            D = -4*a*c;

        if (c == 0) // Same
            D = pow(b, 2);

        if (D < 0) // TODO D < -eps 
            printf("No answer, unlucky");

        if (abs((D - 0)) < eps)
        {
            x = (-b) / (2*a) ;
            printf("%f",x);
        }

        if (D > 0) // TODO D > eps
        {
            x1 = (-b + sqrt(D)) / (2*a);
            x2 = (-b - sqrt(D)) / (2*a);
            printf("%f",x1,x2); // TODO WHITESPACES AFTER COMMAS BITCH
                                // TODO format srting must be "%f %f"
        }
    }
}
