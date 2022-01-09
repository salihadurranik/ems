#include <iostream>
#include "Encryption.h"

using namespace std;

Encryption::Encryption() {
}

string Encryption::Encrypt(string text) {
  for(i = 0; text[i] != '\0'; i++) {
    text[i] = text[i] + 2;
  }  
  return text;
}

string Encryption::Decrypt(string text) {
  for(i = 0; text[i] != '\0'; i++) {
    text[i] = text[i] - 2;
  }  
  return text;
}
