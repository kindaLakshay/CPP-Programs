#include<bits/stdc++.h>
using  namespace std;
void foo(int i,int n)
{
	if(i<1)
		return;
	foo(i-1,n);
	cout<<i<<" ";
}
int main()
{
	int n;
	cin>>n;
	foo(n,n);
}