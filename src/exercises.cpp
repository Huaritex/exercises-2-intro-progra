
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

void exercise_3(string cake) {
  int i = 0;
    while(i < 20){
        if(cake[i]=='1'){
            cout << "Om-nom-nom :P" << endl;
            i = i + 1;
        }else if(cake[i] == '0'){
            cout << "No cake :(" << endl;
            break;
        }else{
            i = i + 1;
        }
    }
}



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
 string espacio1;
    switch(n){
        case 1:
        espacio1 =  " "s;
        break;
        case 2:
        espacio1 =  "  "s;
        break;
        case 3:
        espacio1 =  "     "s;
        break;
        case 4:
        espacio1 =  "        "s;
        break;
        case 5:
        espacio1 =  "           "s;
        break;
        case 6:
        espacio1 =  "              "s;
        break;
        case 7:
        espacio1 =  "                 "s;
        break;
    }
    
    string _i;
    for(int i = 1; i<=k; ++i){
        int p = 20;
        int r = 0;
        while(r <= 14){
            if(espacio1.size() == p + (p*r) + r){
              espacio1= espacio1 + '\n';
              break;
            }
            ++r;
        }
        if(n==1 && espacio1.size()==1){
          espacio1 = espacio1 + to_string(i);
        }
        else if(to_string(i).size()==1 && espacio1[espacio1.size()-1]!='\n'){
            _i = "  " + to_string(i);
            espacio1 = espacio1 + _i;
        }
        else if(to_string(i).size()==1 && espacio1[espacio1.size()-1]=='\n'){
            _i = " " + to_string(i);
            espacio1 = espacio1 + _i;
        
        }
        else if(to_string(i).size()==2 && espacio1[espacio1.size()-1]!='\n'){
            _i = " " + to_string(i);
            espacio1 = espacio1 + _i;
        }
        else if(to_string(i).size()==2 && espacio1[espacio1.size()-1]=='\n'){
            espacio1 = espacio1 + to_string(i);
        }
        
    }
    cout << espacio1 << " " << endl;
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
    string n_string = to_string(n);
    bool esPalindromo = true;
    for(int i = 0; n_string.size() >= i; ++i){
        if(n_string[i] != n_string[n_string.size()-1-i]){
            esPalindromo = false;
        }
    }
    if(esPalindromo){
            return "Es palindrome";
        }else{
            return "No es palindrome";
        }

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
 int cociente = 0;
 int residuo = divident;
 int i = 0;
    if(divider!=0){
        for(i; residuo-divider >= 0; ++i){
            residuo = residuo - divider;
            
        }
    cociente = i;
    cout << cociente << " ";
    cout << residuo << endl;
    }
}


void exercise_17(int n) {
  int i = 0; 
    int  w = 2; 
    
    while (n > i) {
        bool esPrimo = true;
        for (int i = 2; i <= w/2; ++i) {
            if (w % i == 0) {
                esPrimo = false;
                break; 
            }
        }
        if (esPrimo) {
            cout << w << " "; 
            ++i; 
        }
        ++w; 
    }
  }

void exercise_18_19(int debut, int fin) {
if(fin>=debut){
    if(debut>0 && fin>0){

        for(debut; debut<=fin; ++debut){
            int i = 0;
            int debutando = debut;
            while(debutando != 0){
                if(debutando % 3 == 0){
                    debutando += 4;
                    ++i;
                    
                }else if(debutando%4==0){
                    debutando /=2;
                    ++i;
                    
                }else{
                    --debutando;
                    ++i;
                    
                }
            }
            cout << debut << "->" << i << endl;
        }
    }else{
            cout << "El numero debe de ser positivo y mayor a zero" << endl;
        }
    }else{
        cout << "El numero de fin no debe de ser menor al inicial" << endl;
    
    }
}