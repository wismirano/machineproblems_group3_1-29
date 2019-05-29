#include <iostream>
#include <cstring>
using namespace std;

string studname[50];
int x;
int quiz1[50], quiz2[50], quiz3[50], quiz4[50];
int prescore [50], finscore[50];
int nbscore[50], swscore[50];
float bwscore[50];

void finalgrade(int quiz1, int quiz2, int quiz3, int quiz4, int prescore, int finscore, int nbscore, int swscore, float bwscore){
    
    double quiz1w[x], quiz2w[x], quiz3w[x] ,quiz4w[x];
    quiz1w[x] = quiz1 * 0.15;
    quiz2w[x] = quiz2 * 0.15;
    quiz3w[x] = quiz3 * 0.15;
    quiz4w[x] = quiz4 * 0.15;
    float quizaveragew= quiz1w[x] + quiz2w[x] + quiz3w[x] + quiz4w[x];
    cout << "Quiz weighted grade: " << quizaveragew << "%" << endl;
    
    double prescorew[x], finscorew[x];
    prescorew[x] = prescore * 0.20;
    finscorew[x] = finscore * 0.20;
    float majorexamw = prescorew[x] + finscorew[x];
    cout << "Major examination weighted grade: " << majorexamw << "%" << endl;
    
    double nbscorew[x], swscorew[x], bwscorew[x];
    nbscorew[x] = nbscore * 0.01;
    swscorew[x] = swscore * 0.02;
    bwscorew[x] = bwscore;
    float classstandw = nbscorew[x] + swscorew[x] + bwscorew[x];
    cout << "Class standing grade: " <<  classstandw << "%" << endl;
    
    float finalgradew = quizaveragew + majorexamw + classstandw;
    cout << "Final grade: " << finalgradew << "%" << endl;
    
    if(finalgradew >= 95.57){
        cout << "FINAL GRADE TRANSMUTATION: 1" <<endl << endl;
    }
    else if(finalgradew >= 91.12 && finalgradew <= 95.56)
        cout << "FINAL GRADE TRANSMUTATION: 1.25" <<endl << endl;
    
    else if(finalgradew >= 86.68 && finalgradew <= 91.11)
        cout << "FINAL GRADE TRANSMUTATION: 1.50" <<endl << endl;
    
    else if(finalgradew >= 82.23 && finalgradew <= 86.67)
        cout << "FINAL GRADE TRANSMUTATION: 1.75" <<endl << endl;
    
    else if(finalgradew >= 77.79 && finalgradew <= 82.22)
        cout << "FINAL GRADE TRANSMUTATION: 2.00" <<endl << endl;
    
    else if(finalgradew >= 73.34 && finalgradew <= 77.78)
        cout << "FINAL GRADE TRANSMUTATION: 2.25" <<endl << endl;
    
    else if(finalgradew >= 68.90 && finalgradew <= 73.33)
        cout << "FINAL GRADE TRANSMUTATION: 2.50" <<endl << endl;
    
    else if(finalgradew >= 64.45 && finalgradew <= 68.89)
        cout << "FINAL GRADE TRANSMUTATION: 2.75" <<endl << endl;
    else (finalgradew >= 60.00 && finalgradew <= 64.44);
    cout << "FINAL GRADE TRANSMUTATION: 3" <<endl << endl;
    
    
    
    
    return;
}


int main(){
    for(int x = 0; x < 50; x++){
        cout << "Student Name: ";
        getline(cin, studname[x]);
        cout << "Quiz 1 score: ";
        cin >> quiz1[x];
        cout << "Quiz 2 score: ";
        cin >> quiz2[x];
        cout << "Quiz 3 score: ";
        cin >> quiz3[x];
        cout << "Quiz 4 score: ";
        cin >> quiz4[x];
        cout << "Preliminary Exam score: ";
        cin >> prescore[x];
        cout << "Final Examination score: ";
        cin >> finscore[x];
        cout << "Notebook score: ";
        cin >> nbscore[x];
        cout << "Seatwork total score: ";
        cin >> swscore[x];
        cout << "Boardwork score (2% below): ";
        cin >> bwscore[x];
        finalgrade(quiz1[x], quiz2[x], quiz3[x], quiz4[x], prescore[x], finscore[x], nbscore[x], swscore[x], bwscore[x]);
        
        cin.ignore();
        
    }
    return 0;
}
