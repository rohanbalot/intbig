#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

void _answer()
{
    char msg[1050];

    register int i;
    string s[] = {
                    "2",
                    "22",
                    "222",
                    "3",
                    "33",
                    "333",
                    "4",
                    "44",
                    "444",
                    "5",
                    "55",
                    "555",
                    "6",
                    "66",
                    "666",
                    "7",
                    "77",
                    "777",
                    "7777",
                    "8",
                    "88",
                    "888",
                    "9",
                    "99",
                    "999",
                    "9999",
                    "0"
                   };
        cin.getline(msg,1001,'\n');
        short key = -1;
        for(i = 0; msg[i] != '\0'; i++){
            if(key == s[msg[i] - 97][0] ){
                cout << " ";
            }
            if(msg[i] == ' '){
                cout << "0";
                key = 0;
                if(msg[i+1] == ' '){
                    cout << " ";
                }
            }
            else{
                key = s[msg[i] - 97][0];
                cout << s[msg[i] - 97];
            }
        }
        cout << endl;
}
int main()
{
    unsigned short int _t;

    freopen("C-large-practice.in","r",stdin);
    freopen("C-large.txt","w",stdout);
    cin >> _t;
    cin.ignore();
	for(int _cc = 1; _cc <= _t; _cc++)
	{
	    printf("Case #%d: ",_cc);
		_answer();
	}
    return 0;
}

