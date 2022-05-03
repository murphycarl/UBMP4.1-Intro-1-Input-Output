#include    "xc.h"              // Microchip XC8 compiler include file
#include    "stdint.h"          // Include integer definitions
#include    "stdbool.h"         // Include Boolean (true/false) definitions
#include    "UBMP410.h"         // Include UBMP4.1 constant and function definitions
// TODO Set linker ROM ranges to 'default,-0-7FF' under "Memory model" pull-down.
// TODO Set linker code offset to '800' under "Additional options" pull-down.
// Program constant definitions
const unsigned char maxCount = 50;
// Program variable definitions
unsigned char SW3Count = 0;
bool SW3Pressed = false;
//  void rest( __delay_us)
void playNote(int period, int durationCycles, bool isRest) {
 for(int i = 0; i<durationCycles; i++)
 {
     if (!isRest) BEEPER = !BEEPER;
     for(int j = 0; j < period; j++);
 }
}
// const int C = 329;
// const int D = 293;
// const int E = 261;
// const int G = 391;
// const int q = 500;
// const int t = 2000;

        const int Ash = 466;
        const int Dsh = 622;
        const int C = 523;
        const int D = 587;
        const int G = 392;
        const int Gsh = 415;
        const int LDsh = 311;
        const int q = 250;
        const int t = 250;

int main(void)
{
 OSC_config();             
 UBMP4_config();           
  while(1)
     {
if(SW5 == 0 && SW4==1 && SW3==1)
     {
playNote(Ash, q, false);
playNote(Ash, q, true);

playNote(Dsh, q, true);
playNote(Dsh, q, false);

playNote(Ash, q, true);
playNote(Ash, q, false);

playNote(C, q, true);
playNote(C, q, false);

playNote(D, q, true);
playNote(D, q, false);

playNote(G, q, true);
playNote(G, q, false);

playNote(G, q, true);
playNote(G, t, false);

playNote(C, q, true);
playNote(C, q, false);

playNote(Ash, q, true);
playNote(Ash, q, false);

playNote(Gsh, q, true);
playNote(Gsh, t, false);

playNote(Ash, q, true);
playNote(Ash, q, false);

playNote(LDsh, q, true);
playNote(LDsh, q, false);




            // playNote(G, q, true);
            // playNote(G, t, false);

            // playNote(E, q, true);
            // playNote(E, q, false);

            // playNote(D, q, true);
            // playNote(D, q, false);

            // playNote(C, q, true);
            // playNote(C, q, false);

            // playNote(D, q, true);
            // playNote(D, q, false);

            // playNote(E, q, true);
            // playNote(E, q, false);

            // playNote(E, q, true);
            // playNote(E, q, false);

            // playNote(E, q, true);
            // playNote(E, q, false);

            // playNote(E, q, true);
            // playNote(E, q, false);

            // playNote(D, q, true);
            // playNote(D, q, false);

            // playNote(D, q, true);
            // playNote(D, q, false);

            // playNote(E, q, true);
            // playNote(E, q, false);

            // playNote(D, q, true);
            // playNote(D, q, false);

            // playNote(C, q, true);
            // playNote(C, t, false);
     }
     if(SW3 == 0)
     {
     BEEPER == !BEEPER;
     __delay_us (q);
     }
if(SW1 == 0)
 {
         RESET();
 }
     }
}







/*

notes for song

A sharp (b flat)    466
D sharp (e flat)    622
A sharp (b flat)    466
C                   523
D                   587
G long              392
G short             392
C5                  523
A sharp             466
G sharp             415
A sharp             466
D sharp             311

        const int Ash = 466;
        const int Dsh = 622;
        const int C = 523;
        const int D = 587;
        const int G = 392;
        const int Gsh = 415;
        const int LDsh = 311;

        const int q = 500;
        const int t = 2000;





 */