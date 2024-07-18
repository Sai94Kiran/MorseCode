#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

// Morse code representation of each character
const char *morse[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",
    "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

// Function to translate a single character to Morse code
void charToMorse(char c)
{
  if (c >= 'A' && c <= 'Z')
  {
    printf("%s ", morse[c - 'A']);
  }
  else if (c >= 'a' && c <= 'z')
  {
    printf("%s ", morse[c - 'a']);
  }
  else if (c == ' ')
  {
    printf("/ "); // Use / to represent space between words
  }
}

// Function to translate a message to Morse code
void messageToMorse(const char *message)
{
  for (int i = 0; i < strlen(message); i++)
  {
    charToMorse(message[i]);
  }
  printf("\n");
}

int main()
{
  char message[MAX_LEN];

  printf("Enter a message: ");
  fgets(message, MAX_LEN, stdin);
  message[strcspn(message, "\n")] = '\0'; // Remove newline character

  printf("Morse code: ");
  messageToMorse(message);

  return 0;
}
