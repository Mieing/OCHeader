@class NSString, NSDictionary, NSHashTable, NSObject;
@protocol IESIMBulletContainerPreloadManagerProtocol, OS_dispatch_semaphore;

@interface IESIMBulletContainerManager : NSObject <IESIMBulletContainerPreloadDelegate, IESIMUserServiceMessage, IESIMBulletContainerManagerProtocol>

@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *delegatesLock;
@property (retain) NSDictionary *reusePoolConfigs;
@property (retain) NSDictionary *reusePools;
@property (nonatomic) BOOL globalReusePoolEnabled;
@property (retain, nonatomic) id<IESIMBulletContainerPreloadManagerProtocol> preloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)clearReusePoolWithBulletScene:(id)a0;
- (void)setupReusePoolConfig:(id)a0 bulletScene:(id)a1;
- (id)defaultReuseIdentifierWithSchema:(id)a0;
- (id)preloadDefaultConfig;
- (id)reusePoolDefaultConfig;
- (BOOL)tryPreloadBulletItemsWithContext:(id)a0;
- (id)aBulletCellContentView;
- (BOOL)bulletTemplateCanReuseWithSchema:(id)a0;
- (id)anIMDynamicPatchModel;
- (id)reuseIdentifierWithSchema:(id)a0 bulletScene:(id)a1;
- (BOOL)reusePoolFullWithKey:(id)a0 bulletScene:(id)a1;
- (BOOL)reusePoolContainsBulletContainerWithContext:(id)a0 bulletScene:(id)a1;
- (id)modifiedSchemaFromOriginalSchema:(id)a0 bulletScene:(id)a1;
- (id)identifiersWithList:(id)a0 enableEmptyBundle:(BOOL)a1;
- (void)p_setupIMBulletReusePoolConfig;
- (void)p_setupReusePoolConfig:(id)a0 bulletScene:(id)a1;
- (void)p_tryClearReusePoolWithBulletScene:(id)a0;
- (id)p_reusePoolWithBulletScene:(id)a0;
- (id)p_tryInitialReusePoolWithBulletScene:(id)a0;
- (BOOL)preloadWithBulletItem:(id)a0 preloadContext:(id)a1;
- (void)saveBulletContainer:(id)a0 withKey:(id)a1 bulletScene:(id)a2;
- (void)resetReusePools;
- (id)aBulletContainer;
- (BOOL)bulletTemplateCanReuseWithKey:(id)a0;
- (BOOL)bulletTemplateCanReuseWithKey:(id)a0 reuseIdentifiersType:(long long)a1;
- (id)forbiddenReuseIdentifiersWithType:(long long)a0;
- (id)allowedReuseIdentifiersWithType:(long long)a0;
- (id)p_extraParamsForSchema:(id)a0;
- (id)p_reuseIdentifierWithInfoDictionary:(id)a0 enableEmptyBundle:(BOOL)a1;
- (id)p_channelWithInfoDictionary:(id)a0;
- (id)p_bundleWithInfoDictionary:(id)a0;
- (id)p_reusePoolConfigWithBulletScene:(id)a0;
- (id)channelWithSchema:(id)a0;
- (BOOL)shouldStartPreloadWithSchema:(id)a0 preloadContext:(id)a1;
- (void)preloadDidFinishedWithBulletContainer:(id)a0 preloadContext:(id)a1;
- (void)addManagerDelegate:(id)a0;
- (void)removeManagerDelegate:(id)a0;
- (id)bulletContainerWithContext:(id)a0 bulletScene:(id)a1;
- (id)aBulletContainerWithContext:(id)a0;
- (id)anIMDynamicPatchModelWithDictionary:(id)a0;
- (id)reuseIdentifierWithChannel:(id)a0 bundle:(id)a1;
- (id)bundleWithSchema:(id)a0;
- (id)reusePoolWithBulletScene:(id)a0;
- (id)aBulletContainerViewModelWithContext:(id)a0;
- (id)allowedReuseIdentifiers;
- (id)reuseIdentifiersWithPool:(id)a0;
- (id)disabledReuseIdentifiersForPreLayout;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
