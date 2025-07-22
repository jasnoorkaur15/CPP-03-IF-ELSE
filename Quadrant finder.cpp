//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
using namespace std;
int x,y;

int main() {
    cout<< "Value for x: ";
    cin >> x;
    cout<< "Value for y: ";
    cin >> y;
    
    
    if (x>0 && y>0){
        cout<< "1st Quadrant" << "\n";
    }
    else if (x>0 && y<0){
        cout<< "4th Quadrant" << "\n";
    }
    else if (x<0 && y<0){
        cout<< "3rg Quadrant" << "\n";
    }
    else if (x<0 && y>0){
        cout<< "2nd Quadrant" << "\n";
    }
     else if (x==0 && y==0){
        cout<< "Origin" << "\n";
    }    
    else{
        cout<< "Invalid input! "<< "\n";
    }
    
    
    return 0;
}
