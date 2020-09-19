#include<bits/stdc++.h>
using namespace std;

int s(string s1,string s2)
{
	

	char count[256]={0};
	if(s1.size()!=s2.size())
	{
		return false;
	}

	for(int i=0;i<s1.size();i++)
	{
		count[s1[i]]++;
		count[s2[i]]--;
	}

	for(int i=0;i<26;i++)
	{
		if(count[i]!=0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	string s1,s2;
	cin>>s1>>s2;

	if(s(s1,s2))
	{
		cout<<"Anargam"<<endl;
	}
	else
	{
		cout<<"Not Anargam"<<endl;
	}
}