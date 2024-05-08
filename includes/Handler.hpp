#ifndef __HANDLER_HPP_
#define __HANDLER_HPP_

#include "Server.hpp"

class Handler {
public:
	Handler(Server&);
	~Handler();
	void run(void);
	Server& getServer(void);

private:
	int _kq;
	std::vector<struct kevent> _event_list;
	struct kevent _monitor[8];
	std::map<int, std::string > _msg_map;
	Server& _server;

	void figureCommand(int, std::pair<int, std::vector<std::string> >&);
	bool servReceive(int);
	void signalQuit(int);
};


#endif /* __HANDLER_HPP_ */