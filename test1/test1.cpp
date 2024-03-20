#include <iostream>
using namespace std;

void hanoi(int n, char a, char c, char b) {
    if (n == 1) {
        cout << "移动盘 1 由 " << a << " -> " << c << endl;
    }
    else {
        hanoi(n - 1, a, b, c);
        cout << "移动盘 " << n << " 由 " << a << " -> " << c << endl;
        hanoi(n - 1, b, c, a);
    }
}

int main() {
    int n;
    cout << "请输入圆盘的总数量: ";
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
