// number of ways to reach a point

//nu(m,n)=n(m-1,n)+n(m,n-1)

#include<bits/stdc++.h>
using namespace std;

#define N 3

int findways(int m,int n)
{
	
	int dp[m+1][n+1];
	
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			
			if(i==0||j==0)
			dp[i][j]=1;
			else
			dp[i][j]=dp[i-1][j]+dp[i][j-1]; // + total
		}
	}
	
	return dp[m][n];
}

int main()
{

//int grid[3][3];	
cout<<findways(4,4);	
	
//	((n+n)!/n!*n!)
	
}
