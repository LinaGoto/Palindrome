
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  //innputing phrase and initializing values
  char input[81];
  cin.get(input, 81);
  cin.get();
  char output[81];
  int value = 0;
  int number = 0;
  int count = 0;

  //change all uppercase input to lowercase
  for (int i=0; input[i]!='\0' ; i++){
    if(input[i]>='A' && input[i] <= 'Z'){
      input [value] = input[i] + 32;
      value++;
    }
    else{
      input [value] = input[i];
      value++;
    }
  }
  input[value]='\0';

  //take out spaces and punctuations
  for (int i=0; i<81; i++){
    if(isalpha(input[i])){
	input[number] = input[i];
	number ++;
    }
  }
  input[number]='\0';
  
  //swap letter
  for (int i= number-1 ; i>=0; i--){
      output [count] = input [i];
      count ++;
  }
  output[count] = '\0';
  
//output
 cout << "output is: "  << output << endl;
    if (strcmp(input, output) == 0){
       cout << "palindrome" << endl;
    }
    if (strcmp(input, output) != 0){
      cout << "Not a palindrome" << endl;
    }

}
