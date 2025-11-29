@class NSDictionary, NSMutableDictionary;

@interface LSIMBulletContainerManager : NSObject

@property (retain) NSDictionary *reusePoolConfigs;
@property (retain) NSDictionary *reusePools;
@property (nonatomic) BOOL globalReusePoolEnabled;
@property (retain) NSMutableDictionary *bulletHeightCacheDict;

+ (id)sharedInstance;

- (void)clearReusePoolWithBulletScene:(unsigned long long)a0;
- (void)setupReusePoolConfig:(id)a0 bulletScene:(unsigned long long)a1;
- (BOOL)reusePoolFullWithKey:(id)a0 bulletScene:(unsigned long long)a1;
- (BOOL)reusePoolContainsBulletContainerWithContext:(id)a0 bulletScene:(unsigned long long)a1;
- (void)p_setupIMBulletReusePoolConfig;
- (void)p_setupReusePoolConfig:(id)a0 bulletScene:(unsigned long long)a1;
- (void)p_tryClearReusePoolWithBulletScene:(unsigned long long)a0;
- (id)p_reusePoolWithBulletScene:(unsigned long long)a0;
- (id)p_tryInitialReusePoolWithBulletScene:(unsigned long long)a0;
- (void)saveBulletContainer:(id)a0 withKey:(id)a1 bulletScene:(unsigned long long)a2;
- (void)resetReusePools;
- (id)aBulletContainer;
- (id)p_channelWithInfoDictionary:(id)a0;
- (id)p_bundleWithInfoDictionary:(id)a0;
- (id)channelWithSchema:(id)a0;
- (id)bulletContainerWithContext:(id)a0 bulletScene:(unsigned long long)a1;
- (id)bundleWithSchema:(id)a0;
- (id)reusePoolWithBulletScene:(unsigned long long)a0;
- (id)p_reusePoolWithSceneID:(id)a0;
- (id)p_reusePoolConfig;
- (id)bulletSceneIDWithScene:(unsigned long long)a0;
- (void)p_setupReusePoolConfig:(id)a0 sceneID:(id)a1;
- (id)p_reusePoolConfigWithSceneID:(id)a0;
- (double)heightCacheWithScene:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)saveHeightCacheWithHeight:(double)a0 scene:(unsigned long long)a1 identifier:(id)a2;
- (id)reusePoolWithSceneID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
