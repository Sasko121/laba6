#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

// Функція для виконання бінарного пошуку
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Обчислюємо середній індекс

        // Перевіряємо, чи є середній елемент цільовим
        if (arr[mid] == target) {
            return mid; // Повертаємо індекс знайденого елемента
        }

        // Якщо цільовий елемент більший, то ігноруємо ліву половину
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // Якщо цільовий елемент менший, то ігноруємо праву половину
        else {
            right = mid - 1;
        }
    }

    return -1; // Повертаємо -1, якщо елемент не знайдено
}

int main() {
    setlocale(LC_ALL, "RU");
    int arr[] = { 2, 3, 4, 10, 40 }; // Відсортований масив
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10; // Цільовий елемент для пошуку

    int result = binarySearch(arr, size, target);
    if (result != -1) {
        printf("Елемент найден на индексе: %d\n", result);
    }
    else {
        printf("Елемент не найден\n");
    }

    return 0;
}
