/* 
//using recursion

#include <iostream> 
using namespace std; 
int no_paths(int m, int n) 
{ // base case where only one way is possible
    if (m == 1 || n == 1) 
        return 1; 
    return no_paths(m - 1, n) + no_paths(m, n - 1);  
} 
*/ 

//dynamic programming approach

#include <iostream> 
using namespace std; 
int no_paths(int m, int n) 
{ 
	
	int dp[m][n]; 
// for column 1 case
	for (int i = 0; i < m; i++) 
		dp[i][0] = 1; 
//for column 2 case
	for (int j = 0; j < n; j++) 
		dp[0][j] = 1; 

// calculation by considering by taking 2 different paths in grid
	for (int i = 1; i < m; i++) { 
		for (int j = 1; j < n; j++) 
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
	} 
	return dp[m - 1][n - 1]; 
} 

int main() 
{ 
	cout << no_paths(10,10); 
	return 0; 
} 
