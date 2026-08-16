#include<bits/stdc++.h>
using namespace std;

void showDashboardTitle() {
    cout << "Student Dashboard!" << endl;
    return;
}

void showDashboard(){
    cout << "Student Portal Dashboard!" << endl;
    string name = "Vikash Maddheshiya"
    cout << "1. Profile:";
    cout << name << endl;
    
    int courses = 5;
    cout << "2. Courses:";
    cout << "Courses enrolled: " << courses << endl;
    
    cout << "3. Settings" << endl;
    
    bool active = true;
    cout << "Account status: " << (active ? "Active" : "Inactive") << endl;
    
    return;
}

int main(){
    showDashboardTitle();
    showDashboard();
    return 0;
}
