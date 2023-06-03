# Credential-System

The Credential System is a command-line application that allows users to sign up, log in, and change their passwords. 
It uses a simple encryption algorithm called Caesar cipher to encrypt passwords before storing them.

Usage
Upon running the program, a menu will be displayed with the following options:

Sign up: Allows users to create a new account by providing a username, password, and age.
Log in: Prompts users to enter their username and password to log into their account.
Change Password: Lets users change their password by providing their old password and entering a new password.
End Program: Exits the application.
Encryption
The passwords entered by the users are encrypted using the Caesar cipher algorithm. This algorithm shifts each character 
in the password by a fixed number of positions. In this case, the shift value is 3. For example, the letter 'a' would be shifted to 'd', 'b' to 'e', and so on.

File Storage
User credentials are stored in a file named "file.txt". Each line in the file represents a username-password pair, where the username is followed by the encrypted password.
