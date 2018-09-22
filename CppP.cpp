#include <iostream>
#include <conio.h>

using namespace std;

void askData();
float pFraccionaria(float x);

float number;

int main(void) {

	askData();

	cout << "\nLa parte fraccionaria de " << number << " es: " << pFraccionaria(number) << endl;

	getch();
	return 0;
}

void askData() {
	cout << "\nDigite un numero: ";
	cin >> number;
}

float pFraccionaria(float x) {
	int num = x;

	float result = x - num;

	return result;
}