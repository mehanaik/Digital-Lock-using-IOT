sbit r1=P0^0; // row 1
sbit r2=P0^1; // row 2
sbit r3=P0^2; // row 3
sbit r4=P0^3; // row 4
sbit c1=P0^4; // column 1
sbit c2=P0^5; // column 2
sbit c3=P0^6; // column 3
sbit c4=P0^7; // column 4

unsigned int c;

char keypad1()
{	
	P2=0xff;
	while(1)
	{
		r1=0;
		r4=1;
		if(c1==0)
		{
			c='7';
			delay_pf(500);
			return c;
		}
		else if(c2==0)
		{
			c='8';
			delay_pf(500);
			return c;
		}
		else if(c3==0)
		{
			c='9';
			delay_pf(500);
			return c;
		}
		else if(c4==0)
		{
			c='/';
			delay_pf(500);
			return c;
		}

		r1=1;
		r2=0;
		if(c1==0)
		{
			c='4';
			delay_pf(500);
			return c;
		}
		else if(c2==0)
		{

			c='5';
			delay_pf(500);
			return c;
		}
		else if(c3==0)
		{
			c='6';
			delay_pf(500);
			return c;
		}
		else if(c4==0)
		{
			c='*';
			delay_pf(500);
			return c;
		}

		r2=1;
		r3=0;
		if(c1==0)
		{
			c='1';
			delay_pf(500);
			return c;
		}
		else if(c2==0)
		{

			c='2';
			delay_pf(500);
			return c;
		}
		else if(c3==0)
		{
			c='3';
			delay_pf(500);
			return c;
		}
		else if(c4==0)
		{
			c='-';
			delay_pf(500);
			return c;
		}
		
		r3=1;
		r4=0;
		if(c1==0)
		{
			delay_pf(500);
			cmd(0x01);
		}
		else if(c2==0)
		{

			c='0';
			delay_pf(500);
			return c;
		}
		else if(c3==0)
		{
			c='=';
			delay_pf(500);
			return c;
		}
		else if(c4==0)
		{
			c='+';
			delay_pf(500);
			return c;
		}
	}
}