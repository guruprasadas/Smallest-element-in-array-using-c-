# include <iostream>
using namespace std;

void main()
{
  int *arr, size;
  cout<<"Enter size of array"<<endl;
  cin>>size;
  cout<<"Enter array elements"<<endl;
  arr = new int[size];
  
  for(int i = 0; i < size; i++)
  {
    cin>> arr[i];
  }
  
  cout<<"Display the array elements"<<endl;
  for(int i = 0; i < size; i++)
  {
    cout<< arr[i];
  } 
  
  min = arr[0];
  
  for(int i = 1; i < size; i++)
  {
    if ( min > arr[i])
      min = arr[i];
  }
  
  cout<<"The smallest element is"<<min<<endl;
  return 0;
} 
