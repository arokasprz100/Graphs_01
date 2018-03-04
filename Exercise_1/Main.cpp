/// Compile with -std=C++11 enabled

#include "Main.h"

/// TODO: Arek finish, add changing options
int main()
{
	GraphStorage storedGraph;
	Input inputGetter;
	bool isFileValid = true;
	do 
	{
		inputGetter.OpenFile();
		isFileValid = inputGetter.GetInputFromFile(storedGraph);

	}while (!isFileValid);

	storedGraph->PrintGraph(std::cout);



	Output outputFile;
	outputFile.SaveToFile(storedGraph);
	return 0;
}