#include "quadratic_equation.h"

#include <math.h>

int solve_equation(double a, double b, double c, root_t *roots) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                return 2;
            } else return -1;
        } else {
            roots->x1 = -c/b;
            return 1;
        }
    }

    float discriminant = b*b-4*a*c;
    if (discriminant < 0) return -1;
    
    roots->x1 = (-b + sqrt(discriminant)) / (2*a);
    roots->x2 = (-b - sqrt(discriminant)) / (2*a);

    return 0;
}