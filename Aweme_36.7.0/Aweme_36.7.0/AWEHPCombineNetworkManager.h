@interface AWEHPCombineNetworkManager : NSObject

@property (nonatomic) long long sessionID;

- (void)sendRequests:(id)a0 completion:(id /* block */)a1;
- (void)p_preSendRequests:(id)a0 completion:(id /* block */)a1;
- (void)p_sendUrlString:(id)a0 body:(id)a1 sessionID:(long long)a2 scene:(long long)a3 requests:(id)a4 monitorExtra:(id)a5 completion:(id /* block */)a6;
- (void)p_requestCombineDataWithURL:(id)a0 requestScene:(long long)a1 headerBody:(id)a2 sessionID:(long long)a3 userID:(id)a4 retryCount:(long long)a5 completion:(id /* block */)a6;
- (id)init;

@end
