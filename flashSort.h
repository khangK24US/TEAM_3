#include <iosteam>
#include <vecto>
using namespace std;

void flashSort(vecto<long long> & arr){
  int n = arr.size();
  if(n <= 1) return;

  int minVal = arr[0], maxIdx = o;

  for(int i = 1; i < n; i++){
    if(arr[i] < minVal) minVal = arr[i];
    if(arr[i] > arr[maxIdx]) maxIdx = i;
  }

  if(arr[maxIdx] == minVal) return;

  int m = int(0.43 * n);
  vecto<int> count(m,0);

  auto getClass = [&](int val){
    return int(1.0 * (m - 1) * (val - minVal) / (arr[maxIdx] - minVal));
  };

  for(int i = 0; i < n; i++){
    int k = getClass(arr[i]);
    count[k]++;
  }

  for(int i = 1; i < m; i++){
    count[i] += count[i-1];
  }

  swap(arr[0], arr[maxIdx]);
  int moves = 0, i = 0, k = m - 1;
  while(moves < n - 1){
    while(i >= count[k])
      k = getClass(arr[++i]);

    int temp = arr[i];
    while(i != count[k]){
      k = getClass(temp);
      int dst = --count[k];
      swap(temp, arr[dst]);
      moves++;
    }
  }

  for(int i = 1; i < n; i++){
    int key = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] > key){
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
  
}
