#include <iostream>

using namespace std;

int menu();
void ejercicio1();
void ejercicio2();

int main()
{
	bool menuB = true;
	while(menuB)
	{	
		switch(menu())
		{
			case 1:
				ejercicio1();
				break;
			case 2:
				ejercicio2();
				break;
			case 0:
				menuB = false;
				break;
			default:
				cout << "No existe esa opcion.\n";
				break;
		}	
	}
}

int menu()
{
        cout << "1- Ejercicio 1" << endl
        <<      "2- Ejercicio 2" << endl
	<<	"0- Salir" << endl
        <<      "Ingrese la opcion: " << endl;

        int op;
        cin >> op;

        return op;
}

//Ejercicio 1
void ejercicio1()
{
	int op = 0;
	cout << "1- Identificar si un numero es triangular" << endl
	<<	"2- Encontrar el mayor triangular hasta n. " << endl

	<<	"Ingrese la opcion: ";
	cin >> op;
	

	int num;

        cout << "Ingrese el numero: ";
	cin >> num;
	switch(op)
	{
		case 1:
		{
			int n = 0;
			int a = 1;
			while (n < num)
			{
				n += a;
				a++;
				if (num == n)
					cout << "El numero es triangular.\n";
			}
			if (n > num)
				cout << "El numero no es triangular.\n";
			
			break;
		}
		case 2:
		{
			int n = 0;
			int a = 1;
		
			while(n < num)
			{
				n += a;

				if (n > num)
					cout << "El mayor triangular es: " << (n - a) << endl;
				else if(n == num)
					cout << "El mayor triangular es: " << n << endl;
				
				a++;
			}
			break;
		}
		default:	
			cout << "Error: opcion no existe.\n";
			break;
	}
}

//Ejercicio 2
void ordenar(int arr[], int n)
{
	for (int i = n; i > 0; i--)
	{
		for(int j = 0, k = 1; k < i; j++,k++)
		{
			if (arr[j] > arr[k])
			{
				int swap = arr[j];
				arr[j] = arr[k];
				arr[k] = swap;
			}
		}
	}
	
	cout << "Arreglo: [";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ", "; 
	}
	cout << "]";

	cout << "Valor menor: "  << arr[0] << endl;
	cout << "Valor mayor: " << arr[n - 1] << endl;
	cout << "Diferencia: " << arr[n-1] - arr[0] << endl;
}

void ejercicio2()
{
	int n = 0;
	
	do{
	cout << "Ingrese el tamaño del arreglo (n > 5) : ";
	cin >> n;
	}while(n < 5);

	int arr[n];
	
	for (int i = 0; i < n; i++)
	{
		cout << "Ingrese un numero: ";
		cin >> arr[i];
	}	

	ordenar(arr, n);
}

