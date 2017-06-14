/* Übung Ein- und Ausgabe & Dynamischer Speicher */

#include <iostream>  // Bibliothek (standard)
#include <sstream>   // String stream Bibliothek
using namespace std; // Müsste sonst immer std:: verwenden

// Main Funktion
int main(int argc, char *argv[]) // Die Anzahl muss erst definiert werden // main() nimmt nur 0 oder 2 Argumente! // Syntax ist fest vorgeschrieben!!
{

	/******- Variablen -********/

	double temp = 0;

	int N = argc - 1;		// argc = Anzahl der Argumente, die der Main() übergeben werden
	double *data;			// Dynamischer Vektor zum Speichern der Werte // BEACHTE: immer Pointer!
	data = new double[N];	// Zuteilen des Speichers

	/******- Code -************/

	for (int l = 1; l < N + 1; l++)
	{

		stringstream s;		// Stringstream zum "Konvertieren" des Pointers in string (Als Puffer!)
		s << argv[l];		// Speichern in den Puffer

		s >> data[l - 1];	// -1, weil sonst außerhalb des Arrays
	}
	cout << endl;

	/* Sortieren (BubbleSort) Aufgabe 4 */

	for (int k = 0; k < N; k++)
	{
		for (int i = 0; i < N - 1; i++) // Er vergleicht immer einmal weniger!!!
		{
			if (data[i] > data[i + 1]) // Nicht inkrementieren!!
			{
				temp = data[i + 1];
				data[i + 1] = data[i];
				data[i] = temp;
			}
		}
	}

	/*****- Ausgabe -****/
	for (int j = 0; j < N; j++)
	{
		cout << data[j] << endl;
	}

	return 0; // Immer einen Wert zurückgeben!
}
