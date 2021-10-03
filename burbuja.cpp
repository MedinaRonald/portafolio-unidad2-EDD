#include <iostream>
#include <array>
#include <ctime>

using namespace std;

const int TAMANIO = 64000;


void imprimirArreglo(array<int, TAMANIO> &arr, int num_elementos){
	for (int i = 0; i < arr.size() && i < num_elementos; i++){
		cout << arr[i] << endl;
	}
	
}

void ordenamientoBurbuja(array<int,TAMANIO> &arr) { 
	int tamanio = arr.size();
	bool desordenado = true;
	for (int pase = 0; pase < tamanio - 1 && desordenado; pase++) {
		desordenado = false;
		for (int j = 0; j < tamanio - 1 - pase; j++){ 
			if (arr[j]>   arr [j + 1]) {
			desordenado = true; 
			int temp = arr[j]; 
			arr[j] = arr[j+1]; 
			arr[j+1]= temp;
			}
		}
	}
}

int main() {
	array<int,TAMANIO> miArreglo;
	
	// Leer elementos del arreglo
	for (int i = 0; i < TAMANIO; i++){
		cin >> miArreglo[i];
	}
	
	clock_t inicio = clock(); 
	ordenamientoBurbuja(miArreglo); 
	clock_t fin = clock ();
	
	double tiempoSegundos = double(fin - inicio)/ CLOCKS_PER_SEC;// Tiempo transcurrido
	
	cout << "Cantidad de elementos: " << miArreglo.size()<< endl;
	cout << "Tiempo transcurrido : " << tiempoSegundos << " segundos" << endl;
	
	return 0;
}

