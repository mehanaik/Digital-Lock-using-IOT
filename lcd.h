sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
sfr lcd=0x90;

void lcd_display(unsigned int x)  // lcd display fuction
{
	unsigned int i;
	lcd=x;
	rs=1;
	rw=0;
	en=1;
	for(i=0;i<100;i++);
	en=0;
 
}
 
void cmd(unsigned char m)  // lcd command fuction
{
	unsigned int i;
	lcd=m;
	rs=0;
	rw=0;
	en=1;
	for(i=0;i<10;i++);
	en=0;
}
 
void lcd_ini()   // lcd initilize
{
	cmd(0x38);
	cmd(0x0e);
	cmd(0x01);
	cmd(0x06);
	cmd(0x90);
}	
void lcd_str(unsigned char *str)   // display string on lcd
{
	while(*str!='\0')  
	{
	  lcd_display(*str);
	  str++;
	}
}