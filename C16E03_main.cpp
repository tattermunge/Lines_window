
//#include "../lib_files/Graph.h"
#include "../../lib_files/Simple_window.h"


//#include "../../lib_files/My_window.h"
using namespace Graph_lib;
int main()
try {

	Point tl(150, 150);
	/*Graph_lib::Img_window imb(tl, 800, 600, "Chapter 16 Exercise 4");*/
	Simple_window win(tl, 800, 600, "test");
	ostringstream oss;
	oss << "screen size: " << x_max() << '*' << y_max() << ' '
		<< "window size: " << win.x_max() << '*' << win.y_max();
	Text sizes{ Point{150,150},oss.str() };
	sizes.set_color(Color::black);
	win.attach(sizes);
	
	/*imb.wait_for_button();*/
	win.wait_for_button();
}
catch (exception& e) {
	cerr << "exception: " << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "Some exception\n";
	return 2;
}

