/*Question
1. You are given a number n, the size of a chess board.
2. You are required to place n number of queens in the n * n cells of board such that no queen can kill another.
Note - Queens kill at distance in all 8 directions
3. Complete the body of printNQueens function - without changing signature - to calculate and print all safe configurations of n-queens
Use sample input and output to get more idea.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

Input Format
A number n
Output Format
Safe configurations of queens as suggested in sample output
Constraints
1 <= n <= 10
Sample Input
2

Sample Output
*/






#include<iostream>
using namespace std;
bool isplaced(int n,int x[10],int k,int i){
	for(int j=0;j<i;j++){
	if(x[j]==k){
		return false;
	}
	if(abs((k)-(x[(j)]))==abs((i-j)))
	return false;
	}
	return true;
	
}
void fun(int n,int x[10],int i){
	for(int k=0;k<n;k++){
	if(isplaced(n,x,k,i)){
		x[i]=k;
		if(i==(n-1)){
			for(int p=0;p<n;p++){
				cout<<p<<"-"<<x[p]<<", ";
			}
			cout<<".\n";
			//return ;
		}
		else{
		fun(n,x,(i+1));
		}
	}
	}
}
int main(){
	int n;
	cin>>n;
	int x[10];
	for(int i=0;i<n;i++){
		x[i]=0;
	}
	fun(n,x,0);
}