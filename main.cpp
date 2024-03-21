#include<iostream>

using namespace std;

int findSum(int a, int b) {
  int sum = a+b;
  return sum;
}

int main(){
  int sum = findSum(2,3);
  cout << "sum is " << sum << endl;
  return 0;
}