#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    int y,z;
    cout<<"Enter a alphabet : ";
    cin>>x;
    y=x;
    z=x;
    x=y<97?y+=32:y;
    if((65<=z && z<=90) || (97<=z && z<=122))
    {
        switch (x)
        {
        case 'a':
            cout<<"It is an Vowel";
            break;
        case 'i':
            cout<<"It is an Vowel";
            break;
        case 'e':
            cout<<"It is an Vowel";
            break;
        case 'o':
            cout<<"It is an Vowel";
            break;
        case 'u':
            cout<<"It is an Vowel";
            break;
        default:
            cout<<"It is an Consonant";
        }
    }
    else
        cout<<"Sorry,You entered wrong input."<<endl<<"You can input only alphabet.";
    return 0;
}