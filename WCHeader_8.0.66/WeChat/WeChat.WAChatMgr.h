@interface WeChat.WAChatMgr : MMUserService <IMsgExt, MMServiceProtocol> {
    void /* unknown type, empty encoding */ mmkv;
}

- (id)generateAllPageModeWeappSource:(id)a0;
- (BOOL)checkChatRoomInfos:(id)a0 containsUsername:(id)a1;
- (id)getChatRoomInfos:(id)a0;
- (id)generateMMKVKeyFor:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
