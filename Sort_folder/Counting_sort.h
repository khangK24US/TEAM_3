#include <iostream>
#include <vector>
using namespace std;

vector<long long> countSort(vector<long long>& inputArray)
{

    int N = inputArray.size();

    
    int M = 0;

    for (int i = 0; i < N; i++)
        M = max(M, inputArray[i]);

    
    vector<int> countArray(M + 1, 0);

    

    for (int i = 0; i < N; i++)
        countArray[inputArray[i]]++;

    for (int i = 1; i <= M; i++)
        countArray[i] += countArray[i - 1];

  

    for (int i = N - 1; i >= 0; i--)

    {
        outputArray[countArray[inputArray[i]] - 1]
            = inputArray[i];

        countArray[inputArray[i]]--;
    }

    return outputArray;
}
