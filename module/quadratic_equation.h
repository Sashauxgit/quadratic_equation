#ifndef QUEQ_H
#define QUEQ_H

typedef struct root_t {
    double x1;
    double x2;
} root_t;

int solve_equation(double a, double b, double c, root_t *roots);

#endif