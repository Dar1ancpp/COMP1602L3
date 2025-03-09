#include <iostream> 
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Customer {
	int CustomerID;
	string firstName;
	string lastName;
	int totalPurchases;
};

void displayCustomer(Customer customer) {
	cout << "CustomerID: " << customer.CustomerID << endl;
	cout << "Fist Name: " << customer.firstName << endl;
	cout << "Last Name: " << customer.lastName << endl;
	cout << "Total purchases made by the customer: " << customer.totalPurchases << endl;
	
	return;
}

int main() {
	
	Customer customers[1000];
	int numCustomers = 0;
	int i = 0;
	
	ifstream inputFile("Customers.txt");
	
	if (!inputFile.is_open()) {
        cout << "Error opening input file. Aborting ..." << endl;
        exit (1);
    }
	
	inputFile >> customers[0].CustomerID;
	
	while (customers[i].CustomerID != 0) {
		inputFile >> customers[i].firstName;
		inputFile >> customers[i].lastName;
		inputFile >> customers[i].totalPurchases;
		i++;
		numCustomers++;
		inputFile >> customers[i].CustomerID;
	}
	
	int randomNum;
	srand((time(NULL)));
	
	randomNum = rand() % numCustomers;
	
	cout << "The winning customer is: " << endl << endl;
	
	displayCustomer(customers[randomNum]);
	
	
	return 0;
}
