// Bell Number
// Number of ways to partition a set

#include<bits/stdc++.h>
using namespace std;
// contests
int num(int n)
{
	
	int dp[n+1];
	dp[1]=1;
	dp[2]=2;
	
	for(int i=3;i<=n;i++)
	{
		dp[i]=dp[i-1]+(i-1)*dp[i-2];
	}
	
	return dp[n];
}

int main()
{
	
	cout<<num(5);
	
	
}
