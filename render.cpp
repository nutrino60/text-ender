#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;
void repeat(std::string str_,int times,char Char)
{




    std::cout << std::string(times, Char) << '\n';

}

void DrawRec(int l,int w,char fulling,char outside)
{
    cout << outside << std::string(w, outside) << outside << '\n';

    for (int t = 0; t < l; t++) {

        cout << outside << std::string(w, fulling) << outside << '\n';
    }
    cout << outside << std::string(w, outside) << outside << '\n';

}
void Drawline(int l,char line)
{
    int couter;
    for (int i = 0; i < l ; ++i) {
        cout <<std::string(couter, ' ') <<line<<'\n';


couter++;
    }

}