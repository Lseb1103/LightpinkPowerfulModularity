#include <iostream>
using namespace std;
void ingresar_arreglo (int a[],int l);
void imprimir(int a[],int b[], int i,int j,int k, int l);

int main()
{
  int a[100], b[100], i, j = 0, k =0,l; 
  cout<<"Ingrese el tamaño del arreglo : " ;
  cin >> l;
  ingresar_arreglo (a,l);
  cout<< endl;
  imprimir (a,b,i,j,k, l);
  cout<< endl;
  return 0;
}
void ingresar_arreglo (int a[], int i, int l);
{
  int  i, j = 0, k =0,l;
  for ( i=0; i<5; i++)
   {
   cout<<"ingrese["<< i<<"]=";
   cin >> a[i];
   }
   
}
 
void imprimir(int a[],int b[], int i,int j,int k, int l);
{  
  for (i  =0;i < 5; i++)
  {
  if (a [i]%2==0)
  {
  b[j]= a[i];
  j++;
  }
  }
  cout<< "Los numeros pares son:"<< endl;
  for (i=0;i<j; i++)
  {
   cout <<"["<<i<<"]"<<b[i];
  }
  return 0;
  } 
}