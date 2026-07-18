#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "ASMA";
    string studentID = "BC260216939";

    cout << "Name: " << name << endl;
    cout << "Student ID: " << studentID << endl;

    long long id = 260216939;

    int d1 = id / 1000000000;
    int d3 = (id / 10000000) % 10;
    int d5 = (id / 100000) % 10;
    int d7 = (id / 1000) % 10;
    int d9 = (id / 10) % 10;

    cout << "\nExtracted Digits: "
         << d1 << " " << d3 << " " << d5 << " " << d7 << " " << d9 << endl;

    int cleared = 0, warning = 0, detained = 0;

    cout << "\n------------------Attendance Report------------------\n";
    cout << "Course           Attended   Total   Percentage   Standing\n";

    int percent;

    percent = d1 * 10;
    cout << "Mathematics      " << d1 << "          10      " << percent << "%        ";
    if (percent >= 75) { cout << "CLEARED\n"; cleared++; }
    else if (percent >= 50) { cout << "WARNING\n"; warning++; }
    else { cout << "DETAINED\n"; detained++; }

    percent = d3 * 10;
    cout << "Physics          " << d3 << "          10      " << percent << "%        ";
    if (percent >= 75) { cout << "CLEARED\n"; cleared++; }
    else if (percent >= 50) { cout << "WARNING\n"; warning++; }
    else { cout << "DETAINED\n"; detained++; }

    percent = d5 * 10;
    cout << "English          " << d5 << "          10      " << percent << "%        ";
    if (percent >= 75) { cout << "CLEARED\n"; cleared++; }
    else if (percent >= 50) { cout << "WARNING\n"; warning++; }
    else { cout << "DETAINED\n"; detained++; }

    percent = d7 * 10;
    cout << "Programming      " << d7 << "          10      " << percent << "%        ";
    if (percent >= 75) { cout << "CLEARED\n"; cleared++; }
    else if (percent >= 50) { cout << "WARNING\n"; warning++; }
    else { cout << "DETAINED\n"; detained++; }

    percent = d9 * 10;
    cout << "Islamic Stud.    " << d9 << "          10      " << percent << "%        ";
    if (percent >= 75) { cout << "CLEARED\n"; cleared++; }
    else if (percent >= 50) { cout << "WARNING\n"; warning++; }
    else { cout << "DETAINED\n"; detained++; }

    cout << "\n----------------------Summary----------------------\n";
    cout << "CLEARED: " << cleared << endl;
    cout << "WARNING: " << warning << endl;
    cout << "DETAINED: " << detained << endl;

    return 0;
}
