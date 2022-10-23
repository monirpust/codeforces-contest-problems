//177673730 : A - Cowardly Rooks 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t, m, n, x ,y;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n>>m;
		int l = m;
		while(l--)
			cin>>x>>y;
		if(n>m)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	
	return 0;
}
