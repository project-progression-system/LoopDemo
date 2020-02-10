// LoopDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programer: Lance Zotigh (lzotigh1@cnm.edu)
//Date: 2/10/2020
//Pourpose Demo Loops

#include <iostream>
using namespace std;

int main() 

{
	//cout << "All squares 9 through 0!\n";
	//
	//for (int i = 9; i >= 0; i = (i - 2))
	//{
	//	cout << "square of: " << i << " is "<< i*i << endl;
	//}

	//int i = 10;
	//while (i >= -10)
	//{
	//	cout << "i is" << i << endl;
	//	//i = i + 1;
	//	--i;
	//}

	//int guess = 0;
	//while (guess != 5) 
	//{
	//	cout << "\nGuess a Number: ";
	//	cin >> guess;
	//	cin.ignore();
	//	if (guess == 5) {
	//		cout << "You Guessed the number!" << endl;
	//	} else {
	//		cout << "Guess Again!" << endl ;
	//	}
	//}

	string doAnother;
	do
	{
		//get number between 1 and 10
		int num = 0;
		while (num < 1 || num > 10)
		{
			cout << "Please enter a number between 1 and 10: ";
			cin >> num;
		}

		// do another
		cout << "Do another (y/n)? ";
		cin >> doAnother;
	} while (doAnother == "y");

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
