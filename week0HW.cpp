#include <iostream>
using namespace std;

void insert(int* arr , int pos , int value , int &n){

    if(pos < 0){
        cout<<"Error! You can not input a negative Index"<<endl;
        return;
    }
    
    if(pos >= n){
        cout<<"Error! You can not input a number that higher than n"<<endl;
        return;
    }
    

    for(int i = n ; i  > pos ; i--){
        arr[i] = arr[i-1];
    }

    *(arr + pos) = value;
    n++;


}

void deleteElement(int* arr , int pos , int &n){

    if(pos < 0){
        cout<<"Error! You can not input a negative Index"<<endl;
        return;
    }
    if(pos >= n){
        cout<<"Error! You can not input a number that higher than n"<<endl;
        return;
    }

    for ( int i = pos ; i < n -1; i++){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    n--;


}
     

int main(){

    int array[10] = {5,4,3,2,1};
    int n = 5;

    // Insert Value into valid index
    insert(array , 2 , 10 , n);
    cout<<"Array After Insert : ";
    for(int i = 0 ; i < n ; i++){
        cout<<array[i] << " ";
    }

    cout<<endl;

    // Validation Check
    insert(array, -1 , 20 , n);

    for(int i = 0 ; i < n ; i++){
        cout<<array[i] << " ";
    }



    cout<<endl;
    // Validation Check
    deleteElement(array , 10 , n );

    for(int i = 0 ; i < n ; i++){
        cout<<array[i]<<" ";
    }

    // Array after Delete
    deleteElement(array , 2 , n);
    cout<<"\nArray after Delete : ";
    for(int i = 0 ; i < n ; i++){
        cout<<array[i]<<" ";
    }


    return 0;
} 