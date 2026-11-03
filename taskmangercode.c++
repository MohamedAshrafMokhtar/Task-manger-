#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

class CreatingNewTask;

class Menu {
public:
    Menu() {
        cout << "Welcome To Task Manager\nWhich Member Do You Want to Post A Task For?\n\nFor A General Task Press 1\n\nFor HR Members Press 2\n\nFor Developers Press 3\n\nFor Testers Press 4\n\n"; 

    }
   
    int choice;
};

class Task {
public:
    string Title, description, DeadLine, GenralTask, HR_Task;
    int priority;
    void Assigningtasks() {
        cout << "Add A Task: \n"; cin >> Title;
        cout << "Add A Description: \n"; cin.ignore(); getline(cin, description);
        cout << "What Is The Deadline? \n"; cin >> DeadLine;

    }
    void NotifyUser() {
        cout << "Notification: Task Is added successfully!" << endl;
    }
};
// adding priority to the task
class Priority : public Task {
public:
    void PRIORITY() {
        char check;
        cin.ignore();
        cout << "\n\n\nDo You Need To Add Priority To The Task?\n\nIf Yes Press K: ";
        cin >> check;
        if (check == 'K' || check == 'k') {
            cout << "Set Task Priority (1 - Low, 2 - Medium, 3 - High): \n\n";
            cin >> priority;
        }
    }
    void reTask() {
        char check;
        cin.ignore();
        cout << "\n\n\nDo You Need To Add New Task?\n\nIf Yes Press k: ";
        cin >> check;
        if (check == 'k' || check == 'k') {
            cout << "Add More Tasks!\nWhich Member Do You Want to Post A Task For?\n\nFor A General Task Press 1\n\nFor HR Members Press 2\n\nFor Developers Press 3\n\nFor Testers Press 4\n\n";
        }
    }
};

class Team_members : public Task {
public:
    string HR, Developer, Tester;

    void Developer_Assigningtasks() {
        cout << "Add A Task [Developer Section]: ";
        cin.ignore();
        getline(cin, Developer);
        cout << "\nAdd A Description: ";
        getline(cin, description);
        cout << "\nWhat Is The Deadline? ";
        cin >> DeadLine;
        Title = Developer;
    }
    void HR_Assigningtasks() {
        cout << "Add A Task [HR Section]: ";
        cin.ignore();
        getline(cin, HR);
        cout << "\nAdd A Description: ";
        getline(cin, description);
        cout << "\nWhat Is The Deadline? ";
        cin >> DeadLine;
        Title = HR;
    }
    void Testers_Assigningtasks() {
        cout << "\nAdd A Task [Testers Section]: ";
        cin.ignore();
        getline(cin, Tester);
        cout << "\nAdd A Description: ";
        getline(cin, description);
        cout << "\nWhat Is The Deadline? ";
        cin >> DeadLine;
        Title = Tester;
    }
};

class Storage_for_comment {
private:
    vector<string> comments;

public:
    void AddComment(const string& comment) {
        comments.push_back(comment);// add the comment to vectr strg
    }

    void Process() {
        string comment;
        while (true) {

            cout << "\nEnter your comment (or type 'exit' to quit): ";
            getline(cin, comment);

            if (comment == "exit") {
                break;
            }


        }

        cout << "Comments:" << endl;

        for (const string& comment : comments) {
            cout << "- " << comment << endl;
        }
    }
};
class Store_tasks {
private:
    vector<string> Tasks;
public:
    int xz = 0;
    void Store_task(const string& task) {
        Tasks.push_back(task);
    }
    void Task_save() {
        for (; xz < Tasks.size(); xz++) {
            cout << "Task Saved And Published Successfully" << endl;
        }
    }
};


int main() {
    Menu menu;   
    Task ta;
    Team_members TM;
    Priority CNT;
    Storage_for_comment SFC;
    Store_tasks store;
    
    
    void (Priority:: * reTaskPtr)() = &Priority::reTask;

    while (true) {
        cin >> menu.choice;
        switch (menu.choice) {
        case 1:
            ta.Assigningtasks();
            ta.NotifyUser();
            cout << "\n\n\nTask Details:\n\nTitle: " << ta.Title << "\nDescription: " << ta.description << "\nDeadLine: " << ta.DeadLine << endl;
            CNT.PRIORITY();
            if (CNT.priority == 1) {
                cout << "The Task Is Not That Important!";
            }
            else if (CNT.priority == 2) {
                cout << "Its A Medium Priority Task!";
            }
            if (CNT.priority == 3) {
                cout << "This Is An Important Task!";
            }
            SFC.Process();            
            store.Store_task(ta.Title);
            store.Task_save();
            cout << "Press Enter\n";
            (CNT.*reTaskPtr)();

            

            break;
            
        case 2:
            TM.HR_Assigningtasks();
            ta.NotifyUser();
            cout << "\n\n\nTask Details:\n\nTitle: " << TM.Title << "\nDescription: " << TM.description << "\nDeadLine: " << TM.DeadLine << endl;
            CNT.PRIORITY();
            if (CNT.priority == 1) {
                cout << "The Task Is Not That Important!";
            }
            else if (CNT.priority == 2) {
                cout << "Its A Medium Priority Task!";
            }
            if (CNT.priority == 3) {
                cout << "This Is An Important Task!";
            }
            SFC.Process();
            
            store.Store_task(ta.Title);
            store.Task_save();
            cout << "Press Enter\n";
            (CNT.*reTaskPtr)();
            break;
        case 3:
            TM.Developer_Assigningtasks();
            ta.NotifyUser();
            cout << "\n\n\nTask Details:\n\nTitle: " << TM.Title << "\nDescription: " << TM.description << "\nDeadLine: " << TM.DeadLine << endl;
            CNT.PRIORITY();
            if (CNT.priority == 1) {
                cout << "The Task Is Not That Important!";
            }
            else if (CNT.priority == 2) {
                cout << "Its A Medium Priority Task!";
            }
            if (CNT.priority == 3) {
                cout << "This Is An Important Task!";
            }
            SFC.Process();
            
            store.Store_task(ta.Title);
            store.Task_save();
            cout << "Press Enter\n";
            (CNT.*reTaskPtr)();
            break;
        case 4:
            TM.Testers_Assigningtasks();
            ta.NotifyUser();
            cout << "\n\n\nTask Details:\n\nTitle: " << TM.Title << "\nDescription: " << TM.description << "\nDeadLine: " << TM.DeadLine << endl;
            CNT.PRIORITY();
            if (CNT.priority == 1) {
                cout << "The Task Is Not That Important!";
            }
            else if (CNT.priority == 2) {
                cout << "Its A Medium Priority Task!";
            }
            if (CNT.priority == 3) {
                cout << "This Is An Important Task!";
            }
            SFC.Process();
           
            store.Store_task(ta.Title);
            store.Task_save();
            cout << "Press Enter\n";
            (CNT.*reTaskPtr)();
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
        }//Switch case 
        
        
        
        

    }//while


    return 0;

}