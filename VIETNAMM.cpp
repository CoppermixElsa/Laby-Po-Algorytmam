#include <iostream>
#include <conio.h>
using namespace std;

void hanoi_towers(int quantity, int from, int to, int buf_peg)   
{                                                         
	if (quantity != 0)
	{
		hanoi_towers(quantity - 1, from, buf_peg, to);

		cout << from << " -> " << to << endl;

		hanoi_towers(quantity - 1, buf_peg, to, from);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int start_peg, destination_peg, buffer_peg, plate_quantity; 
	cout << "Number of start tower is..." << endl;
	cin >> start_peg;
	cout << "Number of destignation tower is..." << endl;
	cin >> destination_peg;
	cout << "Number of support tower is..." << endl;
	cin >> buffer_peg;
	cout << "Number of flats in tower is..." << endl;
	cin >> plate_quantity;

	hanoi_towers(plate_quantity, start_peg, destination_peg, buffer_peg);
	
	_getch();
}
