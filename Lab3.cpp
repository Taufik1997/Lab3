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
				int a;
				cout<<endl<<"Ingrese a:";
				cin>>a;
				int **matriz;
				matriz = new int*[3];
				for (int i = 0; i < 3; i++){
					matriz[i] = new int[polinomio];
				}
				//int matriz[3][polinomio];
				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j <= polinomio; ++j)
					{
						matriz[i][j] =0;
					}
					cout<<endl;
				}
				for (int i = 0; i <= polinomio; ++i)
				{
					matriz[0][i] = numeros[i];
				}

				int respuestas[polinomio];
				for (int i = 0; i <= polinomio; ++i)
				{

					cout<<endl;
					respuestas[i] = matriz[0][i] + matriz[1][i];
					matriz[1][i+1] = respuestas[i] *a;
					matriz[2][i] = respuestas[i];
					cout<<endl;
					for (int t = 0; t < 3; ++t)
					{
						for (int j = 0; j <= polinomio; ++j)
						{
							cout<< matriz[t][j]<<" ";
						}
						cout<<endl;
					}

				}
				for (int i = 0; i <= polinomio; ++i)
				{
					matriz[2][i] = respuestas[i];

				}
				cout<<endl<<"El cociente es ";
				int contador2=0;
				for (int i = polinomio; i > 0; --i)
				{	
					if(i!=1){
						cout<< respuestas[contador2]<<"x^"<<i-1<<" + ";
					}else{
						cout<< respuestas[contador2];
					}
					contador2++;
				}
				cout<<endl<< "El residuo es: "<< respuestas[polinomio]<<endl;
				break;
			}
			case 3:{
				int numeros[4];
				for (int i = 0; i < 4; ++i)
				{
					cout<<"Numero: ";
					cin>>numeros[i];
				}
				cout<<numeros[0]<<numeros[1]<<numeros[2]<<numeros[3]<<endl;
				cout<<numeros[0]<<numeros[1]<<numeros[3]<<numeros[2]<<endl;
				cout<<numeros[0]<<numeros[2]<<numeros[3]<<numeros[1]<<endl;
				cout<<numeros[0]<<numeros[2]<<numeros[1]<<numeros[3]<<endl;
				cout<<numeros[0]<<numeros[3]<<numeros[1]<<numeros[2]<<endl;
				cout<<numeros[0]<<numeros[3]<<numeros[2]<<numeros[1]<<endl;
				cout<<endl;
				cout<<numeros[1]<<numeros[2]<<numeros[3]<<numeros[0]<<endl;
				cout<<numeros[1]<<numeros[2]<<numeros[0]<<numeros[3]<<endl;
				cout<<numeros[1]<<numeros[3]<<numeros[0]<<numeros[2]<<endl;
				cout<<numeros[1]<<numeros[3]<<numeros[2]<<numeros[0]<<endl;
				cout<<numeros[1]<<numeros[0]<<numeros[2]<<numeros[3]<<endl;
				cout<<numeros[1]<<numeros[0]<<numeros[3]<<numeros[2]<<endl;
				cout<<endl;
				cout<<numeros[2]<<numeros[3]<<numeros[0]<<numeros[1]<<endl;
				cout<<numeros[2]<<numeros[3]<<numeros[1]<<numeros[0]<<endl;
				cout<<numeros[2]<<numeros[0]<<numeros[1]<<numeros[3]<<endl;
				cout<<numeros[2]<<numeros[0]<<numeros[3]<<numeros[1]<<endl;
				cout<<numeros[2]<<numeros[1]<<numeros[3]<<numeros[0]<<endl;
				cout<<numeros[2]<<numeros[1]<<numeros[0]<<numeros[3]<<endl;
				cout<<endl;
				cout<<numeros[3]<<numeros[0]<<numeros[1]<<numeros[2]<<endl;
				cout<<numeros[3]<<numeros[0]<<numeros[2]<<numeros[1]<<endl;
				cout<<numeros[3]<<numeros[1]<<numeros[2]<<numeros[0]<<endl;
				cout<<numeros[3]<<numeros[1]<<numeros[0]<<numeros[2]<<endl;
				cout<<numeros[3]<<numeros[2]<<numeros[0]<<numeros[1]<<endl;
				cout<<numeros[3]<<numeros[2]<<numeros[1]<<numeros[0]<<endl;

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