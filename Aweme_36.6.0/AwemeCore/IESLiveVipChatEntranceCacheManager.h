@interface IESLiveVipChatEntranceCacheManager : NSObject

- (void)getCacheWithUserID:(id)a0 frequency:(long long)a1 completion:(id /* block */)a2;
- (void)cacheResponse:(id)a0 time:(long long)a1 userID:(id)a2;

@end
