# Morse Code Translator

This project is a simple Morse code translator written in C. It translates a given string message into Morse code using dots and dashes.

## Features

- Converts English text to Morse code.
- Handles both uppercase and lowercase letters.
- Represents spaces between words with a `/`.

## How to Use

1. **Compile the code**:
    ```sh
    gcc -o morse_code morse_Code.c
    ```

2. **Run the executable**:
    ```sh
    ./morse_code
    ```

3. **Enter a message**:
    - When prompted, enter the message you want to translate to Morse code.
    - The program will output the Morse code translation.

## Example

```sh
$ ./morse_code
Enter a message: Hello World
Morse code: .... . .-.. .-.. --- / .-- --- .-. .-.. -..
