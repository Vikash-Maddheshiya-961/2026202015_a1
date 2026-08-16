#include<bits/stdc++.h>
using namespace std;

void login_user(){
    string username;
    cout << "Enter your name:";
    cin >> username;
    cout << "Welcome" << username <<"!" << endl;
    return;
}

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

    if (username == "student" && password == "1234") {
        cout << "Login successful.\n";
    } else {
        cout << "Invalid credentials.\n";
    }
    
    return;
}

void greet_user(string username){
    cout << "Hello " << username <<" You are Welcome!" << endl;
    cout << "Learn What you need!" << endl;
    return;
}
int main(){
    login_user();
    showLogin();
    
    string username;
    cin >> username;
    
    greet_user(username);
    
    return 0;
}
