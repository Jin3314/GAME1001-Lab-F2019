// Outputting to a file
#include <iostream>
#include <fstream> //File-stream. Needed to use files
using namespace std;

int main()
{
	ofstream outputFile;
	//opens the output file
	outputFile.open("demofile.txt");

	cout << "Now writing data to the file. \n";

	outputFile << "Nintendo Switch ";
	outputFile << "Playstation 4 ";
	outputFile << "Xbox One ";
	outputFile << "PC ";

	outputFile.close();

	cout << "DONE! \n";


	system("pause");
	return 0;
}
/*
fstream
=======
ifstream -- Input file stream

ofstream -- Output file stream

fstream -- File stream (does both input and output)
*/