#include<iostream>
using namespace std;


int min_distance(int arr[], int n, int x, int y)
{
         
    
    int pre= -1, min_dis = INT_MAX;  // f indicate the index of any require element found
     
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==x || arr[i]==y)    // if one of the element found
        {
            if( pre != -1 && arr[i] != arr[pre]) // check one element should have been found earlier(assume x) and this is not the same element(not be x,should be y) 
                min_dis = min(min_dis , i-pre); // if distance is less than previous pair postion then update
              
            //update the previous index to index of newly found
            pre=i;
        }
    }
    //If distance is equal to int max
    if(min_dis==INT_MAX)
        return -1;  // both element or one of two element doesnot exist
 
    return min_dis;
}


int main(){
system("CLS");
 int n,x,y;
 cout<<"size of array:  ";
 cin>>n;
 int arr[n];

  cout<<"\n enter element of array:-";
  for(int i=0;i<n;i++)
  {
  	cin>>arr[i];
  	
  }cout<<"\n elements  those distance to be searched ";
  cin>>x>>y;
  x=min_distance(arr,n,x,y);
  cout<<"\nminimun distance is "<<x;
  return 0;
}
