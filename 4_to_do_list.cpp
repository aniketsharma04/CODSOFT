#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct Task                                         //created a struct to represent a task
{
    string description;
    bool completed;
};

Task getInputTask()                                 // Function to get user input for a new task
{
    Task task;
    cout << "Enter task description: ";
    cin.ignore();
    getline(cin, task.description);
    task.completed = false;
    return task;
}

void viewTasks(const vector<Task> &tasks)            // Function to display all tasks
{
    if (tasks.empty())
    {
        cout << "No tasks found!"<<endl;
        return;
    }

    cout << "\nTasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i)
    {
        cout << i + 1 << ". " << tasks[i].description << (tasks[i].completed ? " (completed)" : "") << endl;
    }
}

void markTaskCompleted(vector<Task> &tasks){          // Function to mark a task as completed
    if (tasks.empty())
    {
        cout << "No tasks found!"<<endl;
        return;
    }

    viewTasks(tasks);
    int taskNumber;
    cout << "Enter the number of the task to mark as completed: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > tasks.size())
    {
        cout << "Invalid task number!"<<endl;
        return;
    }
    tasks[taskNumber - 1].completed = true;
    cout << "Task marked as completed!"<<endl;
}

void removeTask(vector<Task> &tasks){                  //Function to remove a task from the list
    if (tasks.empty())
    {
        cout << "No tasks found!"<<endl;
        return;
    }

    viewTasks(tasks);
    int taskNumber;
    cout << "Enter the number of the task to remove: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > tasks.size())
    {
        cout << "Invalid task number!"<<endl;
        return;
    }

    tasks.erase(tasks.begin() + taskNumber - 1);
    cout << "Task removed successfully!"<<endl;
}

int main(){
    vector<Task> tasks;
    int tasks_size = tasks.size();

    int choice;
    do{                                                 //Displaying menu to the user
        cout << "\nTO-DO LIST"<<endl;
        cout << "1. Add Task"<<endl;
        cout << "2. View Tasks"<<endl;
        cout << "3. Mark Task as Completed"<<endl;
        cout << "4. Remove Task"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
        case 1:
            tasks.push_back(getInputTask());
            cout << "Task added successfully!"<<endl;
            break;
            
        case 2:
            viewTasks(tasks);
            break;
            
        case 3:
            markTaskCompleted(tasks);
            break;
            
        case 4:
            removeTask(tasks);
            break;
            
        case 5:
            cout << "Exiting..."<<endl;
            break;
            
        default:
            cout << "Invalid choice!"<<endl;
        }
    } while (choice != 5);
    return 0;
}
