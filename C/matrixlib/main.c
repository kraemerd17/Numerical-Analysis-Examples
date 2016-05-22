#include "matrix.h"

void print_arr(double * arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%lf,", arr[i]);
    printf("\n");
}

int main(void) {
    srand(time(NULL));
    matrix A = randnmat(5,5);
    print(A);
    del(A);
    return 0;
}
