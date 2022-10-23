//177673730 : A - Technical Support 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, count = 0, count2=0;

	cin>>t;
	
	while(t--)
	{
		cin>>n;	
		
		char s[n];
		
		for(int i = 0; i<n; i++)
		{
			cin>>s[i];
		}
		
		for(int i = 0; i < n; i++)
		{
			if(s[i] == 'Q') count2++;
			if((s[i] == 'A') && (count2 > 0))count2--;
			//cout<<"coutn = "<<count<<endl;
			//cout<<"count2 = "<<count2<<endl;
		}
			
		
		for(int i = 0; i < n; i++)
		{
			if(s[i] == 'A') count++;
			//cout<<"coutn = "<<count<<endl;
		}
		

		//cout<<"count = "<<count<<" String = "<<s<<endl;
		if(count >= (n - count) && (count2 <= 0))
		{
			if(s[n-1] == 'Q')
			{
				cout<<"NO"<<endl;
				continue;
			}
			
			if((count > 0))
				cout<<"YES"<<endl;
				
		
			//cout<<"count = INSIDE IF = "<<count;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		count=0;
		count2=0;
		memset(s, ' ', sizeof(s));
	}
	
}
