#include<bits/stdc++.h>
using namespace std;

void showSettings(){
    cout << "===== Settings =====" << endl;
    
    bool notifications = true;

    cout << "Notifications: " << (notifications ? "Enabled" : "Disabled") << endl;
    
    bool darkMode = false;

    cout << "Dark mode: " << (darkMode ? "Enabled" : "Disabled") << endl;
    return ;
}

int main(){
    showSettings();
    return 0;
}
