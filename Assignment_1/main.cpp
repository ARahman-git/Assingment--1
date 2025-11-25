#include <iostream>
using namespace std;

void SelectionSort(int array[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int k = i;
        int j = i+1;
        while (j<n)
        {
            if (array[j] > array[k])
            {
                k = j;
            }
            j++;
        }

        swap(array[i], array[k]);
    }
}

int BinarySearch(int array[], int key, int high,int low = 0)
{
    while (low <= high)
    {
        int mid = (low+ high)/2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] < key)
        {
            high = mid -1;
        }
        else
            low = mid + 1;

    }
    return -1;
}


int main()
{
    int key;
    int length;


    cout<< "Enter the length of Array"<<endl;
    cin>>length;

    int array[length];

    for (int i=0; i<length; i++)
    {
        cout<<"Enter a Element:  ";
        cin>> array[i];
    }

    cout<< "Elements of array are: ";

    for (int i = 0; i<length; i++)
    {
        cout<< array[i] << " ";
    }
    cout<< endl;

    SelectionSort(array, length);

    cout<< "Sorted Elements of array are: ";

    for (int i = 0; i<length; i++)
    {
        cout<< array[i] << " ";
    }

    while (1)
    {
        cout<< endl;
        cout<< "Which element you want to find: ";
        cin>> key;

        int index = BinarySearch(array, key, length -1);

        if (index == -1)
        {
            cout<< "Sorry, Try Again";

        }
        else
        {
            cout<< "You have found the key value at Index "<< index;
            break;
        }
    }
    

}

