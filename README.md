December 8 / Fall 2024

Welcome! My name is Mauro and this is my project for the 24FAL-CIS-7-28754 class. 

My project is case number 3 and it consists of encrypting and decrypting text using the vigenere cipher. 
This is a method that uses polyalphabetic substitution. In a general and simple way, this cipher works by 
setting a text and a key. The key will be repeated until the characters of the text are equal and then the 
letters will be added together to obtain a number that will fit in a range of 26 numbers (letters of the al
phabet), thus obtaining a new word. The process is reversed when decrypting a message, also making use of a
text (already encrypted) and a key (the same with which it was encrypted).
-------------------------------------------------------------------------------------------------------
Regarding the operation and efficiency of this project, I will start by saying that the main objective and the
biggest challenge was to ensure that it had correct responses when encrypting or revealing the words. When the 
program interacts with the user, the following happens:
It opens a menu where the user has 3 options.
The user can encrypt, de-encrypt or exit the program.
Depending on the option selected, the program will follow a specific process.
If option 1 or 2 is selected, it will encrypt (1) or decrypt (2) text.
The user will be required to enter a text and a password that the program will use.
Using formulas like Ei = (Pi + Ki) mod 26 or Di = (Ei - Ki) mod 26
As well as giving a range from letter A to Z, the program will implement the encryption correctly (either encrypting
or decrypting the code)
After this process in which the encryption logic is applied, the result will be displayed. 
If option 3 is selected, the program will only close.
Option 3 is designed to display a goodbye message to the user.
The program also implements a section that will decide whether the entered characters are valid or not.
If the characters are not valid a message will be displayed to the user.
The program is simple and does not have or can not: encrypt sentences or whole texts, such an intuitive interface, guarantee
security, encrypt text with spaces between words.



