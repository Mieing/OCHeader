@class NSRecursiveLock, NSArray, NSTimer, NSSet, NSMutableDictionary;

@interface BDPWarmBootManager : NSObject {
    NSMutableDictionary *_dataCache;
}

@property (nonatomic) int maxNativeAppCacheCount;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (weak, nonatomic) NSTimer *heartbeatTimer;
@property (readonly, nonatomic) unsigned long long currentCacheCount;
@property (readonly, nonatomic) int maxGameCacheCount;
@property (readonly, copy, nonatomic) NSArray *uniqueIdInFront;
@property (readonly, nonatomic) NSSet *aliveAppUniqueIdSet;

+ (void)bootstrapLaunch;
+ (void)regiterClass:(Class)a0 forType:(long long)a1;
+ (BOOL)isResidentMemoryAbEnabled;
+ (void)onI18NLocaleChanged:(id)a0;
+ (id)sharedManager;

- (void)updateMaxWarmBootCacheCount:(int)a0 type:(long long)a1;
- (void)clearAllWarmBootCacheWithType:(long long)a0;
- (BOOL)hasCacheDataWithUniqueID:(id)a0;
- (void)clearAllWarmBootCache;
- (void)cleanCacheWithUniqueID:(id)a0;
- (id)subNaviWithUniqueID:(id)a0;
- (void)reciveMemoryWarningNotification:(id)a0;
- (BOOL)clearAllWarmBootCacheExcludePageTimeLineOfAppId:(id)a0;
- (void)cacheSubNavi:(id)a0 uniqueID:(id)a1;
- (BOOL)stopTimerToReleaseViewWithUniqueID:(id)a0;
- (BOOL)startTimerToReleaseViewWithUniqueID:(id)a0;
- (BOOL)clearWarmBootCacheOfAppID:(id)a0 versionType:(id)a1;
- (BOOL)clearAllWarmBootCacheOfAppId:(id)a0;
- (void)updateMaxWarmBootCacheCount:(int)a0;
- (id)getRunningUniqueIDsWithAppID:(id)a0;
- (void)updateBackgroundResidentWithUniqueID:(id)a0 isBGResident:(BOOL)a1;
- (long long)cacheResidentTime;
- (long long)cacheGameResidentTime:(id)a0;
- (void)setupHeartbeatTimerIfNeeded;
- (void)invalidateHeartbeatTimer;
- (id)getDataWithUniqueID:(id)a0;
- (long long)cacheResidentTimeWithUniqueID:(id)a0;
- (void)releaseResidentObject:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)applicationWillEnterForeground;
- (void)dealloc;

@end
