#include <iostream>

using namespace std;

void insertionSort (int *arr, int length) {
    int key = 0;
    for (int j = 1 ; j < length; j++) {
        int i = j-1;
        key = arr[j];

        while(i>= 0 && arr[i]>key) {
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }

    cout<<"Data is:";
    for(int i = 0; i< length; i++) {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main() {
    int arr[] = {3,2,8,6,5,10,24,45,23};
    int length = int(sizeof(arr)/sizeof(arr[0]));
    insertionSort(arr, length);

    return 0;
}