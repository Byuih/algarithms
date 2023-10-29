#pragma once
#include <iostream>
#include <string>

using namespace std;


bool IsKPeriodic(const std::string& str, int k) {
    int n = str.length();

    // ���������, ��� k ������ 0
    if (k <= 0) {
        std::cout << "������: k ������ ���� ������ 0" << std::endl;
        return false;
    }

    // ���������, ��� ����� ������ ������ k
    if (n % k != 0) {
        return false;
    }

    // ���������, ��� ������ ����������� ������ k ��������
    for (int i = 0; i < n - k; i += k) {
        if (str.substr(i, k) != str.substr(i + k, k)) {
            return false;
        }
    }

    return true;
}


