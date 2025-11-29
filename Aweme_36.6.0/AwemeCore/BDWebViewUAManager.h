@interface BDWebViewUAManager : NSObject

+ (BOOL)bdEnableUAFetchWithKV;
+ (BOOL)enableUAFetch;
+ (id)fetchSystemUserAgentFromeCache;
+ (void)fetchLastestSystemUserAgentWithCompletion:(id /* block */)a0;
+ (void)consumeCallbacks;
+ (long long)uaFetchTime;
+ (void)executeWhenIdleWithTask:(id /* block */)a0;
+ (void)fetchSystemUserAgentWithCompletion:(id /* block */)a0;

@end
