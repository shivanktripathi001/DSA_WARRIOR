#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,1,2,2,3,3,3,3,4,4,5,5};
     int officer = 0;
     int cm = 1;
     int size = (sizeof(arr) / sizeof(arr[0])) - 1; 
     int res =1;
     
    while(cm<size){

       if(arr[cm] == arr[cm-1]){
           cm++;
           continue;
       }
       
           arr[officer+1] = arr[cm];
           cm++;
           res++;
       
      
}
 cout<< res;

}