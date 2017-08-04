# Laser-85
### A GMK Laser inspired case, in a custom 85-key handwired ortholinear package.

## the plan  

Design and print case with http://builder.swillkb.com/, steel switchplate cut by Lasergist, acrylic cut by Ponoko.    
Philosophy for layers is the ability to only have to use one hand while using modifiers.  

| Layer | Type | Material | Width |
|:---:  |:---: |:---:     |:---:  |
| 1 | Switch | Steel | 1.5mm |
| 2 | Closed | Purple Acrylic | ~3mm  |
| 3 | Open   | Purple Acrylic | ~3mm  |
| 4 | Open   | Blue Acrylic   | ~4mm  |
| 5 | Closed | Purple Acrylic | ~3mm  |
| 6 | Closed | Purple Acrylic | ~3mm  |
| 7 | Bottom | Blue Acrylic   | ~4mm  |
|   |        | Total Inside   | ~13mm |
|   |        | Total          | ~20mm |

swillkb settings:  
![alt text](http://i.imgur.com/jhe3P6L.jpg "SwillKB Settings")
underside design:  
![alt text](http://i.imgur.com/UIby4OW.jpg "LASER")

## programming  
Teensy 2.0 planned pinout: (going from top left down)  
B0, B1, B2, B3, B7, D0, D1, D2, D3, C6, C7, D5, D7, B4, B5, B6, F7, F6, F5, F4, F1, F0  
gives 22 pins for 17x5 matrix  
Build with http://kbfirmware.com/, using [these settings](../master/kbfirmware%20qmk/laser%20kbfirmware.json) (outdated, use as base or more updated qmk files)

Itemlist
------

| Item           | Product name          | Price   | Link                                                  | Comments               |
|:---------------|:---------------------:|:-------:|:-----------------------------------------------------:|:-----------------------|
| Switches       | Gateron blacks        | $24.99  | [link](https://www.massdrop.com/buy/gateron-switches) | Bought from massdrop   |
| Diodes         | 1N4148 diode          | $5.99   | [link](https://www.amazon.com/gp/product/B06XB1R2NK)  | 300pcs                 |
| Insulated Wire | Striveday 22AWG       | $7.99   | [link](https://www.amazon.com/gp/product/B01IBAIL60)  | 5m purple              |
| Solder         | Sywon 60/40           | $7.99   | [link](https://www.amazon.com/gp/product/B01LVTTL9E)  | 0.039" dia, 50g        |
| Soldering Tool | Sywon 60w kit         | $32.99  | [link](https://www.amazon.com/gp/product/B01N4571Q6)  | includes temp control  |
| Wire Stripper  | Irwin Vise-Grip       | $10.70  | [link](https://www.amazon.com/gp/product/B000JNNWQ2)  |                        |
| Spacers        | M2/M3 Brass Standoffs | $14.99  | [link](https://www.amazon.com/gp/product/B00MNG2T6W)  | yeah this was overkill |
| Screws         | Rion Tech Screw Kit   | $9.99   | [link](https://www.amazon.com/gp/product/B072NZY69F)  | similarly overkill     |
| USB Extender   | YCS Basics Mini-B M-F | $7.99   | [link](https://www.amazon.com/gp/product/B01CKMGD10)  |                        |
| Controller     | Teensy 2.0            | $20.95  | [link](https://www.amazon.com/gp/product/B00NC43256)  |                        |
| Switch plate   | Cut by lasergist      | $81.34  | [link](https://www.lasergist.com)                     | they ship from Greece  |
| Acrylics       | Cut by ponoko         | $91.07  |                                                       | first shot             |
| Acrylics       | Cut by ponoko         | $54.92  |                                                       | second shot            |
| Keycap Set     | GMK Laser             | $??.??  |                                                       | :)                     |

Final thoughts
------



## guides used  
https://www.reddit.com/r/MechanicalKeyboards/comments/4l0p41/guide_detailed_guide_to_making_a_custom_keyboard/  
https://github.com/qmk/qmk_firmware/blob/0787d70e55a668244445d9328f3cda2303cc6877/docs/hand_wire.md  
