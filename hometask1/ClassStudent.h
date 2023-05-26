#pragma once
#include<iostream>

using namespace std;

#pragma region task1
class Student
{
private:
    char Name[50];
    char Surname[50];
    char FatherName[50];
    char number[20];
    char dateOfBirth[20];
    char city[50];
    char country[50];
    char InstitutName[50];
    char InstitutCity[50];
    char InstitutCountry[50];
    char groupNumber[50];

public:
    void insStudent();
    void Information();


    char* getName();
    char* getSurname();
    char* getFatherName();
    char* getDateOfBirth();
    char* getPhoneNumber();
    char* getCity();
    char* getCountry();
    char* getInstitutName();
    char* getInstitutCity();
    char* getInstitutCountry();
    char* getGroup();


};
#pragma endregion


class Point {
private:
    int x;
    int y;
    int z;

public:
    void Ins();
    void Show();

    int getX();
    int getY();
    int getZ();

    void load();
    void save();

};
