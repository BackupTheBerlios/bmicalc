/****************************************************************************
** ui.h extension file, included from the uic-generated form implementation.
**
** If you wish to add, delete or rename functions or slots use
** Qt Designer which will update this file, preserving your code. Create an
** init() function in place of a constructor, and a destroy() function in
** place of a destructor.
*****************************************************************************/
#include <qmessagebox.h>

void Form1::raknaBMI()
{
    double bmi;
    
    double cm = inCM->text().toDouble();
    double kg = inKG->text().toDouble();
    
    if( cm < 1 || kg < 1 )
    {
	QMessageBox::information (this, "BMIcalc", "Du måste ange längd och vikt!");
    } 
    
    else {
      
    cm = cm/100;
    bmi = kg/(cm*cm);
    
    QString bmiut;
    bmiut = bmiut.setNum( bmi, 'f', 2 );
    utBMI->setText("<h1>" + bmiut +"</h1>");
    
    if( bmi<19.9 ) {
	txtBMIInfo->setText("<h1>Underviktig</h1>");
	txtBMIInfo->setPaletteForegroundColor(green);
    }
    else if( bmi<24.9 ) {
	txtBMIInfo->setText("<h1>Normalvikt</h1>");
	txtBMIInfo->setPaletteForegroundColor(green);
    }
    else if( bmi<29.9 )
    {
	txtBMIInfo->setText("<h1>Måttlig övervikt</h1>");
	txtBMIInfo->setPaletteForegroundColor(green);
    }
    else if( bmi<34.9 )
    {
	txtBMIInfo->setText("<h1>Fetma</h1>");
	txtBMIInfo->setPaletteForegroundColor(red);
    }
    else if( bmi<39.9 )
    {
	txtBMIInfo->setText("<h1>Kraftig fetma</h1>");
	txtBMIInfo->setPaletteForegroundColor(red);
    }
    else if( bmi>40 )
    {
	txtBMIInfo->setText("<h1>Svår fetma</h1>");
	txtBMIInfo->setPaletteForegroundColor(red);
    }
}    
}


