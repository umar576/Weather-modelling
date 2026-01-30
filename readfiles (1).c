#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    FILE *file = fopen("coefficients.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read coefficients from file
    while (fscanf(file, "%lf %lf %lf", &a, &b, &c) == 3) {
        // Calculate the discriminant
        discriminant = b * b - 4 * a * c;

        // Check if roots are real
        if (discriminant >= 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots for %.2f, %.2f, %.2f are: %.2f and %.2f\n", a, b, c, root1, root2);
        } else {
            printf("No real roots for %.2f, %.2f, %.2f.\n", a, b, c);
        }
    }

    fclose(file);
    return 0;
}
