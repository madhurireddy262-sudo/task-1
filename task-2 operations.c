#include <stdio.h>

// Function to add two matrices
void addMatrix(int a[2][2], int b[2][2], int sum[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrix(int a[2][2], int b[2][2], int product[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// Function to find transpose of a matrix
void transposeMatrix(int a[2][2], int trans[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            trans[j][i] = a[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[2][2], b[2][2];
    int sum[2][2], product[2][2], transA[2][2];

    // Input Matrix A
    printf("Enter elements of Matrix A (2x2):\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    // Input Matrix B
    printf("Enter elements of Matrix B (2x2):\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    // Addition
    addMatrix(a, b, sum);
    printf("\nSum of A and B:\n");
    printMatrix(sum);

    // Multiplication
    multiplyMatrix(a, b, product);
    printf("\nProduct of A and B:\n");
    printMatrix(product);

    // Transpose of A
    transposeMatrix(a, transA);
    printf("\nTranspose of A:\n");
    printMatrix(transA);

    return 0;
}