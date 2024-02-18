// Mine Hunting Game.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));

    const int numberOfMines = 5;
    int mines[5];

    for (int i = 0; i < numberOfMines; ++i) {

        mines[i] = rand() % 101;

    }

    int totalPoint = 0;

    cout << "Welcome to the Mine Hunting Game! :)" << endl;

    for (int i = 0; i < numberOfMines; ++i) {

        int guess;
        cout << "Enter your guess for mine #" << (i + 1) << " (0 - 100):";
        cin >> guess;
        if (guess >= 0 && guess <= 100) {

            int minePoint = mines[i];
            int difference = abs(minePoint - guess);

            if (difference >= 10) {

                cout << "Congratulations! You found the mine. Your score: " << minePoint << endl;
                totalPoint += minePoint;

            }
            else {

                cout << "Sorry, you couldn't find the mine. Mine score: " << minePoint << endl;

            }

            } else {

                cout << "You entered an invalid guess. Prediction should be between 0-100." << endl;

            }

        }

        cout << "The game is over. Your total score: " << totalPoint << endl;
        return 0;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
