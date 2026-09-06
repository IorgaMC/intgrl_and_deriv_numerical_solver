#include <iostream>
#include "math_functions.h"
#include <cmath>
#include <numbers>

// Make a derivation system. Using small spaces between equations create graphs for this equtions that we are working
// Use a furier series or a nother type of system like a taylor series to define the functions found and work them out

 //////////////////////////////////////////////// DASH BOARD ////////////////////////////////////////////////

double f(double x) {
    // FUNCTION

    return sin(x)*x;
}

bool
intrg = true,
deriv = false,
mk_dt_i=true,
mk_dt_d=false;

double
// Integral constants

low_i = -50,
high_i = 50,
space = 0.001,

// Derivative constants

low_d = 0,
high_d = 1,
point = pi(),
h = 1e-4;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////




int main() {
    clock_t start = clock();

    if (mk_dt_i) solve_dt_i(low_i, high_i, space);
    if (intrg)  solve_i(low_i, high_i, space);
    if (mk_dt_d) solve_dt_d(low_d, high_d, h);
    if (deriv)  solve_d(point, h);

    std::cout << static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
    return 0;
}
