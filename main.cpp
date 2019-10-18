#include <iostream>
#include <windows.h>

using namespace std;
void printerF(int start , int star){
 int check = 0;
        cout << "\t\t\t\t\t\t\t" ;
    for(int k = 0 ; k < 60 ; k++){
        cout << " ";
        if(k == start){
            while(check < star){
                cout << "*";
                cout << " ";
                check++;
            }
        }
    }
}

void printer(int start[] , int stop[] , int elements)
{
    cout << "\t\t\t";
    int check = 0;
    for(int i = 0 ; i < 150 ; i++){
     cout << " ";
     if(i >= start[check] && i < stop[check]){
        cout << "*";
     }else if(i > stop[check]){
       check++;
     }

     if(check > elements)break;

    }
}

int main()
{
    for(int i = 0 ; i < 100000 ; i++){
        cout << "01";
        //Sleep(1);
    }

    Sleep(100);
    Sleep(100); cout << endl;
    Sleep(100);Sleep(100); cout << endl;
    system("cls");
    cout << endl << endl << endl;
    system("COLOR 0A");
    //wel-
    int start1[5] = {20 , 24 , 28 , 32 , 42}; int stop1[5] = {22 , 26 , 30 , 40 , 44};
    printer(start1 , stop1 , 5);
    cout << endl;Sleep(100);
    int start2[5] = {20 , 24 , 28 , 32 , 42}; int stop2[5] = {22 , 26 , 30 , 40 , 44};
    printer(start2 , stop2 , 5);
    cout << endl;Sleep(100);
    int start3[5] = {20 , 24 , 28 , 32 , 48}; int stop3[5] = {22 , 26 , 30 , 34 , 50};
    printer(start3 , stop3 , 5);
    cout << endl;Sleep(100);
    int start4[5] = {20 , 24 , 28 , 32 , 48}; int stop4[5] = {22 , 26 , 30 , 34 , 50};
    printer(start4 , stop4 , 5);
    cout << endl;Sleep(100);
    int start5[6] = {20 , 24 , 28 , 32 , 42 , 50}; int stop5[6] = {22 , 26 , 30 , 40 , 44 , 55};
    printer(start5 , stop5 , 6);
    cout << endl;Sleep(100);
    int start6[6] = {20 , 24 , 28 , 32 , 42 , 50}; int stop6[6] = {22 , 26 , 30 , 40 , 44 , 55};
    printer(start6 , stop6 , 6);
    cout << endl;Sleep(100);
    int start7[5] = {20 , 24 , 28 , 32 , 48}; int stop7[5] = {22 , 26 , 30 , 34 , 50};
    printer(start7 , stop7 , 5);
    cout << endl;Sleep(100);
    int start8[5] = {20 , 24 , 28 , 32 , 48}; int stop8[5] = {22 , 26 , 30 , 34 , 50};
    printer(start8 , stop8 , 5);
    cout << endl;Sleep(100);
    int start9[5] = {20 , 24 , 28 , 32 , 42}; int stop9[5] = {24 , 28 , 30 , 40 , 49};
    printer(start9 , stop9 , 5);
    cout << endl;Sleep(100);
    int start10[5] = {20 , 24 , 28 , 32 , 42}; int stop10[5] = {24 , 28 , 30 , 40 , 49};
    printer(start10 , stop10 , 5);
    cout << endl << endl;Sleep(100);
    //come
    int start11[4] = {15 , 25 , 35 , 47}; int stop11[4] = {23 , 33 , 45 , 55};
    printer(start11 , stop11 , 4);
    cout << endl;Sleep(100);
    int start12[4] = {15 , 25 , 35 , 47}; int stop12[4] = {23 , 33 , 45 , 55};
    printer(start12 , stop12 , 4);
    cout << endl;Sleep(100);
    int start13[7] = {15 , 31 , 41 , 45 , 51 , 57 , 61}; int stop13[7] = {17 , 33 , 43 , 47 , 53 , 59 , 63};
    printer(start13 , stop13 , 7);
    cout << endl;Sleep(100);
    int start14[7] = {15 , 31 , 41 , 45 , 51 , 57 , 61}; int stop14[7] = {17 , 33 , 43 , 47 , 53 , 59 , 63};
    printer(start14 , stop14 , 7);
    cout << endl;Sleep(100);
    int start15[7] = {15 , 31 , 41 , 45 , 51 , 57 , 61}; int stop15[7] = {17 , 33 , 43 , 47 , 53 , 59 , 69};
    printer(start15 , stop15 , 7);
    cout << endl;Sleep(100);
    int start16[7] = {15 , 31 , 41 , 45 , 51 , 57 , 61}; int stop16[7] = {17 , 33 , 43 , 47 , 53 , 59 , 69};
    printer(start16 , stop16 , 7);
    cout << endl;Sleep(100);
    int start17[7] = {15 , 31 , 41 , 45 , 51 , 57 , 61}; int stop17[7] = {17 , 33 , 43 , 47 , 53 , 59 , 63};
    printer(start17 , stop17 , 7);
    cout << endl;Sleep(100);
    int start18[7] = {15 , 31 , 41 , 45 , 51 , 57 , 61}; int stop18[7] = {17 , 33 , 43 , 47 , 53 , 59 , 63};
    printer(start18 , stop18 , 7);
    cout << endl;Sleep(100);
    int start19[6] = {15 , 25 , 35 , 41 , 47 , 51 }; int stop19[6] = {23 , 33 , 37 , 43 , 49 , 59 };
    printer(start19 , stop19 , 6);
    cout << endl;Sleep(100);
    int start20[6] = {15 , 25 , 35 , 41 , 47 , 51 }; int stop20[6] = {23 , 33 , 37 , 43 , 49 , 59 };
    printer(start20 , stop20 , 6);
    cout << endl << endl;Sleep(100);
    system("COLOR 0F");
    //baby
    int start21[5] = {20 , 40 , 50 , 70 , 92}; int stop21[5] = {26 , 48 , 56 , 72 , 94};
    printer(start21 , stop21 , 5);
    cout << endl;Sleep(100);
    int start22[5] = {20 , 40 , 50 , 70 , 92}; int stop22[5] = {26 , 48 , 56 , 72 , 94};
    printer(start22 , stop22 , 5);
    cout << endl;Sleep(100);
    int start23[8] = {20 , 26 , 42 , 52 , 56 , 62 , 78 , 100}; int stop23[8] = {22 , 28 , 44 , 54 , 58 , 64 , 80 , 102};
    printer(start23 , stop23 , 8);
    cout << endl;Sleep(100);
    int start24[8] = {20 , 26 , 42 , 52 , 56 , 62 , 78 , 100}; int stop24[8] = {22 , 28 , 44 , 54 , 58 , 64 , 80 , 102};
    printer(start24 , stop24 , 8);
    cout << endl;Sleep(100);
    int start25[4] = {20 , 36 , 46 , 62}; int stop25[4] = {30 , 44 , 56 , 76};
    printer(start25 , stop25 , 4);
    cout << endl;Sleep(100);
    int start26[4] = {20 , 36 , 46 , 62}; int stop26[4] = {30 , 44 , 56 , 76};
    printer(start26 , stop26 , 4);
    cout << endl;Sleep(100);
    int start27[7] = {20 , 34 , 42 , 52 , 56 , 70 , 90}; int stop27[7] = {22 , 36 , 44 , 54 , 58 , 72 , 92};
    printer(start27 , stop27 , 7);
    cout << endl;Sleep(100);
    int start28[7] = {20 , 34 , 42 , 52 , 56 , 70 , 90}; int stop28[7] = {22 , 36 , 44 , 54 , 58 , 72 , 92};
    printer(start28 , stop28 , 7);
    cout << endl;Sleep(100);
    int start29[5] = {20 , 36 , 46 , 50 , 78}; int stop29[5] = {30 , 38 , 48 , 60 , 80};
    printer(start29 , stop29 , 5);
    cout << endl;Sleep(100);
    int start30[5] = {20 , 36 , 46 , 50 , 78}; int stop30[5] = {30 , 38 , 48 , 60 , 80};
    printer(start30 , stop30 , 5);
    cout << endl << endl;Sleep(100);
    system("COLOR 0B");
    //scott
    int start31[5] = {10 , 20 , 30 , 40 , 52}; int stop31[5] = {18 , 28 , 38 , 50 , 62};
    printer(start31 , stop31 , 5);
    cout << endl;Sleep(100);
    int start32[5] = {10 , 20 , 30 , 40 , 52}; int stop32[5] = {18 , 28 , 38 , 50 , 62};
    printer(start32 , stop32 , 5);
    cout << endl;Sleep(100);
    int start33[6] = {10 , 26 , 42 , 52 , 64 , 84}; int stop33[6] = {12 , 28 , 44 , 54 , 66 , 86};
    printer(start33 , stop33 , 6);
    cout << endl;Sleep(100);
    int start34[6] = {10 , 26 , 42 , 52 , 64 , 84}; int stop34[6] = {12 , 28 , 44 , 54 , 66 , 86};
    printer(start34 , stop34 , 6);
    cout << endl;Sleep(100);
    int start35[6] = {10 , 20 , 36 , 46 , 58 , 78}; int stop35[6] = {18 , 22 , 38 , 48 , 60 , 80};
    printer(start35 , stop35 , 6);
    cout << endl;Sleep(100);
    int start36[6] = {10 , 20 , 36 , 46 , 58 , 78}; int stop36[6] = {18 , 22 , 38 , 48 , 60 , 80};
    printer(start36 , stop36 , 6);
    cout << endl;Sleep(100);
    int start37[6] = {22 , 26 , 42 , 52 , 64 , 84}; int stop37[6] = {24 , 28 , 44 , 54 , 66 , 86};
    printer(start37 , stop37 , 6);
    cout << endl;Sleep(100);
    int start38[6] = {22 , 26 , 42 , 52 , 64 , 84}; int stop38[6] = {24 , 28 , 44 , 54 , 66 , 86};
    printer(start38 , stop38 , 6);
    cout << endl;Sleep(100);
    int start39[5] = {10 , 20 , 30 , 48 , 68}; int stop39[5] = {18 , 28 , 38 , 50 , 70};
    printer(start39 , stop39 , 5);
    cout << endl;Sleep(100);
    int start40[5] = {10 , 20 , 30 , 48 , 68}; int stop40[5] = {18 , 28 , 38 , 50 , 70};
    printer(start40 , stop40 , 5);
    cout << endl << endl; system("COLOR 0E");Sleep(1000);system("COLOR 0C");Sleep(1000);system("COLOR 0A");

    system("COLOR 0D");Sleep(1000);system("COLOR 02");Sleep(1000);system("COLOR 03");Sleep(1000);system("COLOR 05");Sleep(1000);system("COLOR 09");Sleep(1000);system("COLOR 08");Sleep(1000);system("COLOR 04");Sleep(1000);system("COLOR 06");Sleep(1000);system("COLOR 01");Sleep(1000);system("COLOR 0A");Sleep(100);system("COLOR 08");
    cout << endl << endl << endl;
int a = 30;
    int b = 1;
        while(1){
    for(int i = 0 ; i < 30 ; i++){
        system("COLOR 06");
        printerF(a , b);
        a--;
        b++;
        cout << endl;
        Sleep(100);
        system("COLOR 0F");
    }

    for(int i = 0 ; b >= 1 ; i++ ){
        system("COLOR 05");
        printerF(a , b);
        a++;
        b--;
         cout << endl;
         Sleep(100);
         system("COLOR 0A");
    }
    Sleep(100);
        }

}
