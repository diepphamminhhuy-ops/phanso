#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <string>

using namespace std;



void rutgonphanso(int &a, int &b){

     int ucln = __gcd(abs(a), abs(b));
        a /= ucln;
        b /= ucln;
        if ( b < 0 ){

        a = -a;
        b = -b;
    
    }

}


bool isInteger(const string &s){

    if (s.empty()) return false;
    int start = (s[0] == '-' ? 1 : 0);
    for (int i = start; i < (int)s.size(); i++){
        if (!isdigit(s[i])) return false;
    }
    return true;
}

int main(){

    int a, b;
    string input;
    bool flag = true;


    while (flag){
    
    
    try {

        //tu so
        cout << "Nhap tu so: ";
        
        getline(cin, input);
        

        // xet tu so

        if (!isInteger(input)){
            
            throw runtime_error("Error: tu so phai la so nguyen ");
        }
        a = stoi(input);

        // mau so
        cout << "Nhap mau so: ";
        
        getline(cin, input);
       

        

        // xet mau so

        if (!isInteger(input)){
            
            throw runtime_error("Error: mau so phai la so nguyen");
        }
        b = stoi(input);

        if (b == 0 ){

            throw runtime_error("Error");

        }

        cout << "Phan so duoc nhap la: " << a << "/" << b << endl;
        rutgonphanso(a, b);

        // In ket qua
    
        cout << "Phan so sau khi rut gon la: " << a << "/" << b << endl;

        flag = false ; 
    } 
    catch (const exception &e){
        cout << e.what() << endl;
        
    }
    
}
    

    return 0;
}
