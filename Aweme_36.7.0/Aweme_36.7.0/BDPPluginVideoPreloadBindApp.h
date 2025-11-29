@class NSString, NSMutableDictionary;

@interface BDPPluginVideoPreloadBindApp : BDPBridgeInstancePlugin <BDPVideoPreloadStateDelegate>

@property (nonatomic) long long lastestTaskID;
@property (retain, nonatomic) NSMutableDictionary *preloadTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)generateTaskID;
- (void)addPreloadTaskWithModel:(id)a0;
- (id)bitrateAdaptive:(id)a0 uniqueID:(id)a1;
- (id)generateCacheKeyWithAppId:(id)a0 src:(id)a1;
- (BOOL)enablePreloadAddRefer:(id)a0;
- (void)removePreloadTaskWithTaskId:(long long)a0;
- (void)bdp_videoPreloadStateChange:(long long)a0 info:(id)a1;
- (void)createPreloadVideoTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operatePreloadVideoTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)subscribeHandlerToService:(id)a0 data:(id)a1 model:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
