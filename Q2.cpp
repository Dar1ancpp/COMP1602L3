#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
//	// 2a
//	int randomNum;
//	int sixCounter = 0;
//	srand((time(NULL)));
//	
//	randomNum = 1 + rand() % 100;
//		
//	
//	if (randomNum <= 5) {
//		cout << "Six Runs!" << endl;
//	} else
//	if ((randomNum >= 6) && (randomNum <= 8)) {
//		cout << "Five Runs!" << endl;
//	} else
//	if ((randomNum >= 9) && (randomNum <= 20)) {
//		cout << "Four Runs!" << endl;
//	} else
//	if ((randomNum >= 21) && (randomNum <= 25)) {
//		cout << "Three Runs!" << endl;
//	} else
//	if ((randomNum >= 26) && (randomNum <= 50)) {
//		cout << "Two Runs!" << endl;
//	} else
//	if ((randomNum >= 51) && (randomNum <= 80)) {
//		cout << "One Run!" << endl;
//	} else
//	if ((randomNum >= 81) && (randomNum <= 93)) {
//		cout << "Zero Runs!" << endl;
//	} else {
//		cout << "Out!" << endl;
//	}
	
	// b
	int randomNum;
	bool isOut = false;
	int numZero = 0, numOne = 0, numTwo = 0, numThree = 0, numFour = 0, numFive = 0, numSix = 0, numOut = 0, totalRuns = 0;
	srand((time(NULL)));
	

	
	while (totalRuns < 50 && !isOut) {
		
		randomNum = 1 + rand() % 100;
		
		if (randomNum <= 5) {
		numSix++;
		totalRuns += 6;
		} else
		if ((randomNum >= 6) && (randomNum <= 8)) {
			numFive++;
			totalRuns += 5;
		} else
		if ((randomNum >= 9) && (randomNum <= 20)) {
			numFour++;
			totalRuns += 4;
		} else
		if ((randomNum >= 21) && (randomNum <= 25)) {
			numThree++;
			totalRuns += 3;
		} else
		if ((randomNum >= 26) && (randomNum <= 50)) {
			numTwo++;
			totalRuns += 2;
		} else
		if ((randomNum >= 51) && (randomNum <= 80)) {
			numOne++;
			totalRuns += 1;
		} else
		if ((randomNum >= 81) && (randomNum <= 93)) {
			numZero++;
		} else {
			isOut = true;
		}
		
	}
	
	cout << "Total number of Sixe Runs Obtained: " << numSix << endl;
	cout << "Total number of Five Runs Obtained: " << numFive << endl;
	cout << "Total number of Four Runs Obtained: " << numFour << endl;
	cout << "Total number of Three Runs Obtained: " << numThree << endl;
	cout << "Total number of Two Runs Obtained: " << numTwo << endl;
	cout << "Total number of One Run Obtained: " << numOne << endl;
	cout << "Total number of Zero Runs balls bowled: " << numZero << endl;
	cout << "Total number of Runs Scored: " << totalRuns << endl;
	
	
	return 0;
}
