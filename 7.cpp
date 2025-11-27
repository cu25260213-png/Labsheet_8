void sumMatrix(int a[10][10], int b[10][10], int r, int c, int res[10][10]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[i][j] = a[i][j] + b[i][j];
        }
    }
}
