/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<climits>
using namespace std;






//to find largest rowsum  and its index no 

int largestrowsum(int arr[][3], int i , int  j )
{
    
    int  maxi=INT_MIN;
    int rowindex=-1;
    
    for(int  i = 0 ; i< 3; i++)
    {
        int sum=0;
        for(int  j = 0; j<3 ; j++)
        {
            sum+=arr[i][j];
        }
        if(sum>maxi)
        {
            maxi=sum;
            rowindex=i;
        }
    }
    cout<< "the maximum sum is:"<<maxi<<endl;
    return rowindex;
}

// to print row sum 
void printrowSum(int arr[][3] , int i , int j)
{
    cout<<"print rowsum:"<<endl;
for(int  i = 0; i<3 ; i++)
{
    int sum=0;
    for(int  j = 0 ; j< 3 ;j++)
    {
        sum+=arr[i][j];
    }
    cout<<sum<<" ";
    }
     
     cout<<endl;

}



/*
// to print col sum
void printcolSum(int arr[][3] , int i , int j)
{
    cout<<"print colsum:"<<endl;
for(int  j = 0; j<3 ; j++)
{
    int sum=0;
    for(int  i = 0 ; i< 3 ;i++)
    {
        sum+=arr[i][j];
    }
    cout<<sum<<" ";
    }
     
     cout<<endl;

}
*/








int main(){

// create 2d matrix

	int arr[3][3];
	int i ;
	int j;
	

//take input row wise 


	for(int i = 0 ; i< 3 ;i++){
		for(int j = 0 ; j < 3 ; j++){
			cin>>arr[i][j];
		}
	}

	
// take input column wise 
/*
for(int i=0 ; i< 4; i++){
    for(int j=0 ; j<3 ; j++){
        cin>>arr[j][i];
    }
}
*/

//print
	for(int  i = 0 ; i<3;  i++){
		for(int  j= 0 ; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
//  take out rowsum 

printrowSum(arr,i, j);
//printcolSum(arr, i , j);

int ans = largestrowsum(arr,i ,j);
cout<< "max row is at index:"<<ans<<endl;

return 0; 
	
	
	

}