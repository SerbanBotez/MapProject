#include "Maps.cpp"

int main()
{
	Maps m1;
	m1.AddElements(1000000);
	m1.PrintOperationTime("Inserting");
	m1.AccessElements(1000000);
	m1.PrintOperationTime("Accessing");
	m1.DeleteElements(500000);
	m1.PrintOperationTime("Deleting");

	return 0;
}