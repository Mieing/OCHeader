@interface AWESearchAllManager : AWESearchBaseManager

- (void)followUser:(id)a0 completion:(id /* block */)a1;
- (void)unfollowUser:(id)a0 completion:(id /* block */)a1;
- (void)followUser:(id)a0 channelID:(long long)a1 completion:(id /* block */)a2;
- (void)unfollowUser:(id)a0 channelID:(long long)a1 completion:(id /* block */)a2;

@end
