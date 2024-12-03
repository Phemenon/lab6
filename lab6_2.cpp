#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x){
    double arad = x*(M_PI/180);
    return arad;
}

double rad2deg(double x){
    double adeg = x*(180/M_PI);
    return adeg;
}

double findXComponent(double l1,double l2,double a1,double a2){
    double lenght1 = l1*cos(a1);
    double lenght2 = l2*cos(a2);
    double xcomp = lenght1 + lenght2;
    return xcomp; 
}

double findYComponent(double l1, double l2, double a1, double a2){
    double lenght1 = l1*sin(a1);
    double lenght2 = l2*sin(a2);
    double ycomp = lenght1+lenght2;
    return ycomp;
}

double pythagoras(double xcomp, double ycomp){
    double result_vec_length = sqrt((xcomp*xcomp)+(ycomp*ycomp));
    return result_vec_length;
}

int showResult(double result_vec_length, double result_vec_direction){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"<<"Length of the resultant vector = "<<result_vec_length<<"\n"<<"Direction of the resultant vector (deg) = "<<result_vec_direction<<"\n"<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 
    showResult(result_vec_length,result_vec_direction);
}
