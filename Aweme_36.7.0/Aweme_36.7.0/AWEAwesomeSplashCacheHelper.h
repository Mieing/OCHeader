@class HMDThreadSafeArray, NSMutableDictionary, NSString, AWEStorage, NSMutableArray;
@protocol IESVideoPreloadProtocol;

@interface AWEAwesomeSplashCacheHelper : NSObject <AWEGokuPluginTargetProtocol>

@property (retain, nonatomic) NSMutableArray *downloadingQueue;
@property (retain, nonatomic) NSMutableArray *cacheList;
@property (retain, nonatomic) NSMutableDictionary *videoCachedRecords;
@property (retain, nonatomic) NSMutableDictionary *splashCacheList;
@property (retain, nonatomic) NSMutableArray *cacheListIndex;
@property (retain, nonatomic) HMDThreadSafeArray *mmkvSplashIDs;
@property (nonatomic) BOOL isProtectPreloaded;
@property (retain, nonatomic) id<IESVideoPreloadProtocol> preloader;
@property (retain, nonatomic) NSMutableDictionary *downloadModelDict;
@property (retain, nonatomic) AWEStorage *cacheStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getMMKVWithID:(id)a0;
- (BOOL)shouldUseTTPlayer:(id)a0;
- (id)getSuitableVideoModel:(id)a0;
- (id)getSplashLiveParamWith:(id)a0;
- (void)preloadAllSplashData;
- (void)storeAwemeModel:(id)a0 splashID:(id)a1;
- (id)getMMKVAwemeModelForKey:(id)a0;
- (id)getURLKeyWithModel:(id)a0;
- (void)deleteTopViewVideoCacheWithUrlKey:(id)a0;
- (id)createIndexDictWith:(id)a0;
- (void)storeMMKVAwemeModel:(id)a0 forKey:(id)a1;
- (void)removeMMKVAwemeModelForKey:(id)a0;
- (BOOL)shouldUseNewCacheMethod;
- (BOOL)existInQueue:(id)a0;
- (id)getCacheVideoPathWithModel:(id)a0;
- (unsigned long long)singleAwemePrefetchSize:(id)a0;
- (void)prefetchAlbumSplashResource:(id)a0;
- (BOOL)videoCacheExistsStrongCheckForModel:(id)a0;
- (void)checkVideoCache:(id)a0 prefetchSize:(unsigned long long)a1;
- (void)prefetchVideoCache:(id)a0 prefetchSize:(unsigned long long)a1;
- (void)trackSplashVideoDetailWithModel:(id)a0 videoModel:(id)a1 isAlbum:(BOOL)a2;
- (unsigned long long)fullPrefetchSize;
- (BOOL)shouldPreloadOnTTPlayer:(id)a0;
- (void)enableAutoTrimForModel:(id)a0;
- (void)removeVideoCacheForSplashID:(id)a0;
- (void)removeMultiVideoCacheIfNeededWithModel:(id)a0;
- (void)deleteAwemeModelWithSplashID:(id)a0;
- (void)preloadSingleAweme:(id)a0;
- (void)getAwemeForKey:(id)a0 complete:(id /* block */)a1;
- (id)getCommonParamsWithUrlString:(id)a0;
- (BOOL)enableSameTaskOpt;
- (id)getAwemeForKey:(id)a0;
- (void)disableAutoTrimForModel:(id)a0;
- (void)updateVideoCacheRecord:(id)a0 splashID:(id)a1;
- (BOOL)isMMKVEnable;
- (void)shouldTrackTimeCost:(BOOL)a0 key:(id)a1 isMMKV:(BOOL)a2 startTmie:(double)a3;
- (void)trackGetState:(BOOL)a0 key:(id)a1 isMMKV:(BOOL)a2;
- (void)trackStoreStateWithKey:(id)a0 isSuccess:(BOOL)a1 isMMKV:(BOOL)a2;
- (void)removeFromQueue:(id)a0;
- (void)processSameDownloadTaskWithUrlKey:(id)a0;
- (void)downloadSingleAlbumVideoWithModel:(id)a0;
- (void)cacheHelpProcessAwesomeSplashModel:(id)a0;
- (id)getStoreModelForKeyWithTimeout:(id)a0 timeoutInterval:(long long)a1 error:(id *)a2;
- (id)getAwemeDicForKey:(id)a0;
- (BOOL)videoCacheExistsFor:(id)a0 videoPath:(id)a1 urlKey:(id)a2;
- (void)clearCacheForAdvanceSetting;
- (id)getSplashCacheListIndex;
- (double)getPreloadAwemeCacheScale:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)moduleNames;
- (void)dealloc;
- (void)freeCache;

@end
