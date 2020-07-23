#include <iostream>
using namespace std;
void ingresar_arreglo (int a[],int l);
void imprimir(int a[],int b[], int l);

int main()
{
  int a[100], b[100], l;
  cout<<"Ingrese el tamaño del arreglo : " ;
  cin >> l;
  ingresar_arreglo (a,l);
  cout<< endl;
  imprimir (a,b,l);
  cout<< endl;
  return 0;
 }
 void ingresar_arreglo (int a[],int l) 
 {
  int  i, j = 0;
  for ( i=0; i<l; i++)
   {
   cout<<"ingrese["<< i<<"]=";
   cin >> a[i];
   }
   
 }
 void imprimir(int a[],int b[],int l)
 {  
  int i, k=0, m=0;
  for (i  =0;i < l; i++)
  {
   if (a [i]%2==0)
   {
   b[k]= a[i];
   k++;
   m++;
   }
  }
  cout<< "Los numeros pares son:"<< endl;
  for (i=0;i<m; i++)
   {
   cout <<"["<<i<<"]"<<b[i]<< endl;
   }
}