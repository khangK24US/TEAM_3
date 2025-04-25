#include <iostream>
#include <fstream>
using namespace std;

void SortedData(int a[], int n) {
    ofstream outFile("input.txt"); 
    if (!outFile) {
        cout << "Không thể mở file input.txt\n";
        return;
    }

    outFile << n << "\n"; 

    for (int i = 0; i < n; i++) {
        a[i] = i;
        outFile << a[i] << " "; 
    }

    outFile.close(); 
}
