@class IESForestKit;

@interface PuzzleGeckoResourceLoader : NSObject

@property (class, readonly, nonatomic) IESForestKit *forestKit;

+ (id)addCommonParamsForCDNMultiVersionURLString:(id)a0;
+ (id)forestSessonIdWithContext:(id)a0;
+ (BOOL)isInList:(id)a0 urlList:(id)a1;
+ (void)updateForestGeneralMemCacheSize;
+ (void)updateForestPreloadMemCacheSize;
+ (BOOL)isCDNMultiVersionResource:(id)a0;
+ (void)addDefaultCDNMultiVersionDomains:(id)a0;
+ (BOOL)enablePreloadBySettings;
+ (id)preloadErrorMsgWithCode:(long long)a0;
+ (id)geckoResourcePathForURLString:(id)a0 context:(id)a1;
+ (void)openForestSessionWithUrl:(id)a0 kernalType:(unsigned long long)a1 context:(id)a2 params:(id)a3;
+ (void)preload:(id)a0 kernalType:(unsigned long long)a1 params:(id)a2 context:(id)a3;
+ (BOOL)enableUseForestResourceLoader:(id)a0 kernalType:(unsigned long long)a1 params:(id)a2;
+ (BOOL)enableUseForestResourceLoaderForLatch:(id)a0 kernalType:(unsigned long long)a1 params:(id)a2;
+ (id)prefetchResModeConfig:(id)a0;
+ (long long)enableUseForestResourceLoaderAndPreload:(id)a0 kernalType:(unsigned long long)a1 params:(id)a2;
+ (void)_preloadLynx:(id)a0 kernalType:(unsigned long long)a1 params:(id)a2 context:(id)a3 preloadSchemePara:(long long)a4 anniePretchResModeConfig:(id)a5 monitorBlock:(id /* block */)a6;
+ (void)_preloadWeb:(id)a0 kernalType:(unsigned long long)a1 params:(id)a2 context:(id)a3 preloadSchemePara:(long long)a4 monitorBlock:(id /* block */)a5;
+ (id)processedUrl:(id)a0;
+ (id)getPreloadJsonUrl:(id)a0 channel:(id)a1;
+ (BOOL)enableForestSession:(id)a0 kernalType:(unsigned long long)a1 params:(id)a2;
+ (id)generateSessionIdWithContext:(id)a0 params:(id)a1;
+ (void)closeSessionWithContext:(id)a0;
+ (BOOL)_enableUseForestResourceLoader:(id)a0 kernalType:(unsigned long long)a1;
+ (id)geckoResourceForURLString:(id)a0 context:(id)a1;
+ (long long)webForestMode:(id)a0 params:(id)a1;
+ (void)initialize;
+ (id)defaultConfig;

- (id)fetchResourceWithURL:(id)a0 requestParam:(id)a1 completion:(id /* block */)a2;
- (id)fetchResourceWithURL:(id)a0 completion:(id /* block */)a1;
- (id)fetchResourceSyncAsPossibleWithURL:(id)a0 requestParam:(id)a1 completion:(id /* block */)a2;

@end
