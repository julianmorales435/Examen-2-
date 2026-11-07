#include <iostream>

using namespace std;

int main() {
    long long base;
    int exponente;
if (cin >> base >> exponente) {
        
        if (exponente == 0) {
            cout << 1 << endl;
            return 0;
        }
        long long resultado = 1;

        for (int i = 0; i < exponente; i++) {
            resultado *= base;
        }

        cout << resultado << endl;
    }

    return 0;
}
