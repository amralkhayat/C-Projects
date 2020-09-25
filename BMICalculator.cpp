#include <iostream>
#include <cmath>
using namespace std;


int main ()
 {
    
float weight = 0.0;
float hight = 0.0 ;
float BMI = 0.0;
cout<<" Enter a weight in pounds \n";
cin>> weight;
cout<<"Enter height in inches \n ";
cin>> hight;
BMI = weight * 0.45359237 / pow(hight * 0.0254 ,2) ;
cout<< BMI<< endl;
// show diference Interpretation of the BMI 
if (BMI < 18.5){
 cout<<"BMI is Underweight\n" ; 
}else if (BMI < 25){
    cout<<"BMI is Normal\n";
}else if (BMI < 30){
    cout<<"BMI is Overweight\n";
}else {
    cout<<"BMI is Obese\n";  
}
    return 0;
}