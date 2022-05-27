#include <iostream>
#include "SpeechManager.h"

using namespace std;

int main() {
    SpeechManager speechManager;
    int choice = 0;

    for (auto it = speechManager.m_Speaker.begin(); it != speechManager.m_Speaker.end(); it ++) {
        cout << it->first << " " << it->second.m_Name << " " << it->second.m_Score[0] << endl;
    }

    while (true) {
        SpeechManager::show_Menu();

        cout << "ÇëÊäÈëÄúµÄÑ¡Ôñ£º" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                speechManager.start();
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                SpeechManager::exitSystem();
                break;
            default:
                system("cls");
                break;
        }
    }
    system("pause");

    return 0;
}
