#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    unsigned int n;
    cout << "Введите целое число n (0 <= n <= 31): ";
    cin >> n;
    unsigned int result = 1U << n; // 2^n через битовый сдвиг
    cout << "Десятичное: " << result << endl;
    cout << "Восьмеричное: " << oct << result << endl;
    cout << "Шестнадцатеричное: " << hex << result << endl;
    cout << "Task Completed" << endl;
    return 0;
}