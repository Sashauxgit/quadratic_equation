#include "quadratic_equation.h"
#include <stdio.h>

int main(){
    root_t roots;
    double a, b, c;
    scanf("a = %lf, b = %lf, c = %lf", &a, &b, &c);
    
    int code = solve_equation(a, b, c, &roots);
    printf("code = %d, x1 = %f, x2 = %f\n", code, roots.x1, roots.x2);
    return 0;
}