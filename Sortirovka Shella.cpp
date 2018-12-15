#include <iostream>
#include <conio.h>
#include<ctime>
#include<vector>
#include<random>
using namespace std;

void shell_sort(vector<int> a)
{
	int permutation = 0, comparsion = 0;
	int step = a.size() / 2;
	while (step > 0)
	{
		for (int i = 0; i < (a.size() - step); i++)
		{
			int j = i;
			while (j >= 0 && a[j] > a[j + step])
			{
				int temp = a[j];
				a[j] = a[j + step];
				a[j + step] = temp;
				j--;
				permutation++;
				comparsion++;
			}
		}
		step = step / 2;
	}
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << "  ";
	cout << "\npermutations: " << permutation << ",  comparsions: " << comparsion;
}

int main()
{
	srand(time(NULL));

	int size = 50;
	vector<int> a(size);

	for (int i = 0; i < size; i++)
	{
		a[i] = 1 + rand() % 50;
	}
	shell_sort(a);


	_getch();
}
