/**************************************************************************************************************
Author: Francesca Nannizzi
Contact: nannizzi@usc.edu

Distributed March 2013
***************************************************************************************************************
This program demonstrates two methods for handling arrays within functions. 

**************************************************************************************************************/

#include <iostream>
using namespace std;

// This function stores the scores + 5 in a new array
// and passes a pointer to the array back to main.
int* add5toScores(int scores[], int size) { // notice this returns type int*
	int * temp = new int[size];
	if(size > 0){
    		for (int i = 0; i < size; i++){
        		temp[i] = scores[i] + 5;
        }
	}
	return temp;
}

// This function subtracts 5 from the array passed in
// which is passed by reference by default.
void subtract5FromScores(int scores[], int size) {
    if (size > 0){
    		for (int i = 0; i < size; i++){
        		scores[i] = scores[i] - 5;
        }
	}
}

int main(){
	int scoreArray[10] = {10,20,30,40,50,60,70,80,90,100};
	
	// Print out the original array
	cout << endl;
	cout << "Original scores: " << endl;
	for(int i = 0; i < 10; i++){
		cout << "Score: " << i << " = " << scoreArray[i] << endl;
	}
	cout << endl;
	
	// Initialize a pointer to a new array of scores + 5
	int* tempPointer = add5toScores(scoreArray,10);
	cout << "After add function: " << endl;
	for(int i = 0; i < 10; i++){
		// Increments the pointer, then dereferences it 
		cout << "Score: " << i << " = " << *(tempPointer + i) << endl;
	}
	cout << endl;
	
	// Edit the original array to scores - 5
	subtract5FromScores(scoreArray,10);
	cout << "After subtract function: " << endl;
	for(int i = 0; i < 10; i++){
		cout << "Score: " << i << " = " << scoreArray[i] << endl;
	}
	cout << endl;
	
	return 0;
}
