@class NSMutableDictionary;

@interface BDPURLInterceptorManager : NSObject

@property (class, readonly, nonatomic) BDPURLInterceptorManager *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *cachedInterceptors;

+ (id)bdp_intercepterWithType:(unsigned long long)a0;

- (void)startFileInterceptionWithWebview:(id)a0 config:(id)a1 type:(unsigned long long)a2;
- (id)addJSSDKFolderMaskForPath:(id)a0 type:(unsigned long long)a1 scheme:(id)a2;
- (void)registerVirtualPath:(id)a0 forUniqueId:(id)a1 type:(unsigned long long)a2 scheme:(id)a3;
- (id)generateVirtualFolderPath:(unsigned long long)a0 scheme:(id)a1;
- (void)unregisterVirtualPath:(id)a0 type:(unsigned long long)a1 scheme:(id)a2;
- (void)startFileInterceptionWithType:(unsigned long long)a0;
- (id)bdp_interceptorWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
