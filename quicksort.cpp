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
    
    Quicksort(elements, 0, num-1);
    cout << "Sorted list:\n";
    for(int i = 0; i < num; i++)
    {
        cout << elements[i] <<" ";
    }
    
    return 0;
}

int partition(int *elements, int begin, int end)
{
    //Pivot
    int pivot = elements[end];
    
    //Index of pivot
    int pIndex = begin;
    int temp;
    
    //Check if current element is less or equal to pivot then swap
    for(int i = start; i < end; i++)
    {
        if(a[i] <= pivot)
        {
            temp = elements[i];
            elements[i] = elements[pIndex];
            elements[pIndex] = temp;
            pIndex++;
        }
    }
}
    
void Quicksort(int *elements, int begin, int end)
{
    
}

 
