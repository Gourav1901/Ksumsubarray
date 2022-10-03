#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,mx=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int k;
    cin>>k;

int i=0,j=0;
while(j<n){

       sum=sum+arr[j];
       if(j-i+1<k){
        j++;
       }
       else if(j-i+1==k)
       {
          mx=max(mx,sum);
          sum=sum-arr[i];
          i++;
          j++;
       }

    


}
        
cout<<mx;

    

}
