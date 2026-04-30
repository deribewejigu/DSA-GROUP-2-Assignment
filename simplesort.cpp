#include <iostream>
using namespace std;
//swap values
void swap(int &x, int &y){
    int temp;
    temp=x;
    x = y;
    y=temp;
}
//simple sort
void simplesort(int dataelement[],int n){
    for (int i=0; i < n; i++){
    for (int j = i + 1; j < n; j++){
    if (dataelement[i] > dataelement[j]){
    swap(dataelement[i], dataelement[j]);
    }
    }
    }
}

int main(){
    int dataelement[7] ={5,8,2,3,7,1,10};
    for (int i=0; i<7; i++){
        cout << dataelement[i] << " ";
    }

    simplesort(dataelement, 7);
   
    cout << endl;
     for (int i=0; i<7; i++){
        cout << dataelement[i] << " ";
    }
    return 0;
}