#include <iostream>
using namespace std;
int main() {
	
	char op = 'A';
	char again = 'Y';
	int num1 = 0;
	int num2 = 0;

	cout << "Our C++ Calculator";
	
	do {
		cout << "(A)dd, (S)ubtract, (M)ultiply, (D)ivide ";
		cin >> op;
		
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter your second number: ";
		cin >> num2;
		
		switch ( op ) {
			case 'a':
			case 'A':
				cout << "\n" << num1 << " + " 
				<< num2 << " = " << (num1 + num2) << endl; 
			break;
			case 's':
			case 'S':
				cout << "\n" << num1 << " - " 
				<< num2 << " = " << (num1 - num2) << endl; 
				break;
			case 'm':
			case 'M':
				cout << "\n" << num1 << " * " 
				<< num2 << " = " << (num1 * num2) << endl;
					break;
			case 'd':
			case 'D':
				cout << "\n" << num1 << " / " 
				<< num2 << " = " << (num1 / num2) << endl;
				break;
			default:
				cout << op << " Is not a valid option please try again";
		} 
				cout << "\nDo you want to use Calculator again? (Y/n)";
				cin >> again;
	    } while ('n' != again);
	 
		
			


	
return 0;
}