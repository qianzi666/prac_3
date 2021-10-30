#include <iostream>
using namespace std;
bool contiene(int *arr,int j,int n)
{
    for(int i=0;i<j;i++)
    {
        do
        {
            continue;
         }   
        while(arr[i]==n);
        {
            return true;
        }
    }
}     
        
    


int main(){
    int j = 0;
    int n = 0;
   int arr[n];
    cout<< "Introduzca un numero n";
    cin>>n;
    cout<<"introduzca numero de elementos"<<endl;
    cin>>j;
    for (int a=0;a<j;a++){
        cout<<"Introduzca "<<j <<"elementos "<<endl;
        cin >>arr[a];
    }
    bool res = contiene(arr,j,n);
    if(res == true){
        cout<<"result es ture"<<endl;
    
    }else{
        cout<<"result es false"<<endl;
    }
}