// Christian Gomez
// 10/18/2020
// Homework 5

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	int x, y, z;
	string hand_one, hand_two, hand_three;

	int smallest, medain, largest;
	int difference_one, difference_2;

	cout << "Enter three numbers in the range of 1 to 13. Make sure to space in between." << endl;
	cin >> x >> y >> z;


	if (x >= 1 && x <= 13) {
		if (y >= 1 && y <= 13) {
			if (z >= 1 && z <= 13) {

			}
			else { cout << "INPUT ERROR"; }
		}
		else { cout << "INPUT ERROR"; }
	}
	else { cout << "INPUT ERROR"; }














	return 0;
	
}