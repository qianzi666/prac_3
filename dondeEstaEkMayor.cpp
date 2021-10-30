#include <iostream>
using namespace std;
int dondeEstaElMayor(int *arr,int j)
{int donde = 0;
  int max=arr[0];
  for(int i=0;i<j;i++)
  {
      if(max<arr[i]){
max=arr[i];
donde = i;
      }
  }
  return donde;
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
    
    cout<<"el mayor value esta en arr["<<dondeEstaElMayor(arr,n)<<"]"<<endl;
}