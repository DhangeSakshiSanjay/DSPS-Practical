/*You are given an integer array 'A' of size 'N', sorted in non-decreasing order.You are also given an integer 'target'
your task is to write a function to search for 'target in the array 'A' If it exists return its index in 0-based indexing using Linear search in c++*/

#include<iostream>
using namespace std;

int main()
{
int a[10],i,key,n,flag=0,element;
cout<<"Enter the size of array:";
cin>>n;
cout<<"Enter the array elements:";
	for( int i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	cout<<"key element to be search=";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			flag=1;
			break;
		}
		}
	if(flag==1)
	{
		cout<<"\nkey element is found at index="<<i;
	}
	else
	{
		cout<<"\nKey element is not found";
	}

	return 0;
}
	
