
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1){

for(int i = 0; i <= s1.size(); ++i){
if(s1[i] == ' '){
  cout << i << endl;
}
  }
cout << s1.size() << endl;
}

void exercise_2(string s1) {}

void exercise_3(string s1) {
  
}

void exercise_4(int n) {

}

void exercise_5(int n, int k) {
  string hueco;
  switch(n){
    case 1:
    hueco = " "s;
    break;
    case 2:
    hueco = "  "s;
    break;
    case 3:
    hueco = "   "s;
    break;
    case 4:
    hueco = "    "s;
    break;
    case 5:
    hueco = "     "s;
    break;
    case 6:
    hueco = "      "s;
    break;
    case 7:
    hueco = "       "s;
    break;

  }
string f;
for(int f = 1; f <= k; f++){
  int t = 20;
  int g = 0;

  while(r <0 14){
    if( hueco.size() == t + (t * g) + g){
      hueco = hueco + \n;
      break;
    }
    ++g;
  }
 
  }
} 
  }
}

int exercise_6(int n) {
  cin >> n;
  int sum = 0;
  while (n > 0){
    sum = sum + n%10;
    n = n/10;
  }

  return sum;
}

void exercise_7(int n) {
  cin >> n;
  double res = 0;
  for(int i = 1; i <= n; i++){
    res += pow(-1, i + 1)/i;
  }
  cout << res << endl;
  }

  

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  cin >> n;
  cin >> k;
  int result = 0;
  for(int f = 1; f <= n; f++){
    result += pow(f,k);
  }
  return result;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}