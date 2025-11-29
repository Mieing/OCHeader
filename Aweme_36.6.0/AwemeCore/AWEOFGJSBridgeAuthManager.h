@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEOFGJSBridgeAuthManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *authCacheDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *authMethodAccessLock;
@property (copy, nonatomic) NSArray *innerConfigList;
@property (retain, nonatomic) NSMutableDictionary *pageInfoDict;

+ (id)sharedManager;

- (id)cacheKeyWithURL:(id)a0;
- (BOOL)isAuthorizedForMethod:(id)a0 withInfo:(id)a1;
- (void)updateAuthConfigWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)loadInnerConfigIfNeed;
- (BOOL)isSecondPartyWithURL:(id)a0;
- (id)pageInfoForKey:(id)a0;
- (id)findPageInfoInSecondConfigWithUrl:(id)a0;
- (unsigned long long)_isAuthorizedForMethod:(id)a0 withInfo:(id)a1;
- (id)hostForURLString:(id)a0;
- (void)showToastWithMethodName:(id)a0 hostName:(id)a1 errCode:(long long)a2 isBlackList:(BOOL)a3;
- (long long)checkAuthFromSettings:(id)a0 withInfo:(id)a1;
- (BOOL)shouldClientKeyInterceptWithJsbMethod:(id)a0 info:(id)a1 party:(id)a2;
- (id)filterPrefix:(id)a0;
- (BOOL)matchString:(id)a0 withRegularString:(id)a1;
- (BOOL)isClientKeyMatch:(id)a0 inputUrl:(id)a1 party:(id)a2 configClientKey:(id *)a3;
- (BOOL)enableCheckJSBHole;
- (void)prepareAuthRequestWithCacheKey:(id)a0 clientKey:(id)a1 completion:(id /* block */)a2 isDuplicatedReqeust:(BOOL *)a3;
- (void)udpateAuthMethodWithCacheKey:(id)a0 jsMethodList:(id)a1;
- (void)invokeAuthUpdateCompletionWithCacheKey:(id)a0 error:(id)a1;
- (BOOL)shouldInterceptWithURL:(id)a0 methodName:(id)a1;
- (id)errorWithCode:(long long)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
