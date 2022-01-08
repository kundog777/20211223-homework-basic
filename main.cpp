#include <iostream>
using namespace std;

int main() {
    int n, b, d, m,a;
    m=0;
    a=0;
    cin >> n;
    int book[2000] =  {0};
    for (int i = 0; i < n; i++) {
        cin >> b >> d;
        book[b] = d;
    }
    for (int j = 0; j < 2000; j++) {
        if (book[j] > 100) {
            cout << j << " ";
            m=(book[j] - 100) * 5;
            a+=m;
        }
    }
    cout << "\n";
    cout << a;
} 