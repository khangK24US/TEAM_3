#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<long long> ReadInput(const string& filename) {
    ifstream inFile(filename);
    vector<long long> data;
    
    if (!inFile) {
        cout << "Không thể mở file " << filename << endl;
        return data;
    }

    long long n;
    int x;
    inFile >> n; 

    while (inFile >> x) {
        data.push_back(x); 
    }

    inFile.close();
    return data;
}
