#include <reg51.h>
sbit fan = P0 ^ 0; // setting fan pin as P0.0
sbit light = P0 ^ 1;
sbit television = P0 ^ 2;
sbit machine = P0 ^ 3;
#define display_port P1
sbit rs = P2 ^ 0;               // RS pin connected to pin 2 of port 3
sbit rw = P2 ^ 1;               // RW pin connected to pin 3 of port 3
sbit e = P2 ^ 2;                // E pin connected to pin 4 of port 3
void msdelay(unsigned int time) // Function for creating delay
    in milliseconds.
{
    unsigned i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 1275; j++)
            ;
}
void lcd_cmd(unsigned char command) // Function to send
    command instruction to LCD
{
    display_port = command;
    rs = 0;
    rw = 0;
    e = 1;
    msdelay(1);
    e = 0;
}
void lcd_data(unsigned char disp_data) // Function to send
    display data to LCD
{
    display_port = disp_data;
    rs = 1;
    rw = 0;
    e = 1;
    msdelay(1);
    e = 0;
}
void lcd_init() // Function to prepare the LCD and get it
    ready
{
    lcd_cmd(0x38); // for using 2 lines and 5X7 matrix of LCD
    msdelay(10);
    lcd_cmd(0x0F); // turn display ON, cursor blinking

    msdelay(10);
    lcd_cmd(0x01); // clear screen
    msdelay(10);
    lcd_cmd(0x81); // bring cursor to position 1 of line 1
    msdelay(10);
}
void main()
{
    unsigned char x; // Assign a variable for the character
    SCON = 0X50;     // Setting serial port to 8-bit mode
    TMOD = 0X20;     // Set time Timer 1 in 8-bit auto-reload
    mode(mode 2)
        TH1 = -3; //
    TR1 = 1;      // Start Timer 1
    P1 = 0X00;
    lcd_init();
    lcd_data('W');
    lcd_data('E');
    lcd_data('L');
    lcd_data('C');
    lcd_data('O');
    lcd_data('M');
    lcd_data('E');
    msdelay(500);
    lcd_cmd(0x01);
    while (1)
    {
        while (RI == 0)
            ;
        x = SBUF; // Read the character from serial REGISTER

        PORT port

            SBUF = x;
        while (TI == 0)
            ;
        TI = 0;
        RI = 0;
        if (x == '1')
            ;
        {
            fan = 1;
            lcd_data('F');
            lcd_data('A');
            lcd_data('N');
            lcd_data(' ');
            lcd_data('O');

            lcd_data('N');
            msdelay(200);
            lcd_cmd(0x01);
        }
        if (x == '2')
        {
            fan = 0;
            lcd_data('F');
            lcd_data('A');
            lcd_data('N');
            lcd_data(' ');
            lcd_data('O');
            lcd_data('F');
            lcd_data('F');
            msdelay(200);
            lcd_cmd(0x01);
        }
        if (x == '3')
        {
            light = 1;
            lcd_data('L');
            lcd_data('I');
            lcd_data('G');
            lcd_data('H');
            lcd_data('T');
            lcd_data('O');
            lcd_data('N');
            msdelay(200);
            lcd_cmd(0x01);
        }
        if (x == '4')
        {
            light = 0;
            lcd_data('L');
            lcd_data('I');
            lcd_data('G');
            lcd_data('H');
            lcd_data('T');
            lcd_data('O');
            lcd_data('F');
            lcd_data('F');
            msdelay(200);
            lcd_cmd(0x01);
        }

        if (x == '5')
        {
            television = 1;
            lcd_data('T');
            lcd_data('V');
            lcd_data(' ');
            lcd_data('O');
            lcd_data('N');
            msdelay(200);
            lcd_cmd(0x01);
        }
        if (x == '6')
        {
            television = 0;
            lcd_data('T');
            lcd_data('V');
            lcd_data(' ');
            lcd_data('O');
            lcd_data('F');
            lcd_data('F');
            msdelay(200);
            lcd_cmd(0x01);
        }
        if (x == '7')
        {
            machine = 1;
            lcd_data('M');
            lcd_data('C');
            lcd_data(' ');
            lcd_data('O');
            lcd_data('N');
            msdelay(200);
            lcd_cmd(0x01);
        }
        if (x == '8')
        {
            machine = 0;
            lcd_data('M');
            lcd_data('C');
            lcd_data(' ');
            lcd_data('O');
            lcd_data('F');
            lcd_data('F');

            msdelay(200);
            lcd_cmd(0x01);
        }
        if (x == '0')
        {
            fan = 0;
            light = 0;
            television = 0;
            machine = 0;
        }
        if (x == '9')
        {
            fan = 1;
            light = 1;
            television = 1;
            machine = 1;
        }
    }
}
