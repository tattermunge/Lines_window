#include"../../lib_files/Lines_window_2.h"

	int main()
		try {
		/*using namespace Graph_lib;*/
		Graph_lib::Lines_window win{ Graph_lib::Point{100,100},600,400,"lines" };
		return Graph_lib::gui_main();
	}
	catch (exception& e) {
		cerr << "exception: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Some exception\n";
		return 2;
	}
