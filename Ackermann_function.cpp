#include <iostream>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int m, n;
    std::cout << "Enter values for m and n: ";
    std::cin >> m >> n;

    int result = ackermann(m, n);
    std::cout << "A(" << m << ", " << n << ") = " << result << std::endl;

    return 0;
}
