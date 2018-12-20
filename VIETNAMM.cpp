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
	int start_peg, destination_peg, buffer_peg, plate_quantity; //plate_quantity-число колец, start_peg-начальное положение колец(1-3),destination_peg-конечное положение колец(1-3)
																//buffer_peg - промежуточный колышек(1-3)
	cout << "Номер первого столбика:" << endl;
	cin >> start_peg;
	cout << "Номер конечного столбика:" << endl;
	cin >> destination_peg;
	cout << "Номер промежуточного столбика:" << endl;
	cin >> buffer_peg;
	cout << "Количество дисков:" << endl;
	cin >> plate_quantity;

	hanoi_towers(plate_quantity, start_peg, destination_peg, buffer_peg);
	
	_getch();
}
