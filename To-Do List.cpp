#include<iostream>
#include<string>
#include<conio.h>
#include<Windows.h>
using namespace std;
class List
{
	struct Task
	{
		string task;
		bool isComplete = false;
		Task* next;
	} *head;
public:
	List():head(nullptr)
	{}
	~List()
	{
		Task* curr = head;
		while (curr)
		{
			head = head->next;
			delete curr;
			curr = head;
		}
	}
	Task* Input()
	{
		Task* New = new Task;
		cout << "   Enter the Task   " << endl;
		getline(cin, New->task);
		New->next = nullptr;
		return New;
	}
	bool isEmpty()
	{
		return head == nullptr;
	}
	void Add()
	{
		if (isEmpty())
		{
			head = Input();
		}
		else
		{
			Task* curr = head;
			while (curr->next)
			{
				curr = curr->next;
			}
			Task* New = Input();
			curr->next = New;

		}
	}
	void isComplete()
	{
		cout << "Enter the name of task to be completed" << endl;
		string str;
		getline(cin, str);
		int count = 0;
		Task* curr = head;
		while (curr)
		{
			if (str == curr->task)
			{
				break;
			}
			curr = curr->next;
			count++;
		}
		if (curr)
		{
			curr->isComplete = true;
		}
		else
		{
			cout << "Wrong Input" << endl;
		}
	}
	void Remove()
	{
		cout << "Enter the name of task to be Removed" << endl;
		string str;
		if (cin.peek() == '\n')
		{
			cin.ignore();
		}
		getline(cin, str);
		Task* curr = head;
		Task* prev = nullptr;
		if (isEmpty())
		{
			cout << "Wrong Input" << endl;
		}
		else
		{
			while (curr)
			{
				if (str == curr->task)
				{
					break;
				}
				prev = curr;
				curr = curr->next;
			}
			if (curr && !prev)
			{
				head = curr->next;
				delete curr;
			}
			else if (curr && prev)
			{
				prev->next = curr->next;
				delete curr;
				curr = nullptr;
			}
			else
			{
				cout << "Wrong Input" << endl;
			}
		}
	}
	void Display()
	{
		Task* curr = head;
		int count = 1;
		while (curr)
		{
			cout << count << " " << curr->task << " ";
			if (curr->isComplete)
			{
				cout << "Completed" << endl;
			}
			else
			{
				cout << "Incompleted" << endl;
			}
			curr = curr->next;
			count++;
		}
	}
};
int main()
{
	List L;
	cout << "|||||To-Do List|||||" << endl;
	while (1)
	{
		system("cls");
		cout << " Press the operation" << endl;
		cout << "   1.Add the task   " << endl;
		cout << " 2.Complete the task" << endl;
		cout << "  3.Remove the task " << endl;
		cout << "  4.Show the tasks  " << endl;
		cout << "      5.Exit        " << endl;
		int chioce = _getch() - '0';
		switch (chioce)
		{
		case 1:
		    L.Add();
			break;
		case 2:
			L.isComplete();
			break;
		case 3:
			L.Remove();
			break;
		case 4:
			system("cls");
			L.Display();
			Sleep(1000);
			break;
		case 5:
			cout << "Exiting" << endl;
			exit(0);
			break;
		}
	}
}