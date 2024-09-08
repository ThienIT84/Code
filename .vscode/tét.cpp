#include <bits/stdc++.h>
#include <string> // Thêm thư vi?n string đ? s? d?ng hàm stoi
using namespace std;

int n;
int a[1001][1001];

int main() {
    cin >> n;
    cin.ignore(); // B? qua k? t? newline sau khi nh?p n

    for(int i = 1; i <= n; i++) {
        string s, num;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> num) {  // Trích xu?t t?ng s? t? chu?i
            a[i][stoi(num)] = 1;  // Chuy?n đ?i chu?i thành s? nguyên và đánh d?u trong ma tr?n
        }
    }

    // Xu?t ma tr?n k?
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl; 
    }
}
