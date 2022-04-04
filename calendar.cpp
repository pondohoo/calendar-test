#include <iostream>
#include <vector>
#include <string>
using namespace std;
// reminders program
string CreateReminder(string rmd, int hour, int month, int day, int year)
{
    if (hour > 12)
    {
        hour = hour - 12;
        return rmd + " at " + to_string(hour) + " pm on " + to_string(month) + "/" + to_string(day) + "/" + "200" + to_string(year);
    }
    return rmd + " at " + to_string(hour) + " am on " + to_string(month) + "/" + to_string(day) + "/" + "200" + to_string(year);
}

void PrintReminders(vector<string> &reminders)
{
    for (unsigned int i = 0; i < reminders.size(); ++i)
    {
        cout << reminders.at(i) << endl;
    }
}
int main()
{
    vector<string> reminders;
    string reminder = "Wash the dishes";
    while (reminder != "n/a")
    {
        reminders.push_back(CreateReminder(reminder, 17, 5, 5, 05));
        getline(cin, reminder);
    }
    PrintReminders(reminders);
    return 0; 
}
