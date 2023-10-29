#include "IsKPeriodic.h"

int main() {

    setlocale(LC_ALL, "ru");

    std::string str;
    int k;

    std::cout << "Введите строку: ";
    std::cin >> str;

    std::cout << "Введите значение k: ";
    std::cin >> k;

    bool isKPeriodic = IsKPeriodic(str, k);

    if (isKPeriodic) {
        std::cout << "Строка является кратной числу " << k << std::endl;
    }
    else {
        std::cout << "Строка не является кратной числу " << k << std::endl;
    }

    return 0;
}
