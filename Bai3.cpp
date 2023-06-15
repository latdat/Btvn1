#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhập số phần tử trong dãy: ";
    cin >> n;
int a[n];
    cout << "Nhập các phần tử của dãy:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Dãy số tăng dần là:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
return 0;
}
