#include<iostream>
#include<string>

using namespace std;

class Pacient {
private:
    const int screening_no;
    const int random_no;
    string DOB;
    char gender;
public:
    static int nr_pacienti;

	//declarare constructor fara parametri
    Pacient();
    //declarare constructor prin parametri
    Pacient(int screening_no, int random_no, string DOB, char gender);

    void afisare();
};

int Pacient::nr_pacienti = 0;

// definire constructor prin parametri
Pacient::Pacient(int screening_no, int random_no, string DOB, char gender) : screening_no(screening_no), random_no(random_no) {
    this->DOB = DOB;
    this->gender = gender;

    nr_pacienti++;
}
 
//definire constructor fara parametri
Pacient::Pacient() : screening_no(++nr_pacienti), random_no(0) {
    this->DOB = "Unknown";
    this->gender = 'N';
}

void Pacient::afisare() {
    cout << endl << "Screening number: " << this->screening_no;
    cout << endl << "Randomization number: " << this->random_no;
    cout << endl << "Date of birth: " << this->DOB;
    cout << endl << "Gender: " << this->gender;
}

int main() {
    Pacient p1;
    p1.afisare();
    cout << endl << endl;
    Pacient p2;
    p2.afisare(); 
    cout << endl << endl;
    Pacient p3;
    p3.afisare();
    cout << endl << endl;

    Pacient p4(102, 5002, "1990-05-15", 'F');
    p4.afisare();
    cout << endl << endl;

    cout << endl << "Numar pacienti: " << Pacient::nr_pacienti;
    cout << endl << endl << endl << endl << endl << endl;
    return 0;
}