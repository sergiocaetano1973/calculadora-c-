#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    // Remove espaços em branco
    input.erase(remove(input.begin(), input.end(), ' '), input.end());

    // Verifica se a entrada é válida
    if (input.find_first_not_of("0123456789+-*/()") != string::npos) {
        cout << "Entrada inválida!" << endl;
        return 1;
    }

    // Avalia a expressão
    try {
        cout << "Content-type: text/html\n\n";
        cout << "<html><head><title>Calculadora Online</title></head><body>";
        cout << "<h1>Calculadora Online</h1>";
        cout << "<p>Expressão: " << input << "</p>";
        cout << "<p>Resultado: ";

        // Avalia a expressão
        int result = stoi(input, nullptr, 0);
        cout << result << "</p>";
        cout << "</body></html>";
    } catch (const exception& e) {
        cout << "Erro: " << e.what() << endl;
        return 1;
    }

    return 0;
}
