@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEOFGNativeAuthManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *authCacheDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *authMethodAccessLock;
@property (retain, nonatomic) NSMutableDictionary *miniAppMemoryCache;

+ (id)sharedManager;

- (BOOL)isAuthorizedForClientKey:(id)a0 appID:(id)a1 scope:(id)a2 error:(id *)a3;
- (id)localAuthCacheDirectory;
- (id)readLocalAuthMethodCache;
- (BOOL)getMiniAppCacheWithAppID:(id)a0 scope:(id)a1;
- (BOOL)_isAuthorizedForClientKey:(id)a0 appID:(id)a1 scope:(id)a2 error:(id *)a3;
- (void)setMiniAppCacheWithAppID:(id)a0 scope:(id)a1 isAuth:(BOOL)a2;
- (BOOL)isValidWithClientKey:(id)a0 appID:(id)a1 error:(id *)a2;
- (id)localAuthCacheFile;
- (id)errorWithCode:(long long)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
