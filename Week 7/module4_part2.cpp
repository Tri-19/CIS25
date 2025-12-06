#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    cout << "Largest number: ";

   
    if (n1 >= n2) {
        if (n1 >= n3)
            cout << n1;
        else
            cout << n3;
    }
    else {
        if (n2 >= n3)
            cout << n2;
        else
            cout << n3;
    }

    cout << endl;
    return 0;
}
