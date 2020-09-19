#include<bits/stdc++.h>
using namespace std;


int s(string s1)
{
	char str[256]={0};

	for(int i=0;i<s1.size();i++)
	{
		str[s1[i]]++;
	}

	for(int i=0;i<26;i++)
	{
		if(str[s1[i]]>1)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	/* code */
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string s1;
	cin>>s1;

	cout<<s(s1);
	return 0;
}