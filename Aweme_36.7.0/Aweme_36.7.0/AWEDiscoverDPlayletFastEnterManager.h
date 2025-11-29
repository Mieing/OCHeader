@class NSMutableDictionary;

@interface AWEDiscoverDPlayletFastEnterManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachePool;
@property (retain, nonatomic) NSMutableDictionary *seriesAwemeApiCachePool;

+ (BOOL)filterPaidAwemeModel:(id)a0;
+ (id)reasonPaidUnlockVideoForPlaylet:(id)a0;
+ (id)reasonPaidVideoForPlaylet:(id)a0;
+ (id)p_filterPaidAwemeModel:(id)a0;
+ (BOOL)needNotUsePlayingAwemeModelToFastEnterCacheWithModel:(id)a0;
+ (BOOL)p_isRegisterRefer:(id)a0;
+ (id)p_getLocalCacheModelWithKey:(id)a0 enterFrom:(id)a1;
+ (id)p_getSeriesAwemeServerCacheWithKey:(id)a0;
+ (BOOL)needUseRequestAwemeModelToFastEnterCacheWithModel:(id)a0;
+ (id)p_enterFromWithParams:(id)a0;
+ (id)hitCommonParamsWithModel:(id)a0;
+ (void)p_setCacheTrackerWithModel:(id)a0 withFailReason:(id)a1;
+ (void)p_lazyCreatePoolWithModel:(id)a0;
+ (id)p_getCacheIdWithParams:(id)a0;
+ (id)p_getCacheModelWithKey:(id)a0 enterFrom:(id)a1;
+ (id)getLastPlayerWithItemId:(id)a0 enterFrom:(id)a1;
+ (id)getFastEnterModelWithParams:(id)a0;
+ (BOOL)isLimitSceneUseCacheModel:(id)a0 params:(id)a1;
+ (void)p_hitCacheTrackerWithModel:(id)a0;
+ (void)p_hitCacheSuccessTrackerWithModel:(id)a0;
+ (void)p_hitCacheFailTrackerWithModel:(id)a0;
+ (id)getCacheModelWithParams:(id)a0;
+ (BOOL)shouldUseFastEnter:(id)a0;
+ (void)setCacheModel:(id)a0;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
