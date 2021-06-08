
#include <bits/stdc++.h>
using namespace std;
 

bool compare(int x, int y)   // use for sorting
{
    return abs(x) < abs(y);
}
 
void min_summ(int arr[], int n)
{
    sort(arr, arr + n, compare);   //in built function to sort the array using function compare 
    int min = INT_MAX, x, y;
    for (int i = 1; i < n; i++) {
 
        // to check howw close to zero
        if (abs(arr[i - 1] + arr[i]) <= min) {
 
            // if more near zero value found update min and store index for two elements
            
            min = abs(arr[i - 1] + arr[i]);
            x = i - 1;
            y = i;
        }
    }
    cout << "The two elements whose sum is minimum are "
         << arr[x] << " and " << arr[y];
}
 
// Driver code
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
  min_summ(arr , n);
    return 0;
    
}
