#include <iostream>
using namespace std;


//Prototype
void menu();
bool isValidChoice();
unsigned int addTwoNumbers(unsigned int );
unsigned int subTwoNumbers(unsigned int);
unsigned int multiplyTwoNumbers(unsigned int);
unsigned int divideTwoNumbers(unsigned int);
unsigned int modTwoNumbers(unsigned int);

//#####################################################################
//The following two functions addOne and subOne will be used to implement
//the five other different functions
//#####################################################################
unsigned int addOne(unsigned int var)
{
	return ++var;
}//end addOne
unsigned int subOne(unsigned int number)
{
	return --number;
}//end subOne

unsigned int addTwoNumbers(unsigned int var1, unsigned int var2) {

	while (var2 > 0) {
		var1 = addOne(var1);
		var2 = subOne(var2);

	}
	return var1;
}

unsigned int subTwoNumbers(unsigned int var1, unsigned int var2) {

	while (var2 > 0) {
		var1 = subOne(var1);
		var2 = subOne(var2);

	}
	return var1;
}

unsigned int multiplyTwoNumbers(unsigned int var1, unsigned int var2) {

	int value = var1;
	{
		while (var2 > 0) {
			var1 = addOne(var1);
			var2 = subOne(var2);

		}
		return var1; }
}

unsigned int divideTwoNumbers(unsigned int var1, unsigned int var2) {

	int value = var2;
	int count = 0;
	{
		while (var2 > 0) {
			var1 = subOne(var1);
			var2 = subOne(var2);

		}
		return count; }
}

unsigned int modTwoNumbers(unsigned int var1, unsigned int var2) {

	int value = var2;
	int count = 0;

	while (var2 > 0) {
		var1 = subOne(var1);
		var2 = subOne(var2);

	}
	return var1;
}

void menu()
{
	cout << "1.Addition\n"
		<< "2. Subtraction\n"
		<< "3. Multiplication\n"
		<< "4. Division\n"
		<< "5. Modulus\n"
		<< "6. Quit\n";
}

bool isValidChoice(int choice)
{
	if (choice >= 1 && choice <= 6)
		return true;
	else
		return false;
}


int main()
{

	do {

		int choice, result, num1, num2;
		bool again = true, test = true;
		if (again = true)
		{
			cout << "This programs performs basic arithmetic operations";
			menu();
			cout << " Choose the operation you want to perform:";
			cin >> choice;
			test = isValidChoice(choice);
			if (test == true) {

				switch (choice)
				{
				case 1:;
					cout << "Enter two numbers ";
					cin >> num1 >> num2;
					result = addTwoNumbers(num1, num2);
					cout << "The sum is " << result << endl;
					break;
				case 2:
					cout << "Enter two numbers ";
					cin >> num1 >> num2;
					result = subTwoNumbers(num1, num2);
					cout << "The difference is " << result << endl;
					break;
				case 3:
					cout << "Enter two numbers ";
					cin >> num1 >> num2;
					result = multiplyTwoNumbers(num1, num2);
					cout << "The product is " << result << endl;
					break;
				case 4:
					cout << "Enter two numbers ";
					cin >> num1 >> num2;
					result = divideTwoNumbers(num1, num2);
					cout << "The quotient is " << result << endl;
					break;
				case 5:
					cout << "Enter two numbers ";
					cin >> num1 >> num2;
					result = modTwoNumbers(num1, num2);
					cout << "The reminder is " << result << endl;
					break;

				default: cout << "You entered an invalid operation";
				}

				cout << "Do you want to perform another operation";
				cin >> again;
			}
			if (again == 'N' || again == 'n')
				break;
			else
			{
				again = 'n';
			}
		}


		while (choice != 6);
		cout << "\nEnd of the Program";

		return 0;
	}

}