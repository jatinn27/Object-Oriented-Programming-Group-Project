#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
#include <conio.h>
using namespace std;
class hostel
{
protected:
    string id, name, room_no, room_sec, phone_no, alloted_hostel, branch, yoj;
    float mess_bill, accomo_bill;
    static int count;

public:
    void about();
    void add_data();
    void delete_data();
    void modify_data();
    void search();
    void display();
    virtual void main_menu() = 0;
    static void number();
    void feedback();
};
class mess
{
protected:
    string item_code, item_name;
    float cost, bill;

public:
    void add_item();
    void delete_data();
    void modify_item();
    virtual void main_menu() = 0;
};
class software : public hostel, public mess
{
public:
    software()
    {
        system("cls");
        cout << "\n";
        cout << "\033[36m" << setw(120) << "*  * **** **** ***** **** *        *   * **** *   * **** ***   **** *   * **** *   * ***"
             << "\033[0m" << endl;
        Sleep(700);
        cout << "\033[36m" << setw(120) << "*  * *  * *      *   *    *        ** ** *  * **  * *  * *     *    ** ** *    **  *  * "
             << "\033[0m" << endl;
        Sleep(700); // windows.h
        cout << "\033[36m" << setw(120) << "**** *  * ****   *   ***  *        * * * **** * * * **** * *** ***  * * * ***  * * *  * "
             << "\033[0m" << endl;
        Sleep(700);
        cout << "\033[36m" << setw(120) << "*  * *  *    *   *   *    *        *   * *  * *  ** *  * * * * *    *   * *    *  **  * "
             << "\033[0m" << endl;
        Sleep(700);
        cout << "\033[36m" << setw(120) << "*  * **** ****   *   **** ****     *   * *  * *   * *  * *** * **** *   * **** *   *  * "
             << "\033[0m" << endl;
        Sleep(1200);
        cout << "\n\n\n";
        cout << "\033[36m" << setw(85) << "**** *   * **** *** **** *   *"
             << "\033[0m" << endl;
        Sleep(700);
        cout << "\033[36m" << setw(85) << "*    *   * *     *  *    ** **"
             << "\033[0m" << endl;
        Sleep(700);
        cout << "\033[36m" << setw(85) << "**** ***** ****  *  ***  * * *"
             << "\033[0m" << endl;
        Sleep(700);
        cout << "\033[36m" << setw(85) << "   *   *      *  *  *    *   *"
             << "\033[0m" << endl;
        Sleep(700);
        cout << "\033[36m" << setw(85) << "****   *   ****  *  **** *   *"
             << "\033[0m" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << ".";
            Sleep(100);
        }

