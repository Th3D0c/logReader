#ifndef IDRIVER_I
#define IDRIVER_I


class IDriver {
	public:
	virtual std::vector<std::string> splitLine() = 0;
};
#endif // IDRIVER_I ///:~
