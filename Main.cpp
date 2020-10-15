// Christian Gomez
// 10/18/2020
// Homework 5
// Computer 120

#include<iostream>
#include<string>
#include <math.h>

using namespace std;




int main(void)
{
	int x, y, z;
	string hand_one, hand_two, hand_three, largest_hand;

	int smallest, median, largest;
	int difference_one, difference_2;




	// 1 Call for user to input three numbers with spaces in between

	cout << "Enter three numbers in the range of 1 to 13. Make sure to space in between.";
	cin >> x >> y >> z;






	// Checks user input to check if it meets range 1-13
	if (x >= 1 && x <= 13) {
		if (y >= 1 && y <= 13) {
			if (z >= 1 && z <= 13) {




				//checking value of hand one and assign english evaluation

				if (x == 1) { hand_one = "ace"; }
				else if (x == 2) { hand_one = "two"; }
				else if (x == 3) { hand_one = "three"; }
				else if (x == 4) { hand_one = "four"; }
				else if (x == 5) { hand_one = "five"; }
				else if (x == 6) { hand_one = "six"; }
				else if (x == 7) { hand_one = "seven"; }
				else if (x == 8) { hand_one = "eight"; }
				else if (x == 9) { hand_one = "nine"; }
				else if (x == 10) { hand_one = "ten"; }
				else if (x == 11) { hand_one = "jack"; }
				else if (x == 12) { hand_one = "queen"; }
				else if (x == 13) { hand_one = "king"; }



				//checking value of hand two assign english evaluation

				if (y == 1) { hand_two = "ace"; }
				else if (y == 2) { hand_two = "two"; }
				else if (y == 3) { hand_two = "three"; }
				else if (y == 4) { hand_two = "four"; }
				else if (y == 5) { hand_two = "five"; }
				else if (y == 6) { hand_two = "six"; }
				else if (y == 7) { hand_two = "seven"; }
				else if (y == 8) { hand_two = "eight"; }
				else if (y == 9) { hand_two = "nine"; }
				else if (y == 10) { hand_two = "ten"; }
				else if (y == 11) { hand_two = "jack"; }
				else if (y == 12) { hand_two = "queen"; }
				else if (y == 13) { hand_two = "king"; }




				//checking value of hand three and assign english evaluation

				if (z == 1) { hand_three = "ace"; }
				else if (z == 2) { hand_three = "two"; }
				else if (z == 3) { hand_three = "three"; }
				else if (z == 4) { hand_three = "four"; }
				else if (z == 5) { hand_three = "five"; }
				else if (z == 6) { hand_three = "six"; }
				else if (z == 7) { hand_three = "seven"; }
				else if (z == 8) { hand_three = "eight"; }
				else if (z == 9) { hand_three = "nine"; }
				else if (z == 10) { hand_three = "ten"; }
				else if (z == 11) { hand_three = "jack"; }
				else if (z == 12) { hand_three = "queen"; }
				else if (z == 13) { hand_three = "king"; }

				



				//assign each value to small, median, large according to numeric value
				smallest = x;
				median = y;
				largest = z;


				
				if (smallest > median)
				{
					
					int swapValue = smallest;
					smallest = median;
					median = swapValue;
				}

				if (median > largest)
				{
					int swapValue = median;
					median = largest;
					largest = swapValue;
				}

				if (smallest > median)
				{
					int swapValue = smallest;
					smallest = median;
					median = swapValue;
				}




				//Assign largest to english evaluation due to output dependency in relationship between cards
				if (largest == 1) {largest_hand = "ace"; }
				else if (largest == 2) { largest_hand = "two"; }
				else if (largest == 3) { largest_hand = "three"; }
				else if (largest == 4) { largest_hand = "four"; }
				else if (largest == 5) { largest_hand = "five"; }
				else if (largest == 6) { largest_hand = "six"; }
				else if (largest == 7) { largest_hand = "seven"; }
				else if (largest == 8) { largest_hand = "eight"; }
				else if (largest == 9) { largest_hand = "nine"; }
				else if (largest == 10) { largest_hand = "ten"; }
				else if (largest == 11) { largest_hand = "jack"; }
				else if (largest == 12) { largest_hand = "queen"; }
				else if (largest == 13) { largest_hand = "king"; }
				



				//Checks the relationiship between cards to output the type of hand the user has 



				//For three of a kind
				if (x == y && y == z) { cout << "You have three " + hand_one + "s"; }

				//For pairs
				if ((x == y && y!=z)  || (y == z && x!=z)) { cout << "You have a pair of " + hand_two + "es"; }
				else if(x == z && y!=z) { cout << "You have a pair of " + hand_one + "es"; }





				difference_one = median - smallest;
				difference_2 = largest - median;


				//Largest value among three unequal cards
				string sample = "You have a ";
				if ((x != y && y != z && x!=z )&& (difference_one > 1 || difference_2 > 1)) {
		
						cout << sample <<  largest_hand; }

				difference_one = median - smallest;
				difference_2 = largest - median;



				//For a straight (successive values)
				if (difference_one == 1 && difference_2 == 1) {
					cout << "You have an " << largest_hand << "-high straight";
				}











			}
			else { cout << "INPUT ERROR"; }
		}
		else { cout << "INPUT ERROR"; }
	}
	else { cout << "INPUT ERROR"; }








	cout << endl;
	cout << "Press ENTER to finish...";
	cin.ignore(999, '\n'); // wait for user to press ENTER key
	return 0;
	
}

