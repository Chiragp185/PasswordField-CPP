# PasswordField-CPP
Password Field using C++

This is my code for implementing the password field in C++. I created this as I needed to use an account login/register for my another project in C++. I hope it helps :)

For running the code, you can use a free and open source software like **Turbo C7 by Akki**. My code has been written using this compiler and I assure you that it runs perfectly in this.

You can modify the code to suit your needs like using isalphanum() if you want the user to enter only alphabets and numbers or use isdigit() for numeric passwords like credit card pin, etc.

## Source Code Explanation: -

I have created a character array and an iterator variable for storing the password. You may even change the code and use String data type.

When the user enters the password, as soon as the first letter is typed, getch() takes the input as a character and stores it in the array. The cout statement that follows prints \b (an escape sequence equivalent to backspace). So what happens is that the user entered character is deleted  and cursor shifts back by one position. Since cout prints * after \b, the original character entered by the user is replaced by * . Hence this is how the code works.

