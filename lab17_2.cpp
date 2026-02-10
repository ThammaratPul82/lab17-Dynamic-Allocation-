#include<iostream>
using namespace std;

void myString(char *&s, int N){
    s = new char[N+1];
    for(int i = 0; i < N;i++) s[i] = 'A'+i;
    s[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
