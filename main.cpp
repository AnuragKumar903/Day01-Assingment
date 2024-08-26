#include <iostream>
using namespace std;

int main() {

  // Ques - 01 Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

  string str1;
  string str2;

  cin>> str1;
  cin>> str2;

  cout<< str1 +" "+ str2 << endl;

   // Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

  int grade[5];
  int sum = 0;

  for(int i = 0; i < 5; i++){
    cout << "Enter grade " << i + 1 << ": ";
    cin>> grade[i];
    sum += grade[i];
    cout<<endl;
  }
  cout<<"average "<< sum/5 << endl;

  // Write a C++ program that takes an integer as input from the user and outputs its square.

  int num;
  cout<<"Enter a number: ";
  cin>>num;
  cout<< "The square of "<< num << " is: "<< num*num << endl;
}