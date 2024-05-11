#include "sdlcpp.h"

namespace ns3 {

// NS_LOG_COMPONENT_DEFINE ("MmWavePhy");

namespace mmwave {
bool XappSDL::set_data(shareddatalayer::SyncStorage *, std::string key, std::string value){
	try{
        DataMap dmap;
		Key k = key;
		Data d = value;
		dmap.insert({k,d});
		Namespace ns(sdl_namespace);
		sdl->set(ns, dmap);
	}
	catch(...){
		return false;
	}
	return true;
}

// void XappSDL::get_data(shareddatalayer::SyncStorage *sdl){
// 	Namespace ns(sdl_namespace);
// 	DataMap dmap;
// 	std::string prefix="";
// 	Keys K = sdl->findKeys(ns, prefix);	// just the prefix
// 	DataMap Dk = sdl->get(ns, K);
// 	for(auto si=K.begin();si!=K.end();++si){
// 		std::vector<uint8_t> val_v = Dk[(*si)]; // 4 lines to unpack a string
// 		char val[val_v.size()+1];				// from Data
// 		int i;
// 		for(i=0;i<val_v.size();++i) val[i] = (char)(val_v[i]);
// 		val[i]='\0';
// 		printf("KEYS and Values %s = %s\n",(*si).c_str(), val);
// 	}

// }

}

}
