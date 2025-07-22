//Jasnoor Kaur
//24070123049

#include <iostream>
using namespace std;
int a,A,B,C;

int main() {
    cout<< "Marks of subject 1 : ";
    cin >> A;
    cout<< "Marks of subject 2 : ";
    cin >> B;
    cout<< "Marks of subject 3 : ";
    cin >> C;
cout<< "Marks of subject 4 : ";
    cin >> D;
cout<< "Marks of subject 5 : ";
    cin >> E;
    
    a = ((A+B+C+D+E)/5)*100;
    
    if (a>90){
        cout<< "Grade A+" << "\n";
    }
    else if (a>80 && a<90){
        cout<< "Grade B" << "\n";
    }
    else if (a>70 && a<80){
        cout<< "Grade C" << "\n";
    }
    else if (a>60 && a<70){
        cout<< "Grade D" << "\n";
    }
    else if (a>50 && a<60){
        cout<< "Grade E" << "\n";
    }
    else{
        cout<< "Fail"<< "\n";
    }
    
    
    return 0;
