#include<iostream>
using namespace std;

void duplicate(int arr[], int n){
	
	for(int i=0;i<n;i++)
	{
		int idx= arr[i]%n;  // this always between 0 to n and unique for every distict arr[i] value
		 arr[idx]+= n;   // making hashtable to the array it self by adding size of array
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]/n>=2)    // checking for duplicate
		  cout<< i<<" ";
	}
}






int main()
{
 system("CLS");
 int n;
 cout<<"size of array:  ";
 cin>>n;
 int arr[n];

  cout<<"\n enter element of array:-";
  for(int i=0;i<n;i++)
  {
  	cin>>arr[i];
  	
  }
  duplicate(arr,n);
  return 0;
}
