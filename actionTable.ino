//Note: you can cut and paste all of actionTable from strandtest_behaviour_use below

void actionTable() {
  switch(action) {
    
    case 0:
    //place the adafruit first example procedure here 
    //red lights


    
    break;

    case 1:
    //place the second procedure example here
    //green lights

    
    break;

    case 2: 
    //blue lights
    
    
    break;

    case 3:
    //how about theatre chase in white? 

    

    break;

    case 4:
    //theatre chase in red

    

    break;

    case 5:
    // theatre chase in Blue

    

    break;

    case 6:
    //how about a theatre chase in green?
    
    

    break;

    case 7:
    //how about a theatre chase in 3 numbers you just made up to see what colour comes out?

    

    break;
    
    case 8:
    //Let's try a rainbow effect!

    

    break;

    case 9:
    //let's try rainbow cycle

    

    break;

    case 10:
    //what is our last example procedure to try out

    

    break;
    
  }
}

//Below this code you need to add all of void functions that will run your action table code

//This is the first one, colorWipe, a few things need to happen when you hack found code
//1) check the words and make sure their yours and not from the coder you stole from.
//2) if there is a for loop use our term ringTotal instead


// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  //for loop is missing how many leds we have to change, either put the number or the word you made
  //to represent that number - ringTotal
  for(uint16_t i=0; i< ; i++) {
    //Use your word to represent the neo pixel ring from the orange text Adafruit_NeoPixel...
    [place your ring name here].setPixelColor(i, c);
    [place your ring name here].show();
    delay(wait);
  }
}

//Now paste in the rainbow function, dont forget to make your 2 types of changes like above


//Wait does rainbow have a new function to add?


//Now paste in rainbowCycle & make the 2 types of changes


//Now paste theatre chase


//Now paste theatre chase rainbow


