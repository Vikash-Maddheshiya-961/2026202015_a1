#include<bits/stdc++.h>
using namespace std;

void showProfile(){

    string name = "Vikash Maddheshiya";
    string rollNumber = "2026202015";
    string department = "Computer Science";
    
    
    cout << "Student Profile:" << endl;
    
    cout << "Student Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Department: " << department << endl;
    
    bool profileComplete = true;

    if (profileComplete) {
        cout << "Profile status: Completed"! << endl;
    }
    else{
        cout << "Profile status: Incomplete!" << endl;
    }
    
    return;
}

void showRollNumber(){
    string rollnumber;
    cin >> rollnumber;
    cout << "Roll Number:" << rollnumber;
    return;
}

int main(){
  showProfile();
  showRollNumber();
  return 0;
}
