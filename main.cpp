#include <iostream>
using namespace std;
#define x 100

int  ingresar (int a[], int n);

int  ordenar (int a[], int n);

int  imprimir (int a[], int n);

void ingresarAhorros(int arr[]);

int Busqueda(int arr[], int dato);

void IngresarDatos(int arrdatos[50]);


void OrdenarDatos(int arrdatos[50]);

int main() {
  int arr[x];
  int num;
  int i=0;
  int introarreglo[50];
  int a[12], opc, opc2, datobuscado,pbuscado;
  do
  {
    cout<<"\t\t TRABAJO EN GRUPO\n\n";
    cout<<"\t\t SELECCIONE UNA OPCION DEL MENU\n\n";
    cout<<"1.- INTERCAMBIAR POSICIONES DE UN VECTOR\n";
    cout<<"2.- ORDENAMIENTO DE UN VECTOR\n";
    cout<<"3.- CUENTA DE AHORROS VIRTUAL DEL BANCO PICHINCHA\n";
    cout<<"4.- SALIR\n";
    cout<<"OPCION: ";
    cin>>opc;
    switch (opc)
    {
      case 1:
      cout<<"\t\t\t\tBienvenido a la sección de ordenamiento inverso\n\nIngrese los 6 datos en el arreglo:\n\n";
      IngresarDatos(introarreglo);
      break;
      case 2:
      cout<<"DIgite el tamaño del arreglo ";
      cin>>num;
      ingresar(arr,num);
      cout<<endl;
      imprimir(arr,num);
      cout<<endl;
      ordenar(arr,num);
      cout<<endl;
      imprimir(arr,num);
      break;
      case 3:
      cout<<"\t\t BIENVENIDO\n\n";
      do {
      cout<<"\nSELECCIONE UNA OPERACIÓN\n";
      cout<<"1.- INGRESAR AHORROS\n";
      cout<<"2.- BUSCAR UN VALOR AHORRADO\n";
      cout<<"3.- Salir\n";
      cin>>opc2;
      switch (opc2)
      {
        case 1:
        ingresarAhorros(a);
        break;
        case 2:
        cout<<"Que valor desea buscar: ";
        cin>>datobuscado;
        pbuscado=Busqueda(a, datobuscado);
        if (pbuscado==1)
        {
         cout<<"Usted ahorró esa cantidad en el mes de enero\n";
        }
        if (pbuscado==2)
        {
         cout<<"Usted ahorro esa cantidad en el mes de febrero\n";
        }
        if (pbuscado==3)
        {
         cout<<"Usted ahorro esa cantidad en el mes de marzo\n";
        }
        if (pbuscado==4)
        {
         cout<<"Usted ahorro esa cantidad en el mes de abril\n";
        }

        if (pbuscado==5)
        {
         cout<<"Usted ahorro esa cantidad en el mes de mayo\n";
        }
        if (pbuscado==6)
        {
         cout<<"Usted ahorro esa cantidad en el mes de junio\n";
        }

        if (pbuscado==7)
        {
         cout<<"Usted ahorro esa cantidad en el mes de julio\n";
        }
        if (pbuscado==8)
        {
         cout<<"Usted ahorro esa cantidad en el mes de agosto\n";
        }

        if (pbuscado==9)
        {
         cout<<"Usted ahorro esa cantidad en el mes de septiembre\n";
        }
        if (pbuscado==10)
        {
         cout<<"Usted ahorro esa cantidad en el mes de octubre\n";
        }
        if (pbuscado==11)
        {
         cout<<"Usted ahorro esa cantidad en el mes de noviembre\n";
        }
        if (pbuscado==12)
        {
         cout<<"Usted ahorro esa cantidad en el mes de diciembre\n";
        }
        if (pbuscado!=1 && pbuscado!=2 && pbuscado!=3 && pbuscado!=4 && pbuscado!=5 && pbuscado!=6 && pbuscado!=7 && pbuscado!=8 && pbuscado!=9 && pbuscado!=10 && pbuscado!=11 && pbuscado!=12)
        {
        cout<<"No se encuentra registrado ese valor en su cuenta.\n";
        }
        break;
        case 3:
        cout<<"Saliendo...\n";
        break;
        default:
        cout<<"Opción no valida.\n";
      }
      } while (opc2!=3);

      break;
      case 4:
      cout<<"Saliendo....\n";
      break;
      default:
      cout<<"Opción no válida.\n";
    }
  }while (opc!=4);
  return 0;
}




//EJERCICIO 3
void ingresarAhorros(int arr[])
{
  for (int i=0; i<12; i++)
  {
    cout<<"Ingrese los ahorros del mes "<<i+1<<": ";
    cin>>arr[i];
  }
}


int Busqueda(int arr[], int dato)
{
  for (int i=0; i<=12; i++)
  {
    if (arr[i]==dato)
    {
      return i+1;
    }
  }
  return -1;
}



//EJERCICIO 2
int  ingresar (int a[], int n)
{
    int i;

    for (i=0 ; i<n ; i++)
    {
        cout<<"Dijite los numeros sean positivos o negativos "<<i+1<<" : ";
        cin>>a[i];
    }
return 0;
}


int ordenar (int a[], int n)
{
    int aux;
    for (int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]<a[i])
            {
                aux=a[i];

                a[i]=a[j];

                a[j]=aux;

            }

        }
    }

return 0;
}



//EJERCICIO 1
int imprimir(int a[], int n)
{
    int i;
    for (i=0 ; i<n; i++)
    {
        cout<<"["<<a[i]<<"]";
    }
    cout<<endl;
return 0;
}


void IngresarDatos(int arrdatos[50])
{
 for(int r=0; r<6;r++){
 cout<<"dato["<<r+1<<"]: ";
 cin>>arrdatos[r];
 }
 OrdenarDatos(arrdatos);
}

void OrdenarDatos(int arrdatos[50])
{
 int i=0;
 cout<<"\nLos datos ordenados de forma inversa son:"<<endl;
 for(int r=5; r>=0; r--){
 cout<<"dato["<<i+1<<"]: ";
 i++;
 cout<<arrdatos[r];
 cout<<"\n";
 }
}

