#include <iostream>

// Функція для обчислення n!+n через параметри-вказівники
void calculateValues(int n, int* result1, int* result2) {
    // Обчислення n!+n
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    *result1 = factorial + n;

    // Обчислення 2n!
    *result2 = 2 * factorial;
}

int main() {
    int n;
    std::cout << "Введіть натуральне число n: ";
    std::cin >> n;

    int result1, result2;

    // Обчислення через параметри-вказівники
    calculateValues(n, &result1, &result2);
    std::cout << "Значення n!+n: " << result1 << std::endl;
    std::cout << "Значення 2n!: " << result2 << std::endl;

    // Обчислення через зовнішні змінні
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    int result3 = factorial + n;
    int result4 = 2 * factorial;
    std::cout << "Значення n!+n (зовнішня змінна): " << result3 << std::endl;
    std::cout << "Значення 2n! (зовнішня змінна): " << result4 << std::endl;

    return 0;
}

