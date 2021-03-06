//
//  make_pack.hpp
//  HuaJiao
//
//  Created by LowBoy on 2017/8/12.
//  Copyright © 2017年 @LowBoyTeam. All rights reserved.
//

#ifndef make_pack_hpp
#define make_pack_hpp

#include <stdio.h>

#include "protocol/ChatRoom.pb.h"
#include "protocol/CommunicationData.pb.h"

#include "global.hpp"
#include "crypto/md5/md5.h"

inline void makeVerfCode(const std::string& text,std::string *outstr)
{
    *outstr = md5(text + "360tantan@1408$").toStr().substr(24, 8).c_str();
}

void new_request_message(PACKET_TYPE msgid, void* req_object, qihoo::protocol::messages::Message *message);

//_sendHandshakePack
std::string new_hand_shark_pack();

//_sendLoginPack
std::string new_login_pack();

//_sendJoinChatroomPack
std::string new_join_chat_room_pack();

#endif /* make_pack_hpp */
