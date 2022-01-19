/* Strandtest_behaviour_Array_Use - adding an array to the behavour table template
 *  This code will add an array to the Strandtest_behaviour code to allow the ability
 *  to have the arduino play out a planned performance like a director (coder) instructs their
 *  actor (arduino) to behaviour in a perscribed way.  
 *  This code is an exercise to learn how the template can be used to allow a coder to think
 *  in a design space and give the opportunity to focus on the theatre of their artworks
 *  
 *  This is the code you will use for the behaviour assignment. The expectation is that
 *  the outputs are changed and focused on a performance you want to show. So you
 *  will own this code in the actionTable by creating neopixel ring behaviours to
 *  fit your assignment theme and it shows visuals that suit your theme.
 
 */
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

//What PWM pin do you want to use? Here we don't need the ";" at the end because of #define
#define PIN [where is the neopixel ring on Arduino?]

//type how many leds you have in ringTotal
int ringTotal = [how many LEDs are on the neopixel ring?];

//this is the varable that will control what behaviour happens when. In this code, it is just going
//to cycle through them, so where on the table do you want to start?
int action = 0;

//create an array of numbers that will pick the order of behaviours rather than just going trough the 
//code one after another - use numbers from your switch case 0 to 8 and use a comma between each 
//number and create a performance with the cases for as long as you like
int lightShow[] = {
  [Put your case # here in an interesting order],[next case],[next case],
  [you have 11 performances in your database make 20 behaviours here],
};  //an array of cases to be called up in an order decided by myself on a piece of paper

//this value represents how long the array is or how many light show acts we have in the light performance
//the number should match the array number
int lightShowLength = [did you do 20 above? Total of lightshow goes here];
//this value tracks where we are in the light show to display it so it starts at zero, the begining
//number as an array
int lightShowCounter = 0;

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

//What do you want to call your neo pixel ring, put your word before the equal sign
//call it ring?
//Also in the blank spot put the number of LEDs are on your ring
Adafruit_NeoPixel  = Adafruit_NeoPixel( [ring name?] , PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  
  Serial.begin(9600);
  //Note that this code defines our ring and not a strip, need to add your word for your neopixel
  //ring before the dot on these two words
  [place your ring name here].begin();
  [place your ring name here].show(); // Initialize all pixels to 'off'
  //This line tells action to start at the beginning of our light show
  //light show counter is use to call up the correct spot in the array to play in real life like tracks 
  //for music where the showcase represents the details of the music track or song.
   
}

void loop() {
  action = lightShow[lightShowCounter]; 
  actionTable();
  //delay(50);
  //When the behaviour is over, then we need to move to the next one but we also have to check for
  //whether we are at the end of the array and need to repeat the tracks
  if (lightShowCounter < lightShowLength) {
    //when light show counter is less then the length this line of code needs to move to the next case
    //what variable do we need to add before the "++"
    [put the light show counter name here]++;
  } else {
    //If the light show counter is equal to the light show length then we need to start over from zero
    //add what this line of code would look like
    [make this same as variable value before setup for the light show counter]   
  }  
}  


