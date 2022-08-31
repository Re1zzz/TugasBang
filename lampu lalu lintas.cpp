#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string w;

   raptor_prompt_variable_zzyz ="Masukkan Warna Lampu Sekarang : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> w;
   if (w=="merah" || w=="MERAH")
   {
      cout << "ANDA HARUS BERHENTI !!!" << endl;   }
   else
   {
      if (w=="kuning" || w=="KUNING")
      {
         cout << "Sebaiknya Anda hati-hati" << endl;      }
      else
      {
         if (w=="hijau" || w=="HIJAU")
         {
            cout << "ANDA HARUS JALAN SEKARANG !!" << endl;         }
         else
         {
            cout << "" << endl;         }
      }
   }

   return 0;
}