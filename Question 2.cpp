#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

int main() {
	Person one; // use default constructor
	Person two("SandraRaafat"); // use #2 with one default argument
	Person three("Amin", "Omar"); // use #2, no defaults
	one.Show();
	cout << endl;
	one.FormalShow();
	two.Show();
	two.FormalShow();

	cout << endl;
	three.Show();
	three.FormalShow();
	cout << endl;

	return 0;
}