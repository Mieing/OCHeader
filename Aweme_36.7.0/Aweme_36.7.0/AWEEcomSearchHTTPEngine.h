@class NSHashTable, NSString, AWENetworkRequest, AWEEcomSearchRequest, AWEEcomSearchChunkProcessorManager, CSPChunkRequestManager, NSObject, AWEEcomSearchChunkContext;
@protocol AWEEcomSearchStrategyProtocol, AWEHttpTask, AWEEcomSearchHTTPEngineConfigurationProtocol, AWEEcomSearchDataStoreProtocol, OS_dispatch_queue;

@interface AWEEcomSearchHTTPEngine : NSObject <CSPChunkRequestDelegate, AWEEcomSearchChunkProcessorManagerDelegate, AWEEcomSearchHTTPEngineProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;
@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSObject<AWEEcomSearchHTTPEngineConfigurationProtocol> *searchConfiguration;
@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestManager;
@property (retain, nonatomic) AWEEcomSearchRequest *currentSearchRequest;
@property (retain, nonatomic) AWENetworkRequest *networkRequest;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (retain, nonatomic) AWEEcomSearchChunkProcessorManager *chunkProcessorManager;
@property (retain, nonatomic) AWEEcomSearchChunkContext *chunkContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<AWEEcomSearchDataStoreProtocol> *dataStore;
@property (retain, nonatomic) NSObject<AWEEcomSearchStrategyProtocol> *searchStrategy;

- (void)didReceiveJSON:(id)a0;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)didReceiveChunk:(id)a0;
- (void)didFailToProcessChunk:(id)a0 withError:(id)a1;
- (void)didProcessChunk:(id)a0 withResult:(id)a1;
- (id)initWithConfig:(id)a0 dataStore:(id)a1;
- (void)registerChunkProcessorsWithConfig:(id)a0;
- (void)notifyListenersSearchDidStart:(id)a0;
- (void)notifyListenersSearchReceivedResponse:(id)a0 error:(id)a1;
- (id)chunkModelWithDict:(id)a0;
- (void)notifyListenersSearchDidComplete:(id)a0 error:(id)a1;
- (void)registerSearchListener:(id)a0;
- (void)removeSearchListener:(id)a0;
- (void)handleOriginalChunkData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearData;
- (void)cancelRequest:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)sendRequest:(id)a0 completion:(id /* block */)a1;

@end
