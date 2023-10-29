#pragma once
#include <iostream>
#include <string>

using namespace std;


bool IsKPeriodic(const std::string& str, int k) {
    int n = str.length();

    // Проверяем, что k больше 0
    if (k <= 0) {
        std::cout << "Ошибка: k должно быть больше 0" << std::endl;
        return false;
    }

    // Проверяем, что длина строки кратна k
    if (n % k != 0) {
        return false;
    }

    // Проверяем, что строка повторяется каждые k символов
    for (int i = 0; i < n - k; i += k) {
        if (str.substr(i, k) != str.substr(i + k, k)) {
            return false;
        }
    }

    return true;
}


