#include <iostream>
#include <unistd.h>

using namespace std;
void snow(int a){
    for (int i = 0;i < a ; i ++){
        cout << "  *";
    }
    cout << endl;
}
int main(){
    int i = 0;
    int second = 1;
    while (true)
    {
        if (i % 3 == 0){
            cout << "         *           " << endl;
            cout << "                    " << endl;
            cout << " *   ・‥☆‥・         " << endl;
            cout << "  十 ☆彡▲▲☆      *   " << endl;
            cout << "    彡▲▲☆∴▲十        " << endl;
            cout << "     ▲▲☆∴▲▲☆        " << endl;
            cout << "    ▲☆∴▲▲☆彡▲       " << endl;
            cout << " * ▲`☆∴▲▲☆彡▲▲☆     " << endl;
            cout << "  ▲▲十▲▲☆彡▲▲☆∴▲     " << endl;
            cout << "    ＿_|＿|_＿       " << endl;
            cout << "      ∥∥∥∥∥       " << endl;
            if (i < 6){
                snow(i);
            }else{
                cout << "* * *     * * * **  ** *" << endl;
                cout << "* HAVE A BEAUTIFUL WINTER * " << endl;
                cout << "* * *     * * * **  ** *" << endl;
            }
            cout << "                    " << endl;
            cout << "                    " << endl;
        }else if (i % 3 == 1){
            cout << "  * MERRY XMAS * " << endl;
            cout << "                    " << endl;
            cout << "     ・‥★‥・   *     " << endl;
            cout << "  十 ★彡▲▲☆         " << endl;
            cout << " *  彡▲▲★∴▲十       " << endl;
            cout << "     ▲▲★∴▲▲★    *   " << endl;
            cout << "    ▲☆∴▲▲★彡▲       " << endl;
            cout << "   ▲`★∴▲▲★彡▲▲★     " << endl;
            cout << "  ▲▲十▲▲★彡▲▲☆∴▲     " << endl;
            cout << "    ＿_|＿|_＿       " << endl;
            cout << "      ∥∥∥∥∥       " << endl;
            if (i < 6){
                snow(i);
            }else{
                cout << "* * *     * * * **  ** *" << endl;
                cout << "* HAVE A BEAUTIFUL WINTER * " << endl;
                cout << "* * *     * * * **  ** *" << endl;
            }
            cout << "                    " << endl;
            cout << "                    " << endl;
        }else{
            cout << "                    " << endl;
            cout << "                    " << endl;
            cout << "     ・‥☆‥・         " << endl;
            cout << "  十 ★彡▲▲★          " << endl;
            cout << "    彡▲▲☆∴▲十        " << endl;
            cout << "     ▲▲★∴▲▲☆   *     " << endl;
            cout << "    ▲★∴▲▲★彡▲       " << endl;
            cout << " * ▲`☆∴▲▲★彡▲▲☆     " << endl;
            cout << "  ▲▲十▲▲★彡▲▲★∴▲  *  " << endl;
            cout << "    ＿_|＿|_＿       " << endl;
            cout << "      ∥∥∥∥∥       " << endl;
            if (i < 6){
                snow(i);
            }else{
                cout << "* * *     * * * **  ** *" << endl;
                cout << "* HAVE A BEAUTIFUL WINTER * " << endl;
                cout << "* * *     * * * **  ** *" << endl;
            }
            cout << "                    " << endl;
            cout << "                    " << endl;
        }
        cout << "終了 : [ control , C ] の同時押し" << endl;
        cout << i << "秒経過" << endl;
        i ++;
        // if (i == 5){
        //     break;
        // }
        sleep(second);
        system("clear");
    }
}