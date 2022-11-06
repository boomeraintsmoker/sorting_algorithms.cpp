#include <iostream>

int main()
{
	using namespace std;

	const int N = 8;
	int a[N] = { 5, 2, 1, 6, 4, 3, 7, 0 };

	for (int i = 0; i < N; ++i)
	{
		int remaining_elems = i;

		for (int j = i; j < N; ++j)
		{
			int buff = {};

			if (a[j] < a[remaining_elems])
			{
				buff = a[j];
				a[j] = a[remaining_elems];
				a[remaining_elems] = buff;
			}
			else if (a[j] >= a[remaining_elems])
			{
				a[j] == a[remaining_elems];
			}
		}
		cout << a[i] << " ";
	}
	return 0;
}