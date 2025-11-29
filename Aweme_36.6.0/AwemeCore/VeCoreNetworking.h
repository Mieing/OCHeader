@class NSArray;

@interface VeCoreNetworking : NSObject

@property (retain, nonatomic) NSArray *opaqueData;

+ (id)getWithURL:(id)a0 params:(id)a1 headers:(id)a2 auth:(id)a3 config:(id)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6;
+ (void)reportRetryEventWithHost:(id)a0 path:(id)a1;
+ (void)reportRetryResultEventWithHost:(id)a0 config:(id)a1 error:(id)a2;
+ (id)postWithURL:(id)a0 params:(id)a1 headers:(id)a2 auth:(id)a3 config:(id)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6;
+ (BOOL)isTokenExpireErrorWithResponse:(id)a0;
+ (id)getWithURL:(id)a0 params:(id)a1 headers:(id)a2 config:(id)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5;
+ (id)postWithURL:(id)a0 params:(id)a1 headers:(id)a2 config:(id)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5;
+ (id)sharedInstance;

- (void)receiveSettingUpdateNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
