//
//  main.cpp
//  week_10_practice_2
//
//  Created by Gulnoza Sabirjonova on 17/11/22.
//

#include <iostream>
using namespace std;

int find(int arr[], int size, int input){
    for(int i = 0; i < size; i++){
        if(arr[i] == input)
            return i;
    }
    return -1;
}


void swap(int numbers[], int i, int j){
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void sort (int numbers[], int size){
    for(int i = 0; i < size; i++){
        for(int i = 1;i < size; i++){
            if(numbers[i] < numbers[i - 1]){
                         swap(numbers, i, i-1);
            }
        }
    }
    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }
}

const int rows = 2;
const int columns = 3;

void print_matrix(int matrix[rows][columns]){
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < columns; col++){
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

int reverse(int arr[], int i, int j){
    int temp;
    if(i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        reverse(arr, i+1, j-1);
    }
    return 0;
    
}

int main() {
   //copying an array
    
//    int first [] = {10, 20, 30};
//    int second [size(first)];
//    for(int i = 0; i < size(first); i++){
//        second[i] = first[i];
//        cout << second[i] << " ";
//    }
    
    
   //Comparing arrays
    
//    int first [] = {10, 20, 30};
//    int second [] = {10, 20, 30};
//
//    bool equal = true;
//
//    for (int i = 0; i < size(first); i++){
//        if(first[i] != second[i]){
//            equal = false;
//            break;
//        }
//    }
//    cout << boolalpha << equal << endl;
    
    
    //Unpacking arrays
    
//    int arr[] = {10, 20 ,30};
//    auto [x, y, z] = arr;
//    
//    cout << x << " " << y << " " << z << " " << endl;
    
    //Searching array
    
//    int arr[] = {10, 20, 30};
//    int input;
//    cin >> input;
//
//    cout << find(arr, size(arr), input) << endl;
//
//    return 0;
    
    
    //Sorting array (Bubble sort)
    
//    int arr[] = {8,4,1,3,2};
//
//    sort(arr, size(arr));
    
    //two dimenensional questions
//    int arr[rows][columns] = {
//        {1, 0, 1},
//        {0, 0, 1}
//    };
//
//    print_matrix(arr);
    
    //Problem 9
    
//        int arr_1[] = {10, 20, 30, 40, 50, 60};
//        int arr_2[size(arr_1)];
//        for(int i = 0; i < size(arr_1); i++){
//            arr_2[i] = arr_1[i];
//            cout << arr_2[i] << " ";
//        }
    
    //Problem 10
//    int size;
//    cin >> size;
//    int arr[size];
//    for(int i = 0; i < size; i++){
//        cin >> arr[i];
//    }
//
//    for(int i = 0; i < size; i++){
//        for(int i = 1; i < size; i++){
//            if(arr[i] > arr[i - 1]){
//                         swap(arr, i, i-1);
//            }
//        }
//    }
//    for(int i = 0; i < size; i++){
//        if(i == size - 1){
//            cout << arr[i];
//        }
//        else cout << arr[i] << ", ";
//    }
//    cout << endl;
    
    //Problem 11
//    int arr [5] = {23,65,1,53,57};
//
//    reverse(arr, 0, 4);
//
//    for(int i = 0; i<5; i++){
//        cout << arr[i] << " ";
//    }
    
    
    //Problem 12
    
//    int n;
//    cin >> n;
//    int arr[n];
//    for(int i = 0; i < n; i++){
//        cin >> arr[i];
//    }
//
//    for(int i = 0; i < n; i++){
//        for(int i = 1;i < n; i++){
//            if(arr[i] > arr[i - 1]){
//                         swap(arr, i, i-1);
//            }
//        }
//    }
//    for(int i = 0; i < n; i++){
//        if(i == n - 1)
//            cout << arr[i];
//        else cout << arr[i] << ", ";
//    }
//
//    cout << endl;
//
//
    
    //Problem 13
    int arr[ ] = {1, 1, 2, 2, 2, 2, 3};
    int x;
    int count = 0;
    cin >>x;
    for(int i = 0; i < size(arr); i++ ){
        if (arr[i] == x){
            count++;
        }
    }
    cout << count << " (number " << x << " occurs " << count << " times in arr)" << endl;
    return 0;
}
