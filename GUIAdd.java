import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class GUIAdd {

	public static void main(String[] args) {
		
		Addition obj = new Addition();

	}

}
class Addition extends JFrame implements ActionListener
{
	JTextField t1,t2;
	JButton b;
	JLabel l ;
	
	public Addition()
	{
		t1 = new JTextField(15);
		t2 = new JTextField(15);
		b = new JButton("Add");
		l = new JLabel("Result will be here");
		
		add(t1);
		add(t2);
		add(b);
		add(l);
		
		b.addActionListener(this);
		
		setLayout(new FlowLayout());
		setVisible(true);
		setSize(400,400);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		
	}
	public void actionPerformed(ActionEvent ae)
	{
		int num1,num2;
		
		num1 = Integer.parseInt(t1.getText());
		num2 = Integer.parseInt(t2.getText());
		
		int f =  num1+num2; 
		l.setText("Value: "+f);
	}
}