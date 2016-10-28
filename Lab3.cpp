#include <iostream>
#include <string>

using namespace std;

int*** crearMatriz(int size);


int main(){
	int opcion = 0;
	do{
		cout<<"Menu\n1)Ejercicio 1\n2)Ejercicio 2\n3)Ejercicio 3\n4)Salir\n";
		cin>>opcion;
		switch(opcion){
			case 1:{
				int domingos = 0, dias_mes, dias = 1;

			    for (int i = 1900; i <= 1999; i++) {
			        for (int j = 1; j <= 12; j++) {
			            if (j==4 || j==6 || j==9 || j==11) {
			                dias_mes = 30;
			            } else if (j == 2) {
			                if (i % 400 == 0 || (i%4==0 && i%100!=0)) {
			                    dias_mes = 29;
			                } else {
			                    dias_mes = 28;
			                }
			            } else {
			                dias_mes = 31;
			            }
			            if(dias % 7 == 0){
			            	domingos++;
			            }
			            dias += dias_mes;
			        }
			    }

			    cout <<"Hay " <<domingos-1<<" primeros domingos entre los años 1900 a 1999" << endl;
				break;
			}
			case 2:{
				int polinomio;
				cout<<endl<<"Ingrese el grado mas alto del polinomio:";
				cin>> polinomio;
				int numeros[polinomio+1];
				int contador = 0;
				for (int i = polinomio; i >= 0; --i)
				{
					cout<<endl<<"Ingrese el polinomio x^"<<i<<":";
					cin >> numeros[contador];
					contador++;
				}
				int matriz[3][polinomio+1];

				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j <= polinomio+1; ++j)
					{
						matriz[i][j] =0;
					}
					cout<<endl;
				}

				for (int i = 0; i <= polinomio; ++i)
				{
					matriz[0][i] = numeros[i];
				}
				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j <= polinomio+1; ++j)
					{
						cout<< matriz[i][j]<<" ";
					}
					cout<<endl;
				}

				break;
			}
			case 3:{
				

				break;
			}
		}//Fin Switch 
	}while(opcion>=0 && opcion <=3);//Fin do while
	return 0;
}//Fin main

int*** crearMatriz(int size){
	int***matriz = new int**[size];
	for (int i = 0; i < size; ++i)
	{
		matriz[i] = new int*[3];
	}
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			matriz[i][j] = new int[size];
		}
	}
	return matriz;
}