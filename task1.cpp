#include <stdio.h>
#include <TXLib.h>
#include <math.h>

// Do not use cyrillic letters 'cause they're not shown propely on GitHub

int main() // You're goddamn frick... Well, it's totally fine to place brackets like that but only sick people do that (imho)
{		   // (Again, it's not a mistake, just me personaly disapproving it)
    double eps = pow(10,-5); // You can use 1e-5 notation. pow() function takes time to compute and this thing is known already
						     // Also it's better to move eps out of the function 'cause it can be used in other parts of your code
							 // Do not forget to make it const and static (read about this magic keywords)

    double x = 0.0, x1 = 0.0, x2 = 0.0;
    int a = 0, b = 0, c = 0;

	// What will you do if I wanna solve this: 43.4324 * x^2 + 756.232 * x + 0.54352344 = 0?
	// Hint: %f specifier works not only for printf
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

	// You can read all three numbers at once: scanf("%d %d %d", &a, &b, &c); (read about scanf format strings)

	// Place more blank lines 'cause it makes your code more readable
	// Blank line should split two chunks of the code with a separate logic
	// For example, blank line upside splits argument reading part from actual calculations
	// I placed some for now, but it's your responsibility area
    double D = pow(b,2) - 4 * a * c;
    if (D < 0) // I've already told you that should be if (D < -eps)

		// Try to use english alphabet (I have no idea what was written below)
		//						/
		//					   \/
        printf("Нет корней");

    if (abs((D - 0)) < eps)
    {
        x = (-b) / (2*a) ;
        printf("%f",x);
    } // you can use else if() here
    if (D > 0) // Same as in line 12
    {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        printf("%f",x1,x2);
    }

	// what if a == 0 or a and b are both zeroes?
}
