#include<iostream>
#include<set>
using namespace std;

int count(int arr[], int size){
    set<int> uniqueNumbers;
    for(int i = 0; i < size; i++){
        uniqueNumbers.insert(arr[i]);
    }
    return uniqueNumbers.size();
}