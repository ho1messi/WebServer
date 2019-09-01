#pragma once

#include "ServerConfig.h"

class WebServer {
public:
    WebServer(ServerConfig config);
    virtual ~WebServer();

    void exec();
};
