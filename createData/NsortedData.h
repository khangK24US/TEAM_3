#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <class T>
void HoanVi(T &a, T &b) {
    T x = a;
    a = b;
    b = x;
}

void NsortedData(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }

    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10 && n > 1; i++) {
        int r1 = rand() % n;
        int r2 = rand() % n;
        while (r1 == r2) r2 = rand() % n;
        HoanVi(a[r1], a[r2]);
    }

    ofstream outFile("input.txt");
    if (!outFile) {
        cout << "Không thể mở file input.txt để ghi dữ liệu.\n";
        return;
    }

    outFile << n << "\n";
    for (int i = 0; i < n; i++) {
        outFile << a[i] << " ";
    }

    outFile.close();
}
