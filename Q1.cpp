#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
	
	// 1a
//	int randomNum;
//	srand((time (NULL))); // seed is an integer value
//	
//	randomNum = 1 + rand() % 2;
//	
//	if (randomNum == 1) {
//		cout << "Heads" << endl;
//	} else {
//		cout << "Tails" << endl;
//	}
	
	// b
//	int randomNum;
//	int headCount = 0, tailCount = 0;
//	srand((time (NULL))); // seed is an integer value
//	
//	
//	
//	for(int i = 0; i<100; i++) {
//		randomNum = 1 + rand() % 2;
//		
//		if (randomNum == 1) {
//			headCount++;
//		} else {
//			tailCount++;
//		}
//	}
//	
//	cout << "Total number of Head counts was: " << headCount << endl;
//	cout << "Total number of Tail count was: " << tailCount << endl;
	
	//c
	int randomNum;
	int headCount = 0, tailCount = 0;
	srand((time (NULL))); // seed is an integer value
	
	
	
	for(int i = 0; i<100; i++) {
		randomNum = 1 + rand() % 3;
		
		if (randomNum == 1) {
			headCount++;
		} else {
			tailCount++;
		}
	}
	
	cout << "Total number of Head counts was: " << headCount << endl;
	cout << "Total number of Tail count was: " << tailCount << endl;
	
	
	return 0;
}
