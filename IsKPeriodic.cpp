#include "IsKPeriodic.h"

int main() {

    setlocale(LC_ALL, "ru");

    std::string str;
    int k;

    std::cout << "������� ������: ";
    std::cin >> str;

    std::cout << "������� �������� k: ";
    std::cin >> k;

    bool isKPeriodic = IsKPeriodic(str, k);

    if (isKPeriodic) {
        std::cout << "������ �������� ������� ����� " << k << std::endl;
    }
    else {
        std::cout << "������ �� �������� ������� ����� " << k << std::endl;
    }

    return 0;
}
