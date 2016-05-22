#include "matrix.h"

double randu() {
    return ((float) rand()) / RAND_MAX;
}

double randn() {
    double u1 = randu();
    double u2 = randu();

    double R = -2.0 * log(u1);
    double theta = 2 * PI * u2;

    return R * R * cos(theta);
}

matrix randmat(int rows, int cols) {
    double * arr = malloc(rows * cols * sizeof(double));
    for (int i = 0; i < rows * cols; arr[i++] = randu());
    matrix mat = init(arr, rows, cols);
    free(arr);

    return mat;
}

matrix randnmat(int rows, int cols) {
    double * arr = malloc(rows * cols * sizeof(double));
    for (int i = 0; i < rows * cols; arr[i++] = randn());
    matrix mat = init(arr, rows, cols);
    free(arr);

    return mat;
}
