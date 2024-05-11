// Developed by Ali Yaghoubian

#ifndef SDL_H
#define SDL_H

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include <set>
#include <sdl/syncstorage.hpp>
#include <mdclog/mdclog.h>

using namespace std;
using Namespace = std::string;
using Key = std::string;
using Data = std::string;
using DataMap = std::map<Key, Data>;
using Keys = std::set<Key>;


class XappSDL{
private:
	std::string sdl_namespace;
	std::unique_ptr<shareddatalayer::SyncStorage> sdl(shareddatalayer::SyncStorage::create());

public:
	XappSDL(std::string ns) { sdl_namespace=ns; }
	// void get_data(shareddatalayer::SyncStorage *);
	bool set_data(shareddatalayer::SyncStorage *);
};

#endif /* SDL_H */
