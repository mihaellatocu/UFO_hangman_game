#include <vector>

void display_misses(int misses);

#define RST "\033[0m"    /* Reset to default color */
#define BOLD "\033[1m"   /* Bold */
#define U "\033[4m"      /* Underline */
#define RED "\033[1;31m" /* Red */
#define G "\033[1;32m"   /* Green */
#define Y "\033[1;33m"   /* Yellow */
#define B "\033[1;34m"   /* Blue */
#define M "\033[1;35m"   /* Magenta */
#define C "\033[1;36m"   /* Cyan */
#define W "\033[1;37m"   /* White */

#define PINK "\033[1;95m"        /* Pink (Bright Magenta) */
#define SALMON      "\033[38;5;210m" 
#define LIGHT_CORAL "\033[1;31m" /* Light Coral */

void greet();
void end_game(std::string answer, std::string codeword);
void display_status(std::vector<char> incorrect, std::string answer);