@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEDataLayerNetworkLogicManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logicQueue;

+ (id)sharedManager;

- (id)fetchDataWithNetworkProvider:(id)a0 config:(id)a1 completion:(id /* block */)a2;
- (void)createRequestWithWrapper:(id)a0;
- (void)getCacheWithWrapper:(id)a0 completion:(id /* block */)a1;
- (void)clearCacheWithWrapper:(id)a0;
- (id)networkCacheIdentifierWithNetworkProvider:(id)a0;
- (id)requestConfigFromFetchDataConfig:(id)a0;
- (void).cxx_destruct;

@end
