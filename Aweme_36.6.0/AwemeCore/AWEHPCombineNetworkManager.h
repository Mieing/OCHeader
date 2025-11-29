@class NSLock;

@interface AWEHPCombineNetworkManager : NSObject

@property (nonatomic) long long sessionID;
@property (retain, nonatomic) NSLock *lock;

- (void)sendRequests:(id)a0 completion:(id /* block */)a1;
- (void)p_sendRequests:(id)a0 completion:(id /* block */)a1;
- (long long)p_incrementSessionID;
- (long long)p_getSessionID;
- (void)p_requestCombineDataWithURL:(id)a0 requestScene:(id)a1 headerBody:(id)a2 sessionID:(long long)a3 userID:(id)a4 retryCount:(long long)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (id)init;

@end
