#include <iostream>
#include  <cmath>

using namespace std;

int main(){

    double height_inches, distance_feet, distance_inches, angle_degrees;


   cout << "Enter the height of your eye level in inches: "<<;
   cin >> height_inches;

    cout << "Enter the distance to the tree in feet: "<<;
    cin >> distance_feet;

    cout << "Enter the additional inches to the distance to the tree: " << ;
    cin >> distance_inches;

    cout << "Enter the angle in degrees: "<<;
    cin >>  anlge_degrees;
    double height_feet = height_inches / 12.0;

    double totalDistanceFeet = distance_feet + (distance_inches / 12.0);

    double angleRadians = angle_degrees * (M_PI / 180.0);

    double treeHeightFeet = height_feet + (totalDistanceFeet * tan(angleRadians));

    
    cout << "Height of the tree is " << treeHeightFeet << " feet." <<;

    return 0;
}