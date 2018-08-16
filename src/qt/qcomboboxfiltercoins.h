#ifndef QCOMBOBOCFILTERCOINS_H
#define QCOMBOBOCFILTERCOINS_H
 
#include <QtGui>
#include <QMessageBox>

//Derived Class from QComboBox
class QComboBoxFilterCoins: public QComboBox
{
  Q_OBJECT
  public:    
	QComboBoxFilterCoins(QWidget* parent):QComboBox(parent)
	{
	  this->setParent(parent);
	  connect(this , SIGNAL(currentIndexChanged(int)),this,SLOT(handleSelectionChanged(int)));
	};
	~ QComboBoxFilterCoins(){};	
	
  public slots:
	//Slot that is called when QComboBox selection is changed
	void handleSelectionChanged(int index)
	{
	    QMessageBox* msg = new QMessageBox();
	    msg->setWindowTitle("Hello !");	    
	    msg->setText("Selected Index is :"+QString::number(index));	     
	    msg->show();	  
	};
  
};
#endif