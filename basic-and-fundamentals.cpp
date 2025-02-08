#include <iostream>

using namespace std;

int main() {
    const int maxSize = 10;
    int arr1[maxSize];
    int arr2[maxSize];
    int arrMerged[maxSize + maxSize];
    int size1, size2;

    do {
        cout << "Enter number of elements for the first array (max 10): ";
        cin >> size1;
    } while (size1 < 0 || size1 > maxSize);

    if (size1 > 0) {
        cout << "Enter elements for the first array: \n";
        for (int i = 0; i < size1; i++)
            cin >> arr1[i];
        for (int i = 0; i < size1; i++)
            arrMerged[i] = arr1[i];
    }

    do {
        cout << "Enter number of elements for the second array (max 10): ";
        cin >> size2;
    } while (size2 < 0 || size2 > maxSize);

    if (size2 > 0) {
        cout << "Enter elements for the second array: \n";
        for (int i = 0; i < size2; i++)
            cin >> arr2[i];
        for (int i = 0; i < size2; i++) 
            arrMerged[size1 + i] = arr2[i];
    }

    if (size1 == 0 && size2 == 0) {
        cout << "There are no elements to be arranged.\n";
        return 0;
    }

    int totalSize = size1 + size2;
    for (int i = 0; i < totalSize - 1; i++) {
        for (int j = i + 1; j < totalSize; j++) {
            if (arrMerged[i] < arrMerged[j]) {
                int temp = arrMerged[i];
                arrMerged[i] = arrMerged[j];
                arrMerged[j] = temp;
            }
        }
    }

    cout << "Merged and sorted array in descending order: ";
    for (int i = 0; i < totalSize; i++) cout << arrMerged[i] << " ";
    cout << endl;

    return 0;
}
