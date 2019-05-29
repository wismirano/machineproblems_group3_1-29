#include <iostream>
#include <cmath>
using namespace  std;


double sidea, sideb, sidec, anglea, angleb, anglec;
const double pi = 3.141592653589793;
void interangl(double sidea, double sideb, double sidec){
    double anga, angb, angc;
    anga =((acos((pow(sideb, 2) + pow(sidec, 2) - pow(sidea, 2)) / (2 * sideb * sidec))) * (180)) / pi;
    cout << "The value of angle a is " << anga << endl;
    angb =((acos((pow(sidec, 2) + pow(sidea, 2) - pow(sideb, 2)) / (2 * sidec * sidea))) * (180)) / pi;
    cout << "The value of angle b is " << angb << endl;
    angc = 180 - anga - angb;
    cout << "The value of angle c is " << angc << endl;
    return;
}
void periarea(double sidea, double sideb, double sidec){
    double perimeter = sidea + sideb + sidec;
    cout << "The Perimeter of the triangle: " << perimeter << endl;
    double peri = perimeter / 2;
    double area = sqrt(peri * (peri - sidea) * (peri - sideb) * (peri - sidec));
    cout << "The Area of the triangle: " << area << endl;
    return;
    
}
void angtri(){
    double anga, angb, angc;
    anga =((acos((pow(sideb, 2) + pow(sidec, 2) - pow(sidea, 2)) / (2 * sideb * sidec))) * (180)) / pi;
    cout << "The value of angle a is " << anga << endl;
    angb =((acos((pow(sidec, 2) + pow(sidea, 2) - pow(sideb, 2)) / (2 * sidec * sidea))) * (180)) / pi;
    cout << "The value of angle b is " << angb << endl;
    angc = 180 - anga - angb;
    cout << "The value of angle c is " << angc << endl;
    if (anga < 90 && angb < 90 && angc < 90){
        cout << "Acute Triangle" << endl;
    }
    else if (anga == 90 || angb == 90 || angc == 90){
        cout << "Right Triangle" << endl;
    }
    else{
        cout << "Obtuse Triangle" << endl;
    }
}
void apoci(){
    
    double perimeter = sidea + sideb + sidec;
    double peri = perimeter / 2;
    double area = sqrt(peri * (peri - sidea) * (peri - sideb) * (peri - sidec));;
    double apo = (2 * area) / peri;
    cout << "Apothem value: " << apo << endl;
    double circumcenter = (sidea * sideb * sidec) / sqrt ((sidea * sideb +sidec) * (sidea + sideb - sidec ) * (sideb + sidec - sidea) * (sidea + sidec - sideb ));
    cout << "Circumcenter value: " << circumcenter;
}

int main(){
    
    
    cout << "Enter the measurements of the sides of a triangle: ";
    cin >> sidea;
    cin >> sideb;
    cin >> sidec;
    
    interangl(sidea, sideb, sidec);
    
    if(sidea == sideb && sideb == sidec){
        cout << "the triangle is Equilateral." << endl;
    }
    else if(sidea == sideb || sideb == sidec || sidec == sidea)
        cout << "The triangle is Scalene." << endl;
    else
        cout << "The triangle is Isosceles." << endl;
    
    periarea(sidea, sideb,sidec);
    angtri();
    apoci();
    
    
}
