void delay_ff()  // fully fixed delay
{
    unsigned int i,j;
	
    for(i=0;i<80;i++)
    for(j=0;j<120;j++);
}

void delay_pf(unsigned int x)  // partial variable delay
{
	unsigned int i,j;
	
	for(i=0;i<x;i++)
	for(j=0;j<50;j++);
}

void delay_fv(unsigned int x,y)  // fully variable delay
{
	unsigned int i,j;
		
	for(i=0;i<x;i++)
	for(j=0;j<y;j++);
}