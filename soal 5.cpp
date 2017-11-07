#include <iostream>

using namespace std;

int main(){
	float beratbadan;
    int tinggibadan;
    
     cout << "Silahkan masukkan tinggi badan(cm) : "; cin >> tinggibadan;
    cout << "Silahkan masukkan berat badan(kg) : " ; cin >> beratbadan;
    
     if (beratbadan<tinggibadan/2.5)
       cout << "  Anda Mengalami : Underweight(kekurangan berat badan)" << endl;
            else if (tinggibadan/2.3 < beratbadan)
                 cout << "  Anda Mengalami : Overweight(kelebihan berat badan)" << endl;
            else if (tinggibadan/2.5 <= beratbadan <= tinggibadan/2.3)
           		 cout << "  congratulation!!! : Normal" << endl;
                 
                 
                 return 0;

}
