#include <iostream>

using namespace std;

int main()
// BMI CALCULATOR
{
    float weight,height,bmi;

    cout << " Enter Weight in KG: ";
    cin >> weight ;

    cout << " Enter Height in Meter:  ";
    cin >> height ;


    bmi = weight   / ( height * height );               // To calculate bmi

    if(bmi < 18.5)
    {
        cout << " Under weight with BMI :- "<< bmi << endl;

    }
    else if (bmi>=18.5 && bmi<24.9 )
    {
        cout << " Normal weight with BMI :- "<< bmi << endl;
    }
    else {
        cout << " Over weight with BMI :- "<< bmi << endl;
    }

    return 0;
}
