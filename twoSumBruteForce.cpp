#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n-1; i++){
		for(int j=1; j<n; j++){
			if(arr[i]+arr[j]==10){
				cout<<"YES"<<endl;
				return 0;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
