#include "quadratic_equation.h"

#include <math.h>

int solve_equation(double a, double b, double c, root_t *roots) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                return 2; // Не квадратное уравнение - бесконечно много решений
            } else return -1; // Не квадратное уравнение - нет решений
        } else {
            roots->x1 = -c/b;
            return 1; // Линейное уравнение - один корень
        }
    }

    float discriminant = b*b-4*a*c;
    if (discriminant < 0) return -1; // Нет решений (отрицательный дискриминант)
    
    roots->x1 = (-b + sqrt(discriminant)) / (2*a);
    roots->x2 = (-b - sqrt(discriminant)) / (2*a);

    return 0; // Два корня (в т. ч. совпадающих)
}
