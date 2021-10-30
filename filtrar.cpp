#include<iostream>
using namespace std;


void mostrarArray(double * arr_2, int j)
{
    for(int i =0; i<j; i++)
    {
        cout<<arr_2[i]<<endl;
    }
}

void filtrar(double * arr_1, int n)
{
    int j=0;
    double arr_2[j];
    
    for(int i=0; i<n; i++ )
    {
    if(arr_1[i]>=0)
    {
    arr_2[j]=arr_1[i];
       j++;
    }
    }
    mostrarArray(arr_2,j);

}


int main()
{   
    int n ;
    double arr_1[n];
    
   
    cout<< "Introduzca el numero de elementos:";
    cin>>n;
    for (int i=0;i<n;i=i+1)
    {
        cout<<"Introduzca "<<n <<"elementos "<<endl;
        cin >>arr_1[i];
    }

    
    filtrar(arr_1,n);
}