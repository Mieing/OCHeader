@class NSArray, NSMutableDictionary, NSMutableArray;

@interface BDASplashRealtimeCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *idList;
@property (retain, nonatomic) NSMutableArray *idOrderedArray;
@property (copy, nonatomic) NSArray *dateArray;
@property (nonatomic) BOOL needTrackListSize;
@property (nonatomic) BOOL needClearDeleteIdList;

+ (void)removeCacheModelWithMMKVId:(id)a0;
+ (void)updateRealtimePreloadConfig:(id)a0;
+ (BOOL)shouldUpdateRealtimeCache;
+ (id)getCacheModelWithSplashId:(id)a0;
+ (void)setCacheWithModel:(id)a0;
+ (id)getRealtimePreloadConfig;

- (void)downloadSuccessWithModel:(id)a0;
- (void)clearAllRealtimeSplashModel;
- (id)getSplashIdArrayWithIsDeleteIdList:(BOOL)a0;
- (void)clearRealtimeInvalidSplashModel;
- (void)updateInfoWithContext:(id)a0;
- (void)p_newSaveIdList;
- (id)p_newGetSplashIdArrayWithIsDeleteIdList:(BOOL)a0;
- (void)p_updateInfoListWithInvalidAds:(id)a0;
- (void)p_clearRealtimeFirstSplashModel;
- (void)p_updateSingleIdInfo:(id)a0;
- (void)p_clearRealtimeInvalidSplashModel;
- (void)p_clearRealtimeSplashModelWithCid:(id)a0;
- (void)p_clearRealtimeInvalidDateData;
- (id)getCidCacheList;
- (id)p_getSplashIdArrayWithIsDeleteIdList:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
