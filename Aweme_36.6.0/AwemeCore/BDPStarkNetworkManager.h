@class BDPStarkNetworkTaskQueue;

@interface BDPStarkNetworkManager : NSObject

@property (retain, nonatomic) BDPStarkNetworkTaskQueue *taskQueue;

+ (id)shareManager;

- (void)downloadImmediate:(id)a0 url:(id)a1 completionHandler:(id /* block */)a2 downloadProgressHandler:(id /* block */)a3;
- (void)immediateStartTask:(id)a0;
- (id)createDownloadTask:(id)a0 url:(id)a1 completionHandler:(id /* block */)a2 downloadProgressHandler:(id /* block */)a3;
- (void)download:(id)a0 url:(id)a1 completionHandler:(id /* block */)a2 downloadProgressHandler:(id /* block */)a3;
- (id)download:(id)a0 url:(id)a1 immediate:(BOOL)a2 completionHandler:(id /* block */)a3 downloadProgressHandler:(id /* block */)a4;
- (void).cxx_destruct;

@end
