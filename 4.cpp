#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 25; // Максимальный размер массива
    int N;
    double arr[size];
    cout << "Введите количество элементов в массиве (макс. " << size << "): ";
    cin >> N;
    if (N > size) {
        cout << "Слишком много элементов. Максимум " << size << "." << endl;
        return 1;
    }
    cout << "Введите элементы массива: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Сумма отрицательных элементов
    double sum_negative = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            sum_negative += arr[i];
        }
    }

    // Поиск min и max элементов
    double min_elem = arr[0];
    double max_elem = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < min_elem) {
            min_elem = arr[i];
        }
        if (arr[i] > max_elem) {
            max_elem = arr[i];
        }
    }

    // Произведение элементов между min и max
    double mm = 1;
    bool qw = false;
    for (int i = 0; i < N; i++) {
        if (arr[i] == min_elem) {
            qw = true;
            continue;
        }
        if (qw) {
            if (arr[i] == max_elem) {
                break;
            }
            mm *= arr[i];
        }
    }

    // Произведение элементов с четными номерами
    double even = 1;
    for (int i = 0; i < N; i += 2) {
        even *= arr[i];
    }

    // Сумма между первым и последним отрицательными элементами
    int fs = -1;
    int ls = -1;

    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            if (fs == -1) {
                fs = i;
            }
            ls = i;
        }
    }
    //Сумма элементов между первым и последним отрицательными элементами
    double summb = 0;
    if (fs != -1 && ls != -1 && fs != ls) {
        for (int i = fs + 1; i < ls; i++) {
            summb += arr[i];
        }
    }
    cout << "Сумма отрицательных элементов: " << sum_negative << endl;
    cout << "Произведение элементов между min и max: " << mm << endl;
    cout << "Произведение элементов с четными номерами: " << even << endl;
    cout << "Сумма элементов между первым и последним отрицательными элементами: " << summb << endl;

    return 0;
}