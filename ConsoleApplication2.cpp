// Chertousova PE
// 16.10.2022
// Task 4


#include <iostream>
using namespace std;
int main()
{
	int N, S1, S2;
	int a, b;
	cin >> N;
	a = N / 1000;
	b = N % 1000;
	S1 = a % 10 + (a / 10) % 10 + a / 100;
	S2 = b % 10 + (b / 10) % 10 + b / 100;

	if (S1 = S2)
		cout << "YES";
		
	else cout << "No";


	
    
	

}
