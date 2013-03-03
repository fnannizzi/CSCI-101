/**************************************************************************************************************
Author: Francesca Nannizzi
Contact: nannizzi@usc.edu

Distributed March 2013
***************************************************************************************************************
This program demonstrates a simple method for reading in and writing out files. 

Make sure the input.txt file is in the same directory as this program before you try to execute it!
**************************************************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){
	
	// Data
	string inFilename = "input.txt";
	string outFilename = "output.txt";
	
	int nextInt = 0;
	int index = 0;
	
	int * array = new int[10];
	
	// Read the input file
	ifstream inFile(inFilename.c_str());
	while(inFile >> nextInt){
		array[index] = nextInt;
		index++;
	}
	inFile.close();

	// Add 10 to each integer in the array
	for(int i = 0; i < 10; i++){
		array[i] += 10;
	}

	// Write the output to a file
	ofstream outFile(outFilename.c_str());
	outFile << "My integers: \n"; // the \n is a newline character, similar to endl
	for(int i = 0; i < 10; i++){
		outFile << array[i];
		outFile << "\n";
	}
	outFile.close();
}
