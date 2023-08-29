#include<iostream>
#include<conio.h>

using namespace std;

int i=0;

struct student
{
    int id;
    float marks,percentage;
    string name,grade;
}
s[100];

void insert()
{
    system("cls");
    cout<<"\n\n\t\t\t ***Insert record***";
    cout<<"\n\n Enter Student Id: ";
    cin>>s[i].id;
    cout<<"\n\n Enter Student Name: ";
    cin>>s[i].name;
    cout<<"\n\n Enter Student Marks: ";
    cin>>s[i].marks;
    s[i].percentage = s[i].marks/100*100;
    if(s[i].percentage>=95)
        s[i].grade = "A+";
    else if(s[i].percentage>=85)
        s[i].grade = "A";
    else if(s[i].percentage>=75)
        s[i].grade = "B+";
    else if(s[i].percentage>=65)
        s[i].grade = "B";
    else if(s[i].percentage>=55)
        s[i].grade = "c";
    else if(s[i].percentage>=45)
        s[i].grade = "D";
    else if(s[i].percentage>=33)
        s[i].grade = "E";
    else
        s[i].grade ="F";
    i++;
    cout<<"\n\n ***Insert record successfully***";
}

void search()
{
    system("cls");
    cout<<"\n\n\t\t\t***Search Record***";
    if(i==0)
        cout<<"\n\n***No Record Found***";
    else
    {
        int id,found=0;
        cout<<"\n\n Enter  Student Id";
        cin>>id;
        for(int a=0;a<i;a++){
            if(id == s[a].id){
                cout<<"\n\n Name: "<<s[a].name;
                cout<<"\n\n Marks: "<<s[a].marks;
                cout<<"\n\n Percentage: "<<s[a].percentage<<"%";
                cout<<"\n\n Grade: "<<s[a].grade;
                found++;
            }
        }
        if(found == 0)
            cout<<"\n\n ***Student Id Not Found***";
    }
}

void update()
{
    system("cls");
    cout<<"\n\n\t\t\t***Update Record***";
    if(i==0)
        cout<<"\n\n***No Record Found***";
    else
    {
        int id,found=0;
        cout<<"\n\n Enter  Student Id";
        cin>>id;
        for(int a=0;a<i;a++){
            if(id == s[a].id){
                cout<<"\n\n Enter Student Name: ";
                cin>>s[a].name;
                cout<<"\n\n Enter Student Marks: ";
                cin>>s[i].marks;
                s[a].percentage = s[a].marks/100*100;
                if(s[a].percentage>=95)
                    s[a].grade = "A+";
                else if(s[a].percentage>=85)
                    s[a].grade = "A";
                else if(s[a].percentage>=75)
                    s[a].grade = "B+";
                else if(s[a].percentage>=65)
                    s[a].grade = "B";
                else if(s[a].percentage>=55)
                    s[a].grade = "c";
                else if(s[a].percentage>=45)
                    s[a].grade = "D";
                else if(s[a].percentage>=33)
                    s[a].grade = "E";
                else
                    s[a].grade ="F";
                cout<<"\n\n***Update record successfully***";
                found++;
            }
        }
        if(found == 0)
            cout<<"\n\n ***Student Id Not Found***";
    }
}

void del()
{
    system("cls");
    cout<<"\n\n\t\t\t***Delete Record***";
    if(i==0)
        cout<<"\n\n***No Record Found***";
    else
    {
        int id,found=0;
        cout<<"\n\n Enter  Student Id";
        cin>>id;
        for(int a=0;a<i;a++){
            if(id==s[a].id){
                for(int m=a;m<i-1;m++){
                    s[m].id = s[m+1].id;
                    s[m].name = s[m+1].name;
                    s[m].marks = s[m+1].marks;
                    s[m].percentage = s[m+1].percentage;
                    s[m].grade = s[m+1].grade;
                }
                cout<<"\n\n ***Delete record successfully***";
                found++;
                i--;
                break;
            }
        }
        if(found == 0)
            cout<<"\n\n ***Student Id Not Found***";
    }
}

void show()
{
    system("cls");
    cout<<"\n\n\t\t\t***Show All Record***";
    if(i==0)
        cout<<"\n\n***No Record Found***";
    else
    {
        for(int a=0;a<i;a++){
            cout<<"\n\n Student Id: "<<s[a].id;
            cout<<"\n\n Name: "<<s[a].name;
            cout<<"\n\n Marks: "<<s[a].marks;
            cout<<"\n\n Percentage: "<<s[a].percentage<<"%";
            cout<<"\n\n Grade: "<<s[a].grade;
            cout<<"\n\n-----------------------------------------------";
        }
    }
}

main(){
    p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t\t ***STUDENT MANAGEMENT SYSTEM***";
    cout<<"\n\n 1. Insert record";
    cout<<"\n\n 2. Search record";
    cout<<"\n\n 3. Update record";
    cout<<"\n\n 4. Delete record";
    cout<<"\n\n 5. Show record";
    cout<<"\n\n 6. Exit";
    cout<<"\n\n Enter Your Choice->";
    cin>>choice;
    switch(choice){

    case 1:
        insert();
        break;
    case 2:
        search();
        break;
    case 3:
        update();
        break;
    case 4:
        del();
        break;
    case 5:
        show();
        break;
    case 6:
        exit(0);
    default:
        cout<<"\n\n***Invalid choice***";
    }
    getch();
    goto p;


}
