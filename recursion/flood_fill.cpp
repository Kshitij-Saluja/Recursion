/*Question
1. You are given a number n, representing the number of rows.
2. You are given a number m, representing the number of columns.
3. You are given n*m numbers, representing elements of 2d array a. The numbers can be 1 or 0 only.
4. You are standing in the top-left corner and have to reach the bottom-right corner. 
Only four moves are allowed 't' (1-step up), 'l' (1-step left), 'd' (1-step down) 'r' (1-step right). 
You can only move to cells which have 0 value in them. You can't move out of the boundaries or in the cells which have value 1 in them (1 means obstacle)
5. Complete the body of floodfill function - without changing signature - to print all paths that can be used to move from top-left to bottom-right.

Note1 -> Please check the sample input and output for details
Note2 -> If all four moves are available make moves in the order 't', 'l', 'd' and 'r'

Input Format
A number n
A number m
e11
e12..
e21
e22..
.. n * m number of elements
Output Format
trrrdlt
tlldrt
.. and so on
Constraints
1 <= n <= 10
1 <= m <= 10
e1, e2, .. n * m elements belongs to set (0, 1)
Sample Input
4
3
0 1 1 
0 0 1 
1 0 0 
0 1 0 

Sample Output
drdrd*/







#include<iostream>
#include<vector>
using namespace std;
void fun(int arr[10][10],int n,int m,int i,int j,string s1,bool vis[10][10]){
	if(i==(n-1) && j==(m-1)){
		cout<<s1<<"\n";
		return ;
	}
	if(vis[i][j]==false){
		vis[i][j]=true;
		if((i-1)>=0 && arr[(i-1)][j]==0 && vis[(i-1)][j]==false){
					fun(arr,n,m,(i-1),j,s1+"t",vis);
			}
			if((j-1)>=0 && arr[i][(j-1)]==0 && vis[i][(j-1)]==false ){
					fun(arr,n,m,i,(j-1),s1+"l",vis);
			}
	if((i+1)<n && arr[(i+1)][j]==0){
		fun(arr,n,m,(i+1),j,s1+"d",vis);
	}
	if((j+1)<m && arr[i][(j+1)]==0 && vis[i][(j+1)]==false){
			fun(arr,n,m,i,(j+1),s1+"r",vis);
	}
	
	vis[i][j]=false;
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr[10][10];
	bool vis[10][10];
	for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			vis[i][j]=false;
		}
	}
	fun(arr,n,m,0,0,"",vis);
	
}