/* Task: Input Output & dynamic memory */
#include <iostream>
#include <sstream>
using namespace std;

/*****- Main function -****/
int main(int argc, char *argv[]) // the number has to be defined // main() only takes 0 or 2 arguments
{

	/******- variables -********/
	double temp = 0;

	int N = argc - 1;		// argc = number of the arguments, which were given to the main
	double *data;			// dynamically vector to storage the input // ALWAYS pointer
	data = new double[N];		// create an array and tell it the storage address

	/******- Code -************/
	for (int l = 1; l < N + 1; l++)
	{

		stringstream s;		// Stringstream to convert the double to a string in order to print it
		s << argv[l];		

		s >> data[l - 1];	
	}
	cout << endl;

	/*  BubbleSort */
	for (int k = 0; k < N; k++)
	{
		for (int i = 0; i < N - 1; i++) 
		{
			if (data[i] > data[i + 1])
			{
				temp = data[i + 1];
				data[i + 1] = data[i];
				data[i] = temp;
			}
		}
	}

	/*****- Print the output -****/
	for (int j = 0; j < N; j++)
	{
		cout << data[j] << endl;
	}

	return 0; // the main needs a return, because it's not void
}
