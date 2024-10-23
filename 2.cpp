#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL)); 
    int n;
    cout << "Введите размерность массива (до 25): ";
    cin >> n;
    if (n <= 0 || n > 25) {
        cout << "Некорректная размерность массива." << endl;
        return 1;
    }

    int arr[25]; 
    cout << "Массив: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100; 
        cout << arr[i] << " ";
    }
    cout << endl;
    int limit;
    cout << "Введите элемент который будет ограничивать массив : ";
    cin >> limit;

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < limit) {
            sum += arr[i];
        }
    }
    cout << "Сумма элементов, меньше " << limit << ": " << sum << endl;

    return 0;
}
