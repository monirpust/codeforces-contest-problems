#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, qa, q=0;

	cin>>t;
	
	while(t--)
	{
		cin>>n;	
		
		char qa[n];
		
		for(int i = 0; i<n; i++)
		{
			cin>>qa[i];
		}
		
		for(int i = 0; i < n; i++)
		{
			if(qa[i] == 'Q') q++;
			else
			{
				if(q>0) q--;
			} 
		}
		
		if(q<0) q=0;
		
		if(q) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
		
		q=0;

	}
	
}
