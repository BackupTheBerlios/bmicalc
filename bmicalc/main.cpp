/*
	BMIcalc (c)2004 Jonas Björk, jonas@jonasbjork.net

	Licensed under Q Public License.
*/
#include <qapplication.h>
#include "form1.h"

int main( int argc, char ** argv )
{
    QApplication a( argc, argv );
    Form1 w;
    w.show();
    a.connect( &a, SIGNAL( lastWindowClosed() ), &a, SLOT( quit() ) );
    return a.exec();
}
