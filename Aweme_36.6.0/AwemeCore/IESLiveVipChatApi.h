@class IESLiveVipChatEntranceCacheManager;

@interface IESLiveVipChatApi : HTSLiveApi

@property (retain, nonatomic) IESLiveVipChatEntranceCacheManager *cacheManager;

- (void)requestVipChatEntranceWithRoomID:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableEntranceCache;
- (long long)apiFrequency;
- (void)p_getVipChatEntranceWithRoomID:(id)a0 frequency:(long long)a1 completion:(id /* block */)a2;
- (void)p_requestVipChatEntranceWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)p_cacheResponse:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
