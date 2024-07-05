/* Codsoft Task 4 - To-Do List */

#include <iostream>
#include<vector>
#include<string>
using namespace std;

void menu() {
    cout<<"To-Do List menu"<<endl;
    cout<<"1. Add Task"<<endl;
    cout<<"2. View Tasks"<<endl;
    cout<<"3. Remove Task"<<endl;
    cout<<"4. Exit"<<endl;

}

int main() {
    menu();
    vector<string>tasks;
    int choice;
    string task;
    int taskNum;


    while (true) {
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1:
                cout<<"Enter the task to add: ";
                cin.ignore();
                getline(cin, task);
                tasks.push_back(task);
                cout<<"Task added!"<<endl;
                break;
            case 2:
                cout<<"Your Tasks:"<<endl;
                if (tasks.empty()) {
                    cout<<"No tasks available."<<endl;
                } else {
                    for (size_t i = 0; i < tasks.size(); ++i) {
                        cout<<i + 1<<". "<<tasks[i]<<endl;
                    }
                }
                break;
            case 3:
                cout<<"Enter task number to remove: ";
                cin>>taskNum;
                if (taskNum > 0 && taskNum <= tasks.size()) {
                    tasks.erase(tasks.begin() + taskNum - 1);
                    cout<<"Task removed!"<<endl;
                } else {
                    cout<<"Invalid task number."<<endl;
                }
                break;
            case 4:
                cout<<"Exit!"<<endl;
                return 0;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
                break;
        }
    }

    return 0;
}
