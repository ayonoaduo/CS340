/**
Student Name: Onisokien Ayonoadu
Student Number: 200360422
Course: CS 340 - Advanced Data Structures
Task: This program will will sort any number of elements using the Quicksort algorithm
**/

#include <iostream>
using namespace std;

int partition(int *,int, int);
void Quicksort(int *,int, int);

int main()
{
    int num;
    
    cout << "Enter number of elements: ";
    cin >> num;
    
    int elements[num];
 
    cout << "Enter numbers to be sorted: ";
    for(int i = 0 ; i < num; i++)
    {
        cin >> elements[i];
    }
    
    Quicksort();
    cout << "Sorted list:\n";
    for(int i = 0; i < num; i++)
    {
        cout << elements[i] <<" ";
    }
    
    return 0;
}

int partition()
{
    
}
    
void Quciksort()
{
    
}
