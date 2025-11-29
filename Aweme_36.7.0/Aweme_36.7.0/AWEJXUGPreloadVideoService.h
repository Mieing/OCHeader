@class NSString, NSMutableDictionary;

@interface AWEJXUGPreloadVideoService : HTSService <AWEJXUGPreloadVideoService>

@property (retain, nonatomic) NSMutableDictionary *preloadModelMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jxVideoPreloadBridgeConfig;

- (void)didReceiveMemoryWarningNotification:(id)a0;
- (void)setupObserver;
- (void)preloadVideo:(id)a0 forScene:(id)a1;
- (void)cancelPreloadVideo:(id)a0 forScene:(id)a1;
- (void)cancelAllPreloadVideosForScene:(id)a0;
- (id)modelWithItemId:(id)a0 forScene:(id)a1;
- (void)updateVideoModel:(id)a0 forScene:(id)a1;
- (void)cancelPreloadVideoWithItemId:(id)a0;
- (long long)defaultPreloadKb;
- (long long)maxPreloadKb;
- (BOOL)enableHandleMemoryWarning;
- (BOOL)enableBridge;
- (BOOL)enableFirstFrame;
- (long long)smallCardPreloadSize:(id)a0;
- (void)tryPreloadVideo:(id)a0 preloadSize:(long long)a1 priorityLevel:(long long)a2;
- (BOOL)shouldCacheNotPreloadedModel;
- (void)startPreloadVideo:(id)a0 preloadSize:(unsigned long long)a1 group:(id)a2 priorityLevel:(long long)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (long long)smallCardPreloadKb;
- (long long)smallCardPreloadSecond;
- (long long)preloadSizeWithModel:(id)a0 second:(long long)a1 defaultPreloadSize:(long long)a2;
- (void)p_cancelPreloadWithModel:(id)a0 forScene:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
