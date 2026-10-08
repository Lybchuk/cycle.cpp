
#include <iostream>
using namespace std;

int main()
{
	////task1
	//int i = 14;
	//while (i < 124)
	//{
	//	cout << i << endl;
	//	i++;
	//}

	//// task2 
	//int n = 0;
	//while (n < 100) {
	//	if (n % 2 == 1) {
	//		cout << n << endl;
	//	}
	//	n++;
	//}

	//// task 3
	//int N;
	//int count = 0;
	//int i = 0;
	//int x;
	//cin >> N;

	//while (i < N) {
	//	cout << "Enter number: ";
	//	cin >> x;
	//	if (x < 0) {
	//		count++;
	//	}
	//	i++;
	//}
	//cout << "Count minus number: " << count << endl;




	// task 4

	//int N = 8;
	//int i = 0;
	//int x;
	//int summa = 0;
	//int dobytok = 1;
	//while (i < N) {
	//	cin >> x;
	//	summa += x;
	//	dobytok *= x;
	//	i++;
	//}
	//cout << "Middle: " << summa/N << "\n" << "Dobytok: " << dobytok;


	// task 5

	//int i = 100;
	//do {
	//	if (i % 2 == 0) {
	//		cout << i << endl;
	//		
	//	}
	//	i--;
	//} while (i != 0);




	// task 6
	//int i = 0;
	//int x;
	//int dob = 1;

	//do {
	//	cin >> x;
	//	dob *= x;
	//	i++;
	//} while (i < 5);
	//cout << "Dobytok: " << dob << endl;




	// task 7 

	//int i = 0;
	//int summa = 0;
	//while (i < 50) {
	//	if (i % 4 == 0) {
	//		summa += i;
	//	}
	//	i++;
	//} cout << "Summa: " << summa << endl;




	// task 8

	//int n;
	//cout << "Enter number: "; cin >> n;

	//for (int i = 0; i < n; i++) {
	//	cout << i << endl;
	//}


	// task 9

	//int i;
	//int j;
	//cout << "Enter first number: "; cin >> i;
	//cout << "Enter second number: "; cin >> j;
	//int min;
	//int max;

	//if (i > j) {
	//	min = j;
	//	max = i;
	//}
	//else
	//	min = i; max = j;


	//cout << "Even numbers: " << endl;
	//for (min; min < max; min++) {
	//	if (i % 2 == 0) {
	//		cout << min << endl;
	//	}
	//}
	//cout << "Uneven numbers: " << endl;
	//min = i;
	//for (min; min < max; min++) {
	//	if (min % 2 != 0) {
	//		cout << min << endl;
	//	}
	//}
	//cout << "Numbers / 7: " << endl;
	//min = i;
	//for (min; min < max; min++) {
	//	if (min % 7 == 0) {
	//		cout << min << endl;
	//	}
	//}




	// task 10

	//int i;
	//int j;
	//cout << "Enter first number: "; cin >> i;
	//cout << "Enter second number: "; cin >> j;
	//int min;
	//int max;
	//int summa = 0;

	//if (i > j) {
	//	min = j;
	//	max = i;
	//}
	//else
	//	min = i; max = j;

	//for (min; min < max; min++) {
	//	summa += min;
	//} cout << "Summa: "<< summa << endl;


	// task 11
	int num1, num2;
	cout << "Enter first number: "; cin >> num1;
	cout << "Enter second number: "; cin >> num2;
	int summa = num1 + num2;
	int i = 1;
	while (i != 0) {
		cin >> i;
	}
	cout << "Summa: " << summa;
}


