#include<iostream>
using namespace std;

int arr[] = {1,3,
4,5,6,8,9,10,12,14
};

int target = 10;

int main(){

    int i=0;
    int j=arr.size()-1;

    while(i<j){

        if(arr[i]+arr[j] == target){
            cout<<"found sum";
            break;
        }
        else if(arr[i]+arr[j] < target){
            i++;
        }
        else if(arr[i]+arr[j] > target){
            j--;
        }  
        else{
            cout<<"sum not found";
        }
    }



}