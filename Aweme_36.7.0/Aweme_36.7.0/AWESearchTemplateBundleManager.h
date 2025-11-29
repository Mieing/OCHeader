@class NSSet, NSMutableDictionary;

@interface AWESearchTemplateBundleManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedBundles;
@property (retain, nonatomic) NSMutableDictionary *cachedGlobalBundles;
@property (retain, nonatomic) NSSet *globalCacheUrls;
@property (readonly, nonatomic) NSSet *validScene;
@property (readonly, nonatomic) NSSet *blockedBundleList;
@property (readonly, nonatomic) NSSet *blockedChannelList;
@property (readonly, nonatomic) long long clearGlobalCacheDelay;
@property (readonly, nonatomic) BOOL enableTemplateBundleCheckVersion;
@property (retain, nonatomic) NSMutableDictionary *cachedDowngradeBundles;

+ (id)convertHexStrToData:(id)a0;
+ (id)sharedInstance;

- (void)didReceiveMemoryDangerLevelTopNotification;
- (void)didReceiveMemoryDangerLevelSecondaryNotification;
- (id)templateBundleForURL:(id)a0;
- (void)preloadTemplateBundleForURLsGlobal:(id)a0;
- (long long)getGlobalCacheDelay;
- (void)registerMemoryWarnings;
- (id)preloadTemplateBundleForURL:(id)a0 isGlobal:(BOOL)a1;
- (BOOL)checkTemplateBundleValid:(id)a0;
- (BOOL)enableCacheGlobalBundleCheckVersion;
- (void)preloadTemplateBundleForURLsGlobal:(id)a0 useForest:(BOOL)a1;
- (void)clearTimerForClearGlobalCache;
- (void)preloadTemplateBundleForURLsAsync:(id)a0 useForest:(BOOL)a1;
- (void)forestResolveTaskForBundleAsync:(id)a0;
- (void)resolveTaskForBundleAsync:(id)a0;
- (void)assignTemplateBundle:(id)a0;
- (void)setDelayForClearGlobalCache;
- (void)clearGlobalBundles;
- (BOOL)validateSceneForTemplateBundle:(id)a0;
- (id)preloadTemplateBundleForURL:(id)a0;
- (void)preloadTemplateBundleForURLsAsync:(id)a0;
- (id)preloadDowngradeTemplateBundleForModel:(id)a0;
- (void)setTemplateBundleForTreeReuse:(id)a0 forURL:(id)a1;
- (void)clearCachedBundles;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
