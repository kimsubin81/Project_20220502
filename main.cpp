#include <iostream>

using namespace std;

int main()
{
	int MyMoney = 100;
	int Operand = 10;

	cout << MyMoney + Operand << endl;
	cout << MyMoney * Operand << endl;
	cout << MyMoney - Operand << endl;
	cout << MyMoney / Operand << endl;
	cout << MyMoney % Operand << endl;
	cout << 10 + (2 * 20) << endl;


	float MyR = 0.1f;
	float MyG = 0.3f;
	float MyB = 0.2f;

	float Graycolor = 0.299f * MyR + 0.537f * MyG + 0.114f * MyB;

	cout << Graycolor << endl;


	return 0;
}