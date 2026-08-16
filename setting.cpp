#include<bits/stdc++.h>
using namespace std;

void showSettings(){
    cout << "===== Settings =====" << endl;
    
    bool notifications = true;

    cout << "Notifications: " << (notifications ? "Enabled" : "Disabled") << endl;
    
    return ;
}

int main(){
    showSettings();
    return 0;
}
