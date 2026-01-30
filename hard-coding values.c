#include <stdio.h>
#include <math.h>

int main() {
    // Hard-coded variables
    double a = 1.0, b = -3.0, c = 2.0; // Example coefficients for the quadratic equation
    double discriminant, root1, root2;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if roots are real
    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %.2f and %.2f\n", root1, root2);
    } else {
        printf("No real roots.\n");
    }

    return 0;
}
