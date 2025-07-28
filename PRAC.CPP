#include <iostream>
using namespace std ;
int main ()
{
    cout <<"enter the size of the array " ;
    int size ;
    cin >> size ;
    int arr[size] ;
    cout << "enter the elements " ;
    for(int i= 0 ;i < size ;i++){
       cin >> arr[i] ;
    }
    int avg =0 ;
    for(int i=0; i<size ;i++){
        avg = avg + arr[i];
    }
    int res = avg / size ;
    cout << res ;
    return 0 ;
}
