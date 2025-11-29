@class YYMemoryCache;

@interface AWEDiscoverDMemoryCache : NSObject

@property (retain, nonatomic) YYMemoryCache *stateCache;
@property (retain, nonatomic) YYMemoryCache *videoCache;
@property (retain, nonatomic) YYMemoryCache *controllerCache;

+ (void)handleRelateWordStateChange:(BOOL)a0;
+ (BOOL)checkMixIDHasUnlock:(id)a0;
+ (void)cacheUnlockMixID:(id)a0;
+ (void)cacheUnlockEpisodes:(id)a0 ForMixID:(id)a1;
+ (id)getUnlockEpisodesForMixID:(id)a0;
+ (void)cacheCurrentUnlockEpisodes:(id)a0 ForMixID:(id)a1;
+ (id)getCurrentUnlockEpisodesForMixID:(id)a0;
+ (void)cacheUnlockVideoID:(id)a0;
+ (void)cacheTryUnlockFrequencyItemID:(id)a0;
+ (id)checkItemIDTryUnlockFrequency:(id)a0;
+ (void)cacheOpenVIPUserID:(id)a0;
+ (BOOL)checkIsOpenVIPUser:(id)a0;
+ (void)cacheIsRequestingVideoID:(id)a0 isRequesting:(BOOL)a1;
+ (BOOL)checkIsRequestingVideoID:(id)a0;
+ (void)cacheAdViewTimesCreatorID:(id)a0;
+ (id)checkCreatorIDAdViewTimes:(id)a0;
+ (unsigned long long)getRelateWordState;
+ (id)elementWithContainerID:(id)a0;
+ (void)registElementView:(id)a0 withContainerID:(id)a1;
+ (void)removeElementViewWithContainerID:(id)a0;
+ (void)cacheHotSpotViewController:(id)a0 detailViewController:(id)a1;
+ (void)clearHotSpotRelateCache;
+ (void)cacheUpdateVideoID:(id)a0;
+ (BOOL)checkItemIDHasUpdate:(id)a0;
+ (BOOL)checkItemIDHasUnlocked:(id)a0;
+ (void)cachePaymentVideoUploadWatchRecord:(id)a0;
+ (BOOL)checkPaymentVideoUploadWatchRecord:(id)a0;
+ (void)removePaymentVideoUploadWatchRecord:(id)a0;
+ (id)sharedManager;

- (void).cxx_destruct;

@end
