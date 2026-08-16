#include<bits/stdc++.h>
using namespace std;

void showLogin() {
    string username;
    string password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username.empty() || password.empty()) {
        cout << "Username and password are required." << endl;
        return;
    }

    if (username == "Vikash Maddheshiya" && password == "2026202015") {
        cout << "Login successful." << endl;
    } 
    else {
        cout << "Invalid credentials." << endl;
    }
    
    return;
}

int main(){
    showLogin();
    return 0;
}
