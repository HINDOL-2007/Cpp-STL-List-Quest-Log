#include <iostream>
#include <string>
#include <list>
using namespace std;

void display(list<string> &lst)
{
    int i = 0;
    list<string>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << i + 1 << ".  ";
        cout << *it << endl;
        i++;
    }
    cout << endl
         << endl;
}

int main()
{
    list<string> questLog;
    int qnum;
    string quest;
    cout << "Enter How many Quest You Want :- ";
    cin >> qnum;
    cin.ignore();
    for (int i = 0; i < qnum; i++)
    {
        cout << "Quest No. :- " << i + 1 << endl;
        cout << "Quest :- ";
        getline(cin, quest);
        questLog.push_back(quest);
    }
    cout << "Enter a High-Priority Quest :- ";
    getline(cin, quest);
    questLog.push_front(quest);
    list<string>::iterator it;
    cout << "Current Quest :- " << endl;
    display(questLog);

    questLog.sort();
    cout << "Alphabetize Current Quest :- " << endl;
    display(questLog);

    questLog.reverse();
    cout << "Alphabetize Current Quest (Reverse Order) :- " << endl;
    display(questLog);

    return 0;
}