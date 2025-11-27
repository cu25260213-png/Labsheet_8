void fibonacci(int terms) {
    int a = 0, b = 1, c;
    for (int i = 1; i <= terms; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}
