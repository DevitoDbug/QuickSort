#include <iostream>

using namespace std;
void swaping (int *x , int *y);
void quicksort_recursion (int num []  ,  int low  , int high);
int partitioning (int num[] , int low , int high);//return the index of the pivot

int main()
{


    int size1  = 6 ;
    int low  = 0 ;
    int high = (size1 - 1 );
    int no_elements;


    //taking the input form the user
    cout << "Enter the number of elements you want to sort" << endl;
    cin>> no_elements;
    int a[no_elements];
    for (int i = 0 ; i < no_elements ; i++)
    {
        cout<< "Enter value number "<< (i+1)<<endl;
        cin>> a[i];
    }

    cout<<"The sorted numbers are :" << endl;
        quicksort_recursion(a , low , high);


    for ( int i = 0 ; i < size1  ; i++)
    {
        cout << a[i]<<endl;
    }
    return 0;
}

void quicksort_recursion (int num[] , int low  , int high)
{
    if ( low < high){
    int pivot  = partitioning(num , low , high);
    quicksort_recursion(num , low  , pivot-1);
    quicksort_recursion(num , pivot+1 , high);
    }
}

//j
//7, 4 ,9 ,5
//i
//
int partitioning (int num[] , int low , int high)//return the index of the pivot
{
    int pivot  = num[high];
    int i =  low ;

    for (int j = low  ; j < high ; j++ )
    {

        if ( num[j] <= pivot)
        {
            swaping(&num[i], &num[j]);
            i++;
        }
    }
    swaping(&num[high], &num[i]);
    return i;
}

void swaping (int *x , int *y)
{
    int temp = *x ;
    *x = *y ;
    *y = temp;
}


