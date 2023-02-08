#include <iostream>



using namespace std;

int main()
{
    int breckenridge_current;
    int vail_current;
    int cmountain_current;
    int breckenridge_predict;
    int vail_predict;
    int cmountain_predict;
    int user_days;

    breckenridge_current = 25;
    vail_current = 28;
    cmountain_current = 40;

    cout << "How many days in the future would you like a prediction for? \n";
    cin >> user_days;
    breckenridge_predict = breckenridge_current + (user_days * 10) -(user_days * 5);
    vail_predict = vail_current + (user_days * 14)-(user_days * 2);
    cmountain_predict = cmountain_current + (user_days * 10)-(user_days * 3);
    cout << "Breckenridge will have " << breckenridge_predict << " inches, Vail will have " << vail_predict << " inches, and Copper Mountain will have " << cmountain_predict << " inches. \n";
}