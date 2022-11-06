#include <iostream>

int main()
{
	using namespace std;
	
	const int N = 8;
	int a[N] = { 5, 2, 1, 6, 4, 3, 7, 0 };

	
	for (int j = 0; j < N; ++j)
	{
		for (int i = 0; i < N - 1; ++i)
		{
			int buff = {};

			if (a[i] > a[i + 1])
			{
				buff = a[i];
				a[i] = a[i + 1];
				a[i + 1] = buff;
			}
			else
			{
				a[i] == a[i + 1];
			}
		}
	}
	for (int j = 0; j < N; ++j)
		cout << a[j] << " ";
	
	return 0;
}