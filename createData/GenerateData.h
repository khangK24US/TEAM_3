#include <iostream>
using namespace std;

void GenerateData(int a[], int n, int dataType)
{
	switch (dataType)
	{
	case 0:	// ngẫu nhiên
		RandomData(a, n);
		break;
	case 1:	// có thứ tự
		SortedData(a, n);
		break;
	case 2:	// có thứ tự ngược
		ReverseData(a, n);
		break;
	case 3:	// gần như có thứ tự
		NsortedData(a, n);
		break;
	default:
		printf("Error: unknown data type!\n");
	}
}
