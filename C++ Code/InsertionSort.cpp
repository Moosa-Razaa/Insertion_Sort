#include <iostream>

using namespace std;

void IncreasingOrderInsertionSort( int* numbers, int length )
{
    int j = 0;
    int key = 0;
    for(int i = 0; i < length; i ++)
    {
        key = numbers[i];
        j = i - 1;
        while( j >= 0 && numbers[j] > key )
        {
            numbers[j + 1] = numbers[j--];
        }
        numbers[j + 1] = key;
    }
}

void DescreasingOrderInsertionSort(int* numbers, int length)
{
    int j = 0;
    int key = 0;
    for (int i = 0; i < length; i++)
    {
        key = numbers[i];
        j = i - 1;
        while (j >= 0 && numbers[j] < key)
        {
            numbers[j + 1] = numbers[j--];
        }
        numbers[j + 1] = key;
    }
}
