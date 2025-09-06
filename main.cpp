#include <iostream>

using namespace std;

int main(){

    int a, b;

    while (true){
    cout << "Nhap tu so: ";
    cin >> a;
    cout << "Nhap mau so: ";
    cin >> b;


    cout << "Phan so duoc nhap la:" << a << "/" << b << endl;
    

    //xet dk

    /*try {
        if (b == 0){
            throw b;
        }
    } catch (int b){
        cout << "Error" << endl;
        continue;
    }*/


    if (b == 0 ){

        cout << "Error" << endl;
        continue;
    }
     if (a == 0){

        cout << "phan so duoc nhap la: " << a << "/" << b << endl;
        cout << "phan so sau khi rut la: " << a << endl;
        return 1;
    }

    if ( a < 0 && b < 0 || a > 0 && b < 0 ){

        a = -a;
        b = -b;
        break;
    }

    
    if (b != 0){
        break;
    }
}
    

    //Rut gon phan so
    int A, B;  // Tu va mau so sau khi rut gon
    

    if ( a > 0 && b > 0){

    for (int i = 1; i <= a && a <= b || i <= b && b <= a; i++){
        
            
            // c la uoc chung lon nhat
            int c = i;

            //Rut gon phan so
            if (a % c == 0 && b % c == 0){
                A = a / c;
                B = b / c;
            } else {
                A = a;
                B = b;
            }
        }
        
    }

    if ( a < 0 && b > 0){
        a = -a;
        for (int i = 1; i <= a && i <= b; i++){
        
            
            // c la uoc chung lon nhat
            int c = i;

            //Rut gon phan so
            if (a % c == 0 && b % c == 0){
                A = -(a / c);
                B = b / c;
            } else {
                A = -a;
                B = b;
            }
        }
    }
    
   
    
    // In ket qua
    
    
    cout << "Phan so sau khi rut gon la: " << A << "/" << B << endl;

    return 0;
}
