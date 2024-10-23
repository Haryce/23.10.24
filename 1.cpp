#include <iostream>
#include <stdlib.h> //rand() 0 -32767
#include <time.h> //time 1 января 1970 года
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 15;
    int arr[size];
    srand(time(NULL)); 
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; 
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;

    return 0;
}
