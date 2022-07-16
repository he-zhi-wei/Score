#include"App.cpp"
int main()
{
	App app;
	string a[5] = { "jack", "tom", "Jane" ,"kangkang","peiqi"};
	app.initialJudge(a, 5);
	string b[4] = { "a","b","c","d" };
	app.intialPlayer(b, 4);

	app.printAll();

	return 0;
}