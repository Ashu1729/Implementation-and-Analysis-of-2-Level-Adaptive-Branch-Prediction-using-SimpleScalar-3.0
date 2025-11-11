#include <stdio.h>
#include <stdlib.h>

#define N 32

void matmul(float A[N][N], float B[N][N], float C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            float sum = 0.0f;
            for (int k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

int main() {
    float A[N][N], B[N][N], C[N][N];

    // Initialize matrices A and B
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = (float)(i * j);
            B[i][j] = (float)(i + j);
            C[i][j] = 0.0f;
        }
    }

    matmul(A, B, C);

    // Prevent compiler optimization by printing one value
    printf("C[0][0] = %f\n", C[0][0]);

    return 0;
}

