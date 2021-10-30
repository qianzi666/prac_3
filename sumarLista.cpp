#include <iostream>
using namespace std;
int sumarLista(int *arr,int j)
{
  
    
 int sum=0;
 for (int i=0;i<j;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n = 0;
   int arr[n];
    cout<< "Introduzca el numero de elementos:";
    cin>>n;
    for (int a=0;a<n;a++){
        cout<<"Introduzca "<<n <<"elementos "<<endl;
        cin >>arr[a];
    }
    
    cout<<"la sumar de los elementos es:"<<sumarLista(arr,n)<<endl;
}