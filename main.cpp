#include <string>
#include <vector>

void binomial_small() {
    int n = 6, k = 2;
    int result = 1;
    for (int i = 1; i <= k; ++i) result = result * (n - k + i) / i;
    (void)result;
}

void sum_range() {
    int acc = 0;
    for (int i = 10; i <= 20; ++i) acc += i;
    (void)acc;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

void sum_squares() {
    int acc = 0;
    for (int i = -5; i <= 5; ++i) acc += i * i;
    (void)acc;
}

extern "C" int lucid_summit();
extern "C" void serene_maple();
extern "C" void lucid_meadow();
extern "C" void vivid_boulder();
extern "C" void misty_canyon();

int main() {
    binomial_small();
    sum_range();
    count_vowels();
    sum_squares();
    serene_maple();
    lucid_meadow();
    vivid_boulder();
    misty_canyon();
    return lucid_summit();
}
