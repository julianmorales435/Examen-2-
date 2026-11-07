#include <iostream>

using namespace std;


bool esprimo(int n) {
    if (n <= 1) {
        return false;
    }

    
    int divisores = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }


    return divisores == 2;
}

int main() {
    int n;
    

    cout << "Ingresa un número entero: ";
    cin >> n;


    if (esprimo(n)) {
        cout << "Primo" << endl;
    } else {
        cout << "No primo" << endl;
    }

    return 0;
}