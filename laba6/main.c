#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

// ������� ��� ��������� �������� ������
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // ���������� ������� ������

        // ����������, �� � ������� ������� ��������
        if (arr[mid] == target) {
            return mid; // ��������� ������ ���������� ��������
        }

        // ���� �������� ������� ������, �� �������� ��� ��������
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // ���� �������� ������� ������, �� �������� ����� ��������
        else {
            right = mid - 1;
        }
    }

    return -1; // ��������� -1, ���� ������� �� ��������
}

int main() {
    setlocale(LC_ALL, "RU");
    int arr[] = { 2, 3, 4, 10, 40 }; // ³����������� �����
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10; // ֳ������ ������� ��� ������

    int result = binarySearch(arr, size, target);
    if (result != -1) {
        printf("������� ������ �� �������: %d\n", result);
    }
    else {
        printf("������� �� ������\n");
    }

    return 0;
}
