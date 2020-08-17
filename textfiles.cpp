// Programa que lee un archivo CSV para texto
// Creado por Luis Cabrles
// Inspirado en: https://www.codespeedy.com/read-data-from-csv-file-in-cpp/
//Inspirado por Cesar Aceros

#include <vector>
#include <sstream>
#include <string>
#include <iostream>
#include<fstream>
using namespace std;

void parseCSV()
{
	ifstream data("Book1.csv");
	string line;
	vector<vector<string>> parsedCSV;
	int contadordefila=0;          //En esta linea y la siguiete se definen contadores para las filas y columnas
	int contadordecolumna=0;       // esto permite desplazarse por la matriz que se forma con las filas y columans de los datos 

	while(getline(data,line))        
	{
		stringstream linestream(line);
		string celda;
		vector<string> parsedfila;
		contadordecolumna=0;

		while(getline(linestream,celda,','))
		{
			parsedfila.push_back(celda);
			contadordecolumna++;
	
		}
		contadordefila++;
		parsedCSV.push_back(parsedfila);
	}
	for(int i=0; i<contadordefila;i++){
		for (int j=0; j< contadordecolumna ; j++){
			cout << parsedCSV[i][j] <<"-";
		}
		cout <<'\n';
	}
	
}
int main()
{
	parseCSV();
	return 0;
	
}