        cout << endl;
        // system("cls");
        cout << setw(57) << "Press any key to continue " << endl;
        getch();
    }

    void mess_main_menu();
    void display_menu();
    void mess_billing();
    void main_menu();
    void bill();
    void admin();
    void student();
};
void software::main_menu()
{
    cout << setw(57) << "MAIN MENU" << endl;
    cout << setw(57) << "LOGIN AS : " << endl
         << setw(57) << "1 Admin " << endl
         << setw(57) << "2 Student" << endl
         << setw(57) << "ENTER YOUR CHOICE : ";
    int x;
    cin >> x;
    if (x == 1)
    {
        Sleep(400);
        system("cls");
        cout << "\n\n\n\n";
        cout.width(80);
        cout.fill(' ');
        cout << "LOADING";
        Sleep(1000);
        cout << ".";
        Sleep(1000);
        cout << ".";
        Sleep(1000);
        r
                cout
            << ".";
        Sleep(1000);
        system("cls");

        string pswd;
        cout << "\n\n\n\n";
        cout.width(100);
        cout.fill('*');
        cout << "  ENTER PASSWORD  ";
        cout.width(80);
        cout.fill('*');

        cout << "\n";
        cout.width(90);
        cout.fill(' ');
        cout << " : ";
        cin >> pswd;
        Sleep(400);
        system("cls");
        cout << "\n\n\n\n";
        cout.width(80);
        cout.fill(' ');
        cout << "LOADING";
        Sleep(1000);
        cout << ".";
        Sleep(1000);
        cout << ".";
        Sleep(1000);
        cout << ".";
        Sleep(1000);
        system("cls");

        if (pswd != "uiet")
        {
            cout << "invalid password ! " << endl;
        }
        else
        {
            admin();
        }
    }

    if (x == 2)
        student();
}
void software::admin()
{
    system("cls");
    cout << "ENTER YOUR CHOICE " << endl
         << "1.ADD NEW DATA " << endl
         << "2.DELETE STUDENT DATA " << endl
         << "3.MODIFY STUDENT DATA " << endl
         << "4.DISPLAY DATA OF ALL STUDENTS" << endl;
    cout << "5.SEARCH" << endl
         << "6.MESS REALTED OPTIONS " << endl
         << "7.COUNT TOTAL NUMBER OF STUDENTS" << endl
         << "8.EXIT" << endl;
    int choice;
    cin >> choice;
    try
    {
        if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7 || choice == 8)
        {
            switch (choice)
            {
            case 1:
                add_data();
                break;

            case 2:
                hostel::delete_data();
                break;

            case 3:
                modify_data();
                break;

            case 4:
                display();
                break;

            case 5:
                search();
                break;

            case 6:
                mess_main_menu();
                break;

            case 7:
                number();
                break;

            case 8:
                exit(0);
                break;
            }
        }

        else
        {
            throw(choice);
        }
    }
    catch (int choice)
    {
        cout << "Invalid choice..." << endl;
    }
    cout << "returning to admin main menu..." << endl;
    Sleep(2500);
    admin();
}
void software::student()
{
    system("cls");
    cout << "ENTER YOUR CHOICE : " << endl
         << "1.ABOUT UIET \n"
         << "2.VIEW YOUR PROFILE \n"
         << "3.DISPLAY MESS MENU \n"
         << "4.BACK \n"
         << "5.Register Complaint11 \n"
         << " 6.EXIT \n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        about();
        break;
    case 2:
        search();
        break;

    case 3:
        display_menu();
        break;
    case 4:
        student();
        break;
    case 5:
        feedback();
        break;
    case 6:
        exit(0);
        break;
    }
    while (1)
    {
        cout << "SELECT YOUR CHOICE : \n"
             << "1.BACK TO STUDENT MENU \n"
             << "2.BACK TO MAIN MENU \n";
        cin >> choice;
        if (choice == 1)
        {
            Sleep(1000);
            student();
        }
        if (choice == 2)
        {
            Sleep(1000);
            main_menu();
        }
        else
        {
            cout << "invalid input ! " << endl;
            Sleep(200);
        }
    }
}
void hostel::about()
{
}
void hostel::add_data()
{
    system("cls");
    cout << "add student data " << endl;
    cout << "enter unique id of student : ";
    string temp;
    cin >> temp;
    int total = 0;
    fstream file;
    file.open("student.txt", ios::in);
    file >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
    while (!file.eof())
    {
        if (temp == id)
        {
            total++;
            cout << "Data for this id number already exits ! " << endl;
        }
        file >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
    }
    file.close();
    if (total == 0)
    {
        id = temp;
        cout << "enter name of student : ";
        cin >> name;
        cout << "enter branch : ";
        cin >> branch;
        cout << "enter year of joining : ";
        cin >> yoj;
        cout << "enter alloted hostel : ";
        cin >> alloted_hostel;
        cout << "enter alloted room number : ";
        cin >> room_no;
        cout << "room section (a or b ) : ";
        cin >> room_sec;
        cout << "enter phone number of student : ";
        cin >> phone_no;
        cout << "pending mess bill : ";
        cin >> mess_bill;
        cout << "pending accomodation bill : ";
        cin >> accomo_bill;
        fstream file;
        file.open("student.txt", ios::app | ios::out);
        file << id << " " << name << " " << branch << " " << yoj << " " << alloted_hostel << " " << room_no << " " << room_sec << " " << phone_no << " " << mess_bill << " " << accomo_bill << "\n";
        cout << "student added succesfully " << endl;
        file.close();
    }
    cout << "enter Y to add another student data : ";
    char ch;
    cin >> ch;
    if (ch == 'Y')
        add_data();
}
void hostel::delete_data()
{
    system("cls");
    cout << "delete student data " << endl;
    string temp;
    int total = 0;
    cout << "enter unique id of student whose data has to be deleted : ";
    cin >> temp;
    fstream file1, file2;
    file1.open("student.txt", ios::in);
    if (!file1)
    {
        cout << "data not found !" << endl;
    }
    else
    {
        file2.open("updated.txt", ios::app | ios::out);
        file1 >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
        while (!file1.eof())
        {
            if (temp != id)
            {
                file2 << id << " " << name << " " << branch << " " << yoj << " " << alloted_hostel << " " << room_no << " " << room_sec << " " << phone_no << " " << mess_bill << " " << accomo_bill << "\n";
            }
            else
            {
                total++;
                cout << "data deleted successfully ! " << endl;
            }
            file1 >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
        }
        if (total == 0)
        {
            cout << "Data of entered id is not found ! " << endl;
        }
        file1.close();
        file2.close();
        remove("student.txt");
        rename("updated.txt", "student.txt");
        cout << "enter Y to delete data for another student and any key to return to main menu : ";
        char ch;
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
            delete_data();
    }
}
void hostel::modify_data()
{
    system("cls");
    cout << "Modify Student Data" << endl;
    int total = 0;
    string temp;
    cout << "enter unique id of student whose data has to be modified : ";
    cin >> temp;
    fstream file1, file2;
    file1.open("student.txt", ios::in);
    if (!file1)
    {
        cout << "data not found !" << endl;
    }
    else
    {
        file2.open("updated.txt", ios::app | ios::out);
        file1 >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
        while (!file1.eof())
        {
            if (temp != id)
            {
                file2 << id << " " << name << " " << branch << " " << yoj << " " << alloted_hostel << " " << room_no << " " << room_sec << " " << phone_no << " " << mess_bill << " " << accomo_bill << "\n";
            }
            else
            {
                total++;
                cout << "enter unique id of student : ";
                cin >> id;
                cout << "enter name of student : ";
                cin >> name;
                cout << "enter branch : ";
                cin >> branch;
                cout << "enter year of joining : ";
                cin >> yoj;
                cout << "enter alloted hostel : ";
                cin >> alloted_hostel;
                cout << "enter alloted room number : ";
                cin >> room_no;
                cout << "room section (a or b ) : ";
                cin >> room_sec;
                cout << "enter phone number of student : ";
                cin >> phone_no;
                cout << "pending mess bill : ";
                cin >> mess_bill;
                cout << "pending accomodation bill : ";
                cin >> accomo_bill;
                file2 << id << " " << name << " " << branch << " " << yoj << " " << alloted_hostel << " " << room_no << " " << room_sec << " " << phone_no << " " << mess_bill << " " << accomo_bill << "\n";
                cout << "data modified successfully ! " << endl;
            }
            file1 >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
        }
        if (total == 0)
        {
            cout << "sorry , no data found ! " << endl;
        }
        file2.close();
    }
    file1.close();
    remove("student.txt");
    rename("updated.txt", "student.txt");
    cout << "enter y to modify data of another student or press any key to return to main menu : ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        modify_data();
}
void hostel::search()
{
    system("cls");
    cout << "display student details" << endl;
    cout << "enter id of student whose details you want : " << endl;
    string temp;
    cin >> temp;
    int search = 0;
    fstream file;
    file.open("student.txt", ios::in);
    if (!file)
    {
        cout << "file not found !" << endl;
    }
    else
    {
        file >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
        while (!file.eof())
        {
            if (temp == id)
            {
                search++;
                cout << "student's id : " << id << endl;
                cout << "student's name : " << name << endl;
                cout << "branch : " << branch << endl;
                cout << "year of joining : " << yoj << endl;
                cout << "alloted hostel : " << alloted_hostel << endl;
                cout << "alloted room number : " << room_no << endl;
                cout << "room section : " << room_sec << endl;
                cout << "phone number : " << phone_no << endl;
                cout << "mess bill pending : " << mess_bill << endl;
                cout << "accomodation bill pending : " << accomo_bill << endl;
                break;
            }
            file >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
        }
        if (search == 0)
        {
            cout << "student record not found !" << endl;
        }
        file.close();
        cout << "press any key to continue : ";
        char c;
        cin >> c;
    }
}
void hostel::display()
{
    system("cls");
    cout << "display students data " << endl;
    fstream file;
    int s_no = 1;
    file.open("student.txt", ios::in);
    if (!file)
    {
        cout << "data not found !" << endl;
    }
    else
    {
        file >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
        cout << setw(4) << "S.No" << setw(10) << "Unique id" << setw(25) << "Name" << setw(6) << "branch" << setw(5) << "YOJ" << setw(7) << "hostel" << setw(7) << "Room no" << setw(9) << "room sec" << setw(13) << "Phone no." << setw(9) << "Mess bill" << setw(10) << "room bill" << endl;
        while (!file.eof())
        {
            cout << setw(4) << s_no << setw(10) << id << setw(25) << name << setw(6) << branch << setw(5) << yoj << setw(7) << alloted_hostel << setw(7) << room_no << setw(9) << room_sec << setw(13) << phone_no << setw(9) << mess_bill << setw(10) << accomo_bill << "\n";
            s_no++;
            file >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
        }
    }
    file.close();
    cout << "Press any key to continue : ";
    char a;
    cin >> a;
}
int hostel::count;
void hostel::number()
{
    system("cls");
    char ch;
    ifstream file("student.txt");
    count = 0;
    while (file.get(ch))
    {
        if (ch == '\n')
            count++;
    }
    cout << "Total students registered are : " << count << endl;
    Sleep(1000);
    cout << "Press any key to continue : ";
    char c;
    cin >> c;
}
void mess::add_item()
{
    system("cls");
    cout << "Add item in mess menu..." << endl;
    cout << "enter item code : ";
    cin >> item_code;
    cout << "enter item name : ";
    cin >> item_name;
    cout << "item cost : ";
    cin >> cost;
    fstream mess;
    mess.open("mess.txt", ios::app | ios::out);
    mess << item_code << " " << item_name << " " << cost << "\n";
    cout << "data entered successfully ! " << endl;
    mess.close();
}
void mess::delete_data()
{
    system("cls");
    cout << "deleting an item from mess..." << endl;
    cout << "enter item code you want to delete : ";
    string code;
    cin >> code;
    int total = 0;
    fstream file1, file2;
    file1.open("mess.txt", ios::in);
    if (!file1)
    {
        cout << "data not found !" << endl;
    }
    else
    {
        file2.open("temp.txt", ios::app | ios::out);
        file1 >> item_code >> item_name >> cost;
        while (!file1.eof())
        {
            if (code != item_code)
            {
                file2 << item_code << " " << item_name << " " << cost << endl;
            }
            else
            {
                total++;
                cout << "item deleted successfully ! " << endl;
            }
            file1 >> item_code >> item_name >> cost;
        }
        if (total == 0)
        {
            cout << "record not found ! " << endl;
        }
        file2.close();
        file1.close();
        remove("mess.txt");
        rename("temp.txt", "mess.txt");
    }
}
void mess::modify_item()
{
    system("cls");
    cout << "modify mess item..." << endl;
    cout << "enter code of item need to be modified : " << endl;
    string code;
    cin >> code;
    int total = 0;
    fstream file1, file2;
    file1.open("mess.txt", ios::in);
    if (!file1)
    {
        cout << "data not found ! " << endl;
    }
    else
    {
        file2.open("temp.txt", ios::app | ios::out);
        file1 >> item_code >> item_name >> cost;
        while (!file1.eof())
        {
            if (code != item_code)
            {
                file2 << item_code << " " << item_name << " " << cost << "\n";
            }
            else
            {
                total++;
                cout << "enter new item code : ";
                cin >> item_code;
                cout << "enter item name : ";
                cin >> item_name;
                cout << "cost : ";
                cin >> cost;
                file2 << item_code << " " << item_name << " " << cost << "\n";
                cout << "data modified successfully !" << endl;
            }
            file1 >> item_code >> item_name >> cost;
        }
        if (total == 0)
            cout << "data not found ! " << endl;
        file1.close();
        file2.close();
        remove("mess.txt");
        rename("temp.txt", "mess.txt");
    }
}
void software::display_menu()
{
    system("cls");
    cout << "DISPLAYING MESS MENU..." << endl;
    Sleep(1000);
    fstream file;
    file.open("mess.txt", ios::in);
    cout << setw(12) << "ITEM CODE" << setw(30) << "ITEM NAME" << setw(10) << "COST" << endl;
    file >> item_code >> item_name >> cost;
    while (!file.eof())
    {
        cout << setw(12) << item_code << setw(30) << item_name << setw(12) << cost << endl;
        file >> item_code >> item_name >> cost;
    }
    file.close();
    cout << "SELECT YOUR CHOICE : " << endl
         << "1.BUY AN ITEM" << endl
         << "2.DISPLAY MENU AGAIN " << endl
         << "ANY OTHER KEY TO GO BACK" << endl;
    string choice;
    cin >> choice;
    if (choice == "1")
        mess_billing();
    else if (choice == "2")
        display_menu();
}
void software::mess_main_menu()
{
    system("cls");
    cout << "WLECOME TO MESS MAIN MENU..." << endl;
    cout << "SELECT YOUR CHOICE : " << endl
         << "1. ADD ITEM "
         << "2.REMOVE ITEM " << endl
         << "3.MODIFY ITEM" << endl
         << "4.DISPLAY MENU " << endl
         << "5.MESS BILLING " << endl
         << "6.BILL PAYMENT" << endl
         << "7.EXIT" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        add_item();
        break;
    }
    case 2:
    {
        mess::delete_data();
        break;
    }
    case 3:
    {
        modify_item();
        break;
    }
    case 4:
    {
        display_menu();
        break;
    }
    case 5:
    {
        mess_billing();
        break;
    }
    case 7:
    {
        exit(0);
    }
    case 6:
    {
        bill();
        break;
    }
    default:
    {
        cout << "invalid input ! " << endl;
    }
    }
    cout << "returning to mess main menu..." << endl;
    Sleep(2000);
    mess_main_menu();
}
void software::mess_billing()
{
    string code;
    char ch = 'Y';

    fstream file;
    file.open("mess.txt", ios::in);
    if (!file)
    {
        cout << "file do not exist ! " << endl;
    }
    else
    {
        float sum = 0;
        while (ch == 'y' || ch == 'Y')
        {

            cout << "enter item code to buy : ";
            cin >> code;
            cout << "enter number of orders : ";
            int order;
            cin >> order;
            file >> item_code >> item_name >> cost;
            while (!file.eof())
            {
                if (code == item_code)
                {
                    sum = sum + cost * order;
                    cout << "sum = " << sum << endl;
                    break;
                }

                file >> item_code >> item_name >> cost;
            }
            cout << "enter y to buy another item or any other key for final bill : " << endl;
            cin >> ch;
        }
        file.close();
        cout << "FINAL BILL IS : " << sum << endl;
        cout << "SELECT YOUR CHOICE : " << endl
             << "1.PAY NOW" << endl
             << "2.PAY LATER" << endl;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            char confirm;
            while (1)
            {
                cout << "enter y or Y if bill is paid " << endl;
                cin >> confirm;
                if (confirm == 'y' || confirm == 'Y')
                {
                    cout << "THANKS FOR PAYING ! HAVE A NICE DAY !!!" << endl;
                    break;
                }
                else
                {
                    cout << "PLEASE PAY THE BILL = " << sum << endl;
                }
            }
        }
        if (choice == 2)
        {
            string temp;
            fstream file1, file2;
            file1.open("student.txt", ios::in);

            if (!file1)
            {
                cout << "file not exist !" << endl;
            }
            else
            {
                cout << "enter your unique id : ";
                cin >> temp;
                file2.open("tempo.txt", ios::app | ios::out);
                file1 >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
                while (!file1.eof())
                {
                    if (temp == id)
                    {
                        file2 << id << " " << name << " " << branch << " " << yoj << " " << alloted_hostel << " " << room_no << " " << room_sec << " " << phone_no << " ";
                        mess_bill = sum + mess_bill;
                        cout << "pending mess bill of  " << name << " is " << mess_bill << endl;
                        file2 << mess_bill << " " << accomo_bill << " "
                              << "\n";
                    }
                    else
                    {
                        file2 << id << " " << name << " " << branch << " " << yoj << " " << alloted_hostel << " " << room_no << " " << room_sec << " " << phone_no << " " << mess_bill << " " << accomo_bill << "\n";
                    }
                    file1 >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
                }
                file2.close();
            }
            file1.close();
            remove("student.txt");
            rename("tempo.txt", "student.txt");
        }
    }
    cout << "Press any key to continue..." << endl;
    char b;
    cin >> b;
}
void software::bill()
{
    system("cls");
    cout << " BILL PAYMENT .." << endl;
    string roll;
    cout << "enter your unique id : ";
    cin >> roll;
    int total = 0;
    fstream file1, file2;
    file1.open("student.txt", ios::in);
    file1.seekg(0);
    if (!file1)
    {
        cout << "File do not exist ! " << endl;
    }
    else
    {
        file2.open("tempo.txt", ios::app | ios::out);
        file1 >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
        while (!file1.eof())
        {
            if (roll != id)
                file2 << id << " " << name << " " << branch << " " << yoj << " " << alloted_hostel << " " << room_no << " " << room_sec << " " << phone_no << " " << mess_bill << " " << accomo_bill << "\n";
            else if (roll == id)
            {
                total++;
                cout << name << " ,your pending mess bill is " << mess_bill << endl;
                cout << " enter amount of money you want to paid : " << endl;
                float money;
                cin >> money;
                if (money > mess_bill)
                {
                    float left;
                    left = money - mess_bill;
                    mess_bill = 0;

                    cout << "pending mess bill of id number " << id << " is " << mess_bill << endl;
                    cout << "please take back Rs." << left << "from counter" << endl;
                    cout << "press any key to continue...";
                    char ch;
                    cin >> ch;
                    cout << "thank you !!!" << endl;
                }
                else
                {
                    mess_bill = mess_bill - money;
                    cout << "pending mess bill of id number " << id << " is " << mess_bill << endl;

                    cout << "press any key to continue...";
                    char ch;
                    cin >> ch;
                    cout << "thank you !!!" << endl;
                }
                file2 << id << " " << name << " " << branch << " " << yoj << " " << alloted_hostel << " " << room_no << " " << room_sec << " " << phone_no << " " << mess_bill << " " << accomo_bill << "\n";
            }
            file1 >> id >> name >> branch >> yoj >> alloted_hostel >> room_no >> room_sec >> phone_no >> mess_bill >> accomo_bill;
        }

        file2.close();
        file1.close();
        remove("student.txt");
        rename("tempo.txt", "student.txt");
    }

    cout << "returning to mess main menu..." << endl;
    Sleep(1500);
    system("cls");
}
void hostel::feedback()
{
    cout << "Enter your roll number : ";
    string roll;
    cin >> roll;
    char complaint;
    int letter = 0;
    fstream file;
    file.open("feedback.txt", ios::app | ios::out);
    file << roll << "\n";
    cout << "enter your feedback (in 30 words): " << endl;
    cin.get(complaint);
    while (complaint != '\n' || letter < 30)
    {
        file.put(complaint);
        letter++;
        cin.get(complaint);
    }
    file << "\n";

    file.close();
}

int main()
{
    software display;
    software *ptr;
    ptr = &display;
    ptr->main_menu();
    return 0;
}