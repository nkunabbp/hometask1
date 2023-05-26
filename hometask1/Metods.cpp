#include"ClassStudent.h"
#pragma region task1

void Student::insStudent() {
	cout << "Enter Name: ";
	cin >> Name;
	cout << "Enter Surname: ";
	cin >> Surname;
	cout << "Enter Father's name: ";
	cin >> FatherName;
	cout << "Enter Birthday: ";
	cin >> dateOfBirth;
	cout << "Enter Number: ";
	cin >> number;
	cout << "Enter city name: ";
	cin >> city;
	cout << "Enter country: ";
	cin >> country;
	cout << "Enter Institut name: ";
	cin >> InstitutName;
	cout << "Enter Institut city: ";
	cin >> InstitutCity;
	cout << "Enter Institut coutry: ";
	cin >> InstitutCountry;
	cout << "Enter Group: ";
	cin >> groupNumber;

}

void Student::Information() {
	cout << "NSFN: " << Name << " " << Surname << " " << FatherName << endl;
	cout << "Birthday: " << dateOfBirth << endl;
	cout << "Phone number: " << number << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "University: " << InstitutName << endl;
	cout << "City(Univesity's): " << InstitutCity << endl;
	cout << "Country(Univesity's): " << InstitutCountry << endl;
	cout << "Group number: " << groupNumber << endl;
}

char* Student::getName() {
	return Name;
}

char* Student::getSurname() {
	return Surname;
}

char* Student::getFatherName() {
	return FatherName;
}


char* Student::getDateOfBirth() {
	return dateOfBirth;
}


char* Student::getPhoneNumber() {
	return number;
}


char* Student::getCity() {
	return city;
}



char* Student::getCountry() {
	return country;
}


char* Student::getInstitutName() {
	return InstitutName;
}


char* Student::getInstitutCity() {
	return InstitutCity;
}


char* Student::getInstitutCountry() {
	return InstitutCountry;
}

char* Student::getGroup() {
	return groupNumber;
}

#pragma endregion

FILE* file;

void Point::Ins() {
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;
}


void Point::Show() {
	cout << "Cordinates ( X = " << x << ", Y = " << y << ", Z = " << z << ")" << endl;
}


int Point::getX() {
	return x;
}

int Point::getY() {
	return y;
}

int Point::getZ() {
	return z;
}


void Point::save() {
	fopen_s(&file, "point.txt", "wb");
	fwrite(&x, sizeof(int), 1, file);
	fwrite(&y, sizeof(int), 1, file);
	fwrite(&z, sizeof(int), 1, file);
	fclose(file);	fclose(file);
}

void Point::load() {
	fopen_s(&file, "point.txt", "rb");
	fread(&x, sizeof(int), 1, file);
	fread(&y, sizeof(int), 1, file);
	fread(&z, sizeof(int), 1, file);
	fclose(file);
}