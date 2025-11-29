@class EcClient;

@interface EcNetworkManager : NSObject

@property (weak, nonatomic) EcClient *client;

- (id)httpURL:(id)a0;
- (id)commonHeader;
- (id)post:(id)a0 headerField:(id)a1 bodyParam:(id)a2 ecTask:(id)a3 complete:(id /* block */)a4;
- (void)ttNetInit;
- (id)downloadWithRequest:(id)a0 parameters:(id)a1 headerField:(id)a2 progress:(id *)a3 destination:(id)a4 completionHandler:(id /* block */)a5;
- (id)uploadRequest:(id)a0 method:(id)a1 offset:(long long)a2 partSize:(long long)a3 path:(id)a4 headerField:(id)a5 timeout:(long long)a6 complete:(id /* block */)a7;
- (id)PostSyncTagcommands:(id)a0 complete:(id /* block */)a1;
- (id)post:(id)a0 headerField:(id)a1 bodyParam:(id)a2 complete:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
