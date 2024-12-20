#include <iostream>
#include <string>

using namespace std;

string Generate_The_Key(const string& text, const string& Key) // The creation of the key 
{
    string Key_TotRep = Key;

    while (Key_TotRep.length() < text.length()) 
    {
        Key_TotRep += Key; // The repetition of the key word
    }

    return Key_TotRep.substr(0, text.length()); // Adjusting the length of the characters to be repeated
}


string Encrypt_The_Text(const string& plaintext, const string& key) // This part allow the program to encrypy text following the vigenere cypher guidelines 
{
    string Text_Encrypted = "";

    for (size_t i = 0; i < plaintext.length(); i++) // The Formula: E(i) = (P(i) + K(i)) mod 26
    {
        char Char_Encrypted = ((toupper(plaintext[i]) - 'A') + (toupper(key[i]) - 'A')) % 26 + 'A';

        Text_Encrypted += Char_Encrypted;
    }

    return Text_Encrypted; // The result and the displayed infotmation  will be the encrypted text
}

string Decrypt_The_Text(const string & ciphertext, const string& key) 

// This part allow the program to decrypt or reveal text following the vigenere cypher guidelines 

{
    string Text_Decrypted = "";

    for (size_t i = 0; i < ciphertext.length(); i++) // The Formula : D(i) = (C(i) - K(i) + 26) mod 26
    {
        char Char_Decrypted = ((toupper(ciphertext[i]) - 'A') - (toupper(key[i]) - 'A') + 26) % 26 + 'A';

        Text_Decrypted += Char_Decrypted;


    }

    return Text_Decrypted; // The result and the displayed infotmation  will be the decrypted or original text

}

int main() 
{
    int Choice;

    string User_Text, The_Key;

    // The introduction for the user
    // The main menu
    // This part here is a welcome text for the user. This is where the program will ask what you want to do and you will have to make a decision
    // Options include encrypting, decrypting or just exiting the program

    cout << "-------------------------------------------------------------------------------------------------\n";
    cout << "  THE VIGENERE CYPHER BY MAURO ELIAS \n";
    cout << "-------------------------------------------------------------------------------------------------\n";

    cout << "  Hello Everyone !!! Welcome to my final project for CIS-7, 'THE VIGENERE CYPHER'\n";

    cout << "  How is everything going today ??? Please tell me what would you like to do\n";


    cout << "1. I want to ENCRYPT a message \n";
    cout << "2. I want to DECRYPT a message \n";
    cout << "3. I want to EXIT\n";


    cout << "Please Choose and option (1-3): ";

    cin >> Choice;

    if (Choice == 1) // ENCRYPT THE MESSAGE
    {
        // In this part we will work with option 1
        // The text, word or phrase together with the key of your choice will be entered here and processed 
        // to return your code already encrypted in vigenere

        cout << "\n Please type the text you want me to encrypt (type it all together): ";
        cin >> User_Text; 

        // HEre the user will be required to give a text 

        cout << "Please type a password/key (type it all together): ";
        cin >> The_Key;

        //Here the user will be required to provide a key 

        // KEY CREATION AND ENCRYPTION

        string Tot_Key = Generate_The_Key(User_Text, The_Key);

        string Res_Encrypted_Text = Encrypt_The_Text(User_Text, Tot_Key);
        
        // The result will be displayed 

        cout << "Your cipher text: " << Res_Encrypted_Text << "\n";

        // This will be the end of the 1st option
    }

    else if (Choice == 2) // DECRYPT THE TEXT
    { 
        cout << "\n Please type in the text you want me to decrypt (type it all together): ";
        cin >> User_Text;

        // Here the user will be required to give a text (Encrypted Test)


        cout << "Please type a password/key (type it all together): ";
        cin >> The_Key;

        //Here the user will be required to provide a key 


        // KEY CREATION AND DECRYPTION

        string Total_Key = Generate_The_Key(User_Text, The_Key);

        string Res_Decrypted_Key = Decrypt_The_Text(User_Text, Total_Key);

        // Decrypt the text will be called

        cout << "Your decrypted text: " << Res_Decrypted_Key << "\n";

        // The result will be displayed

        // This will be the end of option 2

    }
    
    else if (Choice == 3) // EXIT
    { 
        cout << "Bye, have a great day!\n";
    }

    // The program will end with the a kind message

    //INVALID OPTION: 
    else
    { 

        cout << "Sorry, your option is not valid. \n";

        // If the user does not provide accurate responses (Special Characters or Letters)

        cout << "Please restart the program and choose a number from 1 to 3.\n";
    }

    return 0;
}