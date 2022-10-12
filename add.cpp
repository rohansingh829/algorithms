#include <bits/stdc++.h>
using namespace std;
int nth_of_ap(int a , int d,int n)
{

        return ( a + ( n-1 ) *d);
}
  int main()
  {
  	int a=3;
  	int d=2;
  	int n=11;
  	
  	cout<<"the term" <<n
	  << "nth term of the series is:"
	  <<nth_of_ap(a,d,n);
	  return 0;
  }
