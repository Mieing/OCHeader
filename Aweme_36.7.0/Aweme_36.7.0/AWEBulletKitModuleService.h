@class NSString, NSMutableDictionary;

@interface AWEBulletKitModuleService : HTSService <AWEUserMessage, AWEBulletKitModuleService>

@property (retain, nonatomic) NSMutableDictionary *preConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)themeDidChange:(id)a0;
+ (id)additionalRequestHeaderFields;
+ (void)bulletSetup;
+ (void)setupRouter;
+ (void)__internalSetup;
+ (void)registerOldBridge;
+ (void)setupGlobalContext:(id)a0;
+ (void)setupXpoolConfig;
+ (void)setupLynxResourceProvider;
+ (void)setupSecure;
+ (void)_aweLazyRegisterLoad;
+ (void)setupSetting;

- (void)onServiceInit;
- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)preloadWithSchema:(id)a0;
- (void)prefetchWithSchema:(id)a0;
- (void)setAdInfo:(id)a0 WithLynxView:(id)a1;
- (id)adInfoWithLynxView:(id)a0;
- (id)containerBuilder;
- (id)annieXPreserveDataManager;
- (void)triggerPreOptimizeWithStrategy:(unsigned long long)a0 schema:(id)a1;
- (BOOL)enableNewPrefetchWithSchema:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
