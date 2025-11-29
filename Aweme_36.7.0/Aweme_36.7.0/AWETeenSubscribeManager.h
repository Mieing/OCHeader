@interface AWETeenSubscribeManager : NSObject

+ (void)updateSubscribeStatus:(long long)a0 blockStatus:(long long)a1 userID:(id)a2 secUserID:(id)a3 trackerParams:(id)a4 completion:(id /* block */)a5;
+ (void)updateSubscribeStatus:(long long)a0 blockStatus:(long long)a1 userID:(id)a2 secUserID:(id)a3 enterFrom:(id)a4 enterMethod:(id)a5 completion:(id /* block */)a6;

@end
