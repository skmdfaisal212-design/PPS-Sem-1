
/**
 * Return an array of arrays.
 * The sizes of the returned arrays are returned in *returnSize.
 * The sizes of the columns are returned in *returnColumnSizes.
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize,
                int* returnSize, int** returnColumnSizes) {

    int m = matrixSize;
    int n = matrixColSize[0];

    int** result = (int**)malloc(n * sizeof(int*));
    *returnColumnSizes = (int*)malloc(n * sizeof(int));

    *returnSize = n;

    for (int i = 0; i < n; i++) {
        result[i] = (int*)malloc(m * sizeof(int));
        (*returnColumnSizes)[i] = m;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}
