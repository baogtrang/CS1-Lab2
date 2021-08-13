//Bao Trang
//CMPS 1043-01 - Benjamin Shelton
//File input and output

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	// Variable declarations
	int birth_Date; // declare integer variable for your birth year
	float A, B, Sum, Product; // declare real variables for arithmetic

	ifstream infile; // declare an input file
	ofstream outfile; // declare an output file
	infile.open("input.txt"); // open "input.txt" for reading
	outfile.open("output.txt"); // create "output.txt" for writing

	// Program Code for reading your year of birth
	infile >> birth_Date; // read a value for birth year from input.txt

	// Program Code for performing some arithmetic operations
	infile >> A >> B; // read values for A & B from input.txt
	Sum = A + B; // Add A & B, storing result in Sum
	Product = A * B; // Multiply A & B, storing result in Product

	// Program Code to output results to the output file
	outfile << "Bao \n"; // write your name to "output.txt"

	// Write other output statements to print your full header to
	//"output.txt"
	outfile << birth_Date << "\n"; // write birth date to "output.txt"
	outfile << "A and B have the values " << A << " and " << B << "\n";
	outfile << "The sum is " << Sum << "\n";
	outfile << "The product is " << Product << "\n";

	// Commands to close files
	infile.close(); // Always close each file so that the
	// I/O buffer will be
	outfile.close(); // written (otherwise, you may not get all of your
	// results written to the output file)
	return 0;
}
