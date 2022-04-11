#include <iostream>
using namespace std;
int fibonacci(int n) {
  if (n == 0 || n ==1){
    return n;
  } else {
    return (fibonacci(n-1) + fibonacci(n-2));
  }
}
int main() {
  
  int n, i, j = 0;
	cout<<"======================================="<<endl;
    cout<<"|                                      |"<<endl;
    cout<<"|   Program Deret Fibonacci Rekursif   |"<<endl;
    cout<<"|                                      |"<<endl;
    cout<<"======================================="<<endl;
    cout<<"Masukan nilai ke-n : ";cin>>n;

  cout << "Hasil bilangan fibonacci: \n";
  for (i = 1; i <= n; i++){
    cout << fibonacci(j) << " ";
    j++;
  }
  return 0;
}
