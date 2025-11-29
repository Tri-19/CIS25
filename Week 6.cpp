#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\nYou entered:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int value = 25;
    int* ptr = &value;

    cout << "Value: " << value << endl;
    cout << "Address of value (&value): " << &value << endl;
    cout << "Pointer stores: " << ptr << endl;
    cout << "Pointer dereferenced (*ptr): " << *ptr << endl;

    *ptr = 50; 

    cout << "\nAfter modifying value through pointer:\n";
    cout << "Value: " << value << endl;

    return 0;
}



#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; 
}

int main() {
    int arr[] = {2, 5, 9, 12, 17, 21, 33, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Found at index " << result << endl;
    else
        cout << "Not found.\n";

    return 0;
}
