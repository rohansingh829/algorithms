#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==0 or n==1){
		cout<<"neither compsite nor prime ";
		return 0;
	}
	int i=2;
	while( i<n){
		if(n%i==0){
			cout<<"non prime number";
			return 0;
		}
		i++;
	}
	cout<<"prime number";
	return 0;
}
