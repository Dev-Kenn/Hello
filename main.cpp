#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char input;
	
	cout<< "Type m or f: ";
	cin>> input;
	
	switch(input)
	{
		case 'M':
		case 'm':
			cout<< "\nHello Ma'am";
			break;
		case 'F':
		case 'f':
			cout<< "\nHello Sir";
			break;
		default:
			cout<< "\nSorry, M and F only";
	}
	return 0;

}
