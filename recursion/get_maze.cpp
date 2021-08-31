/*Question
1. You are given a number n and a number m representing number of rows and columns in a maze.
2. You are standing in the top-left corner and have to reach the bottom-right corner. Only two moves are allowed 'h' (1-step horizontal) and 'v' (1-step vertical).
3. Complete the body of getMazePath function - without changing signature - to get the list of all paths that can be used to move from top-left to bottom-right.
Use sample input and output to take idea about output.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

Input Format
A number n
A number m
Output Format
Contents of the arraylist containing paths as shown in sample output
Constraints
0 <= n <= 10
0 <= m <= 10
Sample Input
3
3

Sample Output
[hhvv, hvhv, hvvh, vhhv, vhvh, vvhh]*/



#include <iostream>
using namespace std;
void fun(int i,int j,int n,int m,string s){
	if(i==(n-1) && j== (m-1))
	{
		cout<<s;
		int g=0;
		for(int k=0;k<(m-1);k++){
			if(s[k]!='v')
			g=1;
		}
		if(g==1)
		cout<<",";
		return ;
	}
	if((i+1)<n){
	fun((i+1),j,n,m,s+"h");
	}
	if((j+1)<m){
	fun(i,(j+1),n,m,s+"v");
	}
}
int main(){
	int n,m;
	cin>>m>>n;
	cout<<"[";
	fun(0,0,n,m,"");
	cout<<"]";
}