@class NSString, NSHashTable;

@interface BDUGLuckyCleanCacheManager : NSObject <BDUGLuckyCleanCacheProtocol>

@property (retain, nonatomic) NSHashTable *delegates;
@property (copy, nonatomic) NSString *clearID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sdkSettingsUpdate;
+ (void)registerDelegateClass:(Class)a0;
+ (void)unregisterDelegateClass:(Class)a0;
+ (void)cleanupCacheLight;
+ (void)cleanupCacheHeavy;
+ (void)cleanupCacheExtreme;
+ (void)__cleanupCacheForStrategy:(id)a0 defaultExpireDay:(double)a1;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)__setupNotification;
- (void)__staticSettingsDidUpdate;
- (void)__cleanCacheIfNeeded;
- (id)__cachedClearID;
- (void)__removeUserDefaultKeys:(id)a0;
- (void)__removePath:(id)a0;
- (void)__cleanModule:(id)a0;
- (void)__saveClearID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
