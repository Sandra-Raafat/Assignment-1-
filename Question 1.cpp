#include <iostream>
#include "BankAccount.h"

int main() {
	using std::cout;

	cout << "Using constructors to creat new objects\n";
	BankAccount b1("Sandra", "50", 1000);
	b1.show();

	BankAccount b2 = BankAccount("Raafat", "100", 5000);
	b2.show();

	cout << "Deposite money to b1\n";
	b1.deposite(1000);
	b1.show();

	cout << "withdraw money from b2\n";
	b2.withdraw(2000);
	b2.show();

	return 0;
}