# A GMK Laser inspired case, in a custom 85-key handwired ortholinear package.

this readme is a more updated clone of [L-A-S-E-R.notes.md](../master/L-A-S-E-R.notes.md)  
### NOTE! IF JSON FILES ARE MORE RECENT THAN THE QMK JSON, I WILL NEED TO EDIT THE FIRMWARE FILES  
this is mostly just a reminder to me

Design and print case with http://builder.swillkb.com/ , cuts by lasergist  
Philosophy for layers is the ability to use only one hand for lower and raise keys.  
The display plan is have the top display be what it will physically look like, and the bottom copy to be what the layers will be  
Unfortunately, all the novelty caps are R1, which might look bad on R4. I'll have to see what it comes out to look like, and if anything, go with the planck blanks.

Plan:  
Switch plate: Cut switch plate with lasergist @ 1.5mm  
Acrylic sandwich + bottom: Cut 2 open plates, 3 closed plates, and 1 bottom plate @ ~3mm each from Ponoko (Ponoko uses inches) to have ~12mm of inside space  
Total case height = ~15mm  
Colors: Blue open layer, Purple tint closed layers, Blue bottom layer

swillkb settings: http://i.imgur.com/jhe3P6L.jpg  
underside design:   

## guides used  
https://www.reddit.com/r/MechanicalKeyboards/comments/4l0p41/guide_detailed_guide_to_making_a_custom_keyboard/  
https://github.com/qmk/qmk_firmware/blob/0787d70e55a668244445d9328f3cda2303cc6877/docs/hand_wire.md  

edits
------

edit after getting acrylics:
didn't have enough space with 4 ~3mm thick acrylics, so ordered another open layer that's like ~4mm or so. Also didn't like the way the LASER looked on the bottom plate, so reversed it and ordered it along with the ~4mm open layer. Both are the blue tint, and so far it's going to be:  
[ switch - closed -  open  - open - closed - closed - bottom ]  
[ steel  - purple - purple - blue - purple - purple -  blue  ]

Good news is the spacers and screws I ordered fit perfectly. However, I top-switched the gateron clear with cherry black tops for aesthetic and I think those don't fit as snugly in the switch plate as I hoped. I'm going to leave it as-is and be careful if I ever remove the caps. If I ever need to hot glue the switches I'll be pissed  


Teensy 2.0 planned pinout: (going from top left down)  
B0, B1, B2, B3, B7, D0, D1, D2, D3, C6, C7, D5, D7, B4, B5, B6, F7, F6, F5, F4, F1, F0  
gives 22 pins for 17x5 matrix  
Build with http://kbfirmware.com/, using [these settings](../master/kbfirmware%20qmk/laser%20kbfirmware.json)

Edit 8/3/17 - Started working on a pcb just for fun