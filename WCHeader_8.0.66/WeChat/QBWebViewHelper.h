@interface QBWebViewHelper : NSObject

+ (void)initialize;
+ (BOOL)isQQNetChangedON;
+ (void)checkUpdate;
+ (void)checkWupRequestWhenGUIDIsReady;
+ (void)excuteWupRequestIfNecessary;
+ (void)doInSubThread:(id /* block */)a0;
+ (void)asyncInitModules;
+ (id)serviceDic;
+ (void)updateWhiteLists;
+ (void)updatePreferences;
+ (void)checkApnAndGUID;
+ (void)doEnterBackground:(id)a0;
+ (void)willEnterForeground:(id)a0;
+ (void)startProxyWithWorker:(Class)a0;
+ (void)startProxyWithWorkerWithInitialize:(Class)a0 initialize:(BOOL)a1;
+ (void)checkInitialize;
+ (id)getVersion;
+ (BOOL)isQBWebViewRequest:(id)a0;
+ (id)processCachedResponse:(id)a0 forRequest:(id)a1;
+ (void)downloadProzyInfoWithCompletion:(id /* block */)a0;
+ (void)setCustomUA:(id)a0;
+ (void)URLCacheDidFetchCacheResponse:(id)a0 forRequest:(id)a1;
+ (void)clearCookiesCompletionHandler:(id /* block */)a0;
+ (void)clearCachesCompletionHandler:(id /* block */)a0;
+ (void)cleanAndDlWK:(id /* block */)a0;

@end
