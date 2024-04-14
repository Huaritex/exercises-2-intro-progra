
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

void exercise_2(string wasap) {
  int bazooka_size = wasap.size();
  string bazooka_word;
  int i = 0;
  while(i <= bazooka_size){
    char sebas_char = wasap[i];

    if(sebas_char == ' ' || i == bazooka_size && wasap != ""){
      cout << '[' << bazooka_word << ']' << endl;
      bazooka_word = "";
    }
    else {
      bazooka_word = bazooka_word + sebas_char;
    }
    ++i;
  }
}

void exercise_3(string cake) {}


void exercise_4(int number) {
  int h = 1;
  int multiplicacion = 1;
  if(number < 0){
    cout << "El numero es negativo. Intentelo de nuevo" << endl;
  }
  else if(number > 14){
    cout << "El numero es muy grande. Intentelo de nuevo" << endl;
  }
  else if(number >= 0 && number <= 14){
    while(h <= number){
      multiplicacion *= h;
      ++h;
    }
    cout << multiplicacion << endl;
  }

}

void exercise_5(int n, int k) {

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
  int sus = 1;
  if(a == 0){
    return b;
  }
  else if (b == 0){
    return a;
  }
  else{
    for(int i = 2; a >= i && b >= i; i++){
      while(a % i == 0 && b % i == 0){
        sus = sus * i;
        a = a/i;
        b = b/i;
      }
    } 
  }
  return sus;
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
  string binario;
  string result;
  if(decimal == 0){
    result = '0';
  }
  else if(decimal == 1){
    result = '1';
  }
  else{
    for(int i = 0; decimal != 1; ++i){
      binario = binario + to_string(decimal%2);
      decimal = decimal/2;
    }
    binario = binario + '1';
    for(int i = 1; binario.size() >= i; ++i){
      result = result + binario[binario.size()-i];
    }
  }
  cout << result << endl;
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  if(fin >= debut){
    if(debut > 0 && fin > 0){
      for(debut; debut <= fin; ++ debut){
        int j = 0;
        int debutando = debut;
        while(debutando != 0){
          if(debutando%3 == 0){
            debutando += 4;
            ++j;
          }
          else if(debutando%4 == 0){
            debutando / = 2;
            ++j;
          }
          else{
            -- debutando;
            ++j;
          }
        }
        cout << debut << "-->" << j << endl;
      }
      else{
        cout << "El numero debe ser positivo y mayor a cero" << endl;
      }
      else{
        cout << "El numero de fin no debe de ser menor al inicial" << endl;
      }
    }
  }
}