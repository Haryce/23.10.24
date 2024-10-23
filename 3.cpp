#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    const int months = 12;
    double prof[months];

    cout << "Введите прибыль фирмы за каждый месяц (12 месяцев):\n"; // Ввод прибыли за каждый месяц
    for (int i = 0; i < months; i++) {
        cout << "Месяц " << i + 1 << ": ";
        cin >> prof[i];
    }
    int start, end;
    cout << "Введите диапазон (месяцы от 1 до 12):\n";
    cout << "Начало: ";
    cin >> start;
    cout << "Конец: ";
    cin >> end;
    // Проверка корректности диапазона
    if (start < 1 || end > 12 || start > end) {
        cout << "Некорректный диапазон." << endl;
        return 1;
    }
    int start1 = start - 1;
    int end1 = end - 1;
    // Поиск максимальной и минимальной прибыли в указанном диапазоне
    double max = prof[start1];
    double min = prof[start1];
    int maxMonth = start1;
    int minMonth = start1;
    for (int i = start1 + 1; i <= end1; i++) {
        if (prof[i] > max) {
            max = prof[i];
            maxMonth = i;
        }
        if (prof[i] < min) {
            min = prof[i];
            minMonth = i;
        }
    }
    cout << "Максимальная прибыль в месяце " << maxMonth + 1
        << " с прибылью " << max << endl;
    cout << "Минимальная прибыль в месяце " << minMonth + 1
        << " с прибылью " << min << endl;

    return 0;
}
