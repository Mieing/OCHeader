@class NSDate, NSString, NSArray, AWEStorageFilePermanent, AWEMediumVideoChannelCachePreloadModel, AWEMVChannelCacheInfoModel, NSMutableArray, AWEAwemeResponseModel, AWEStorage, AWEMVChannelCacheUpdateDraft;

@interface AWEMVChannelCacheManager2 : NSObject

@property (retain, nonatomic) AWEMVChannelCacheInfoModel *cacheInfo;
@property (retain, nonatomic) AWEAwemeResponseModel *cacheModel;
@property (nonatomic) unsigned long long readingState;
@property (retain, nonatomic) NSMutableArray *acquireBlockList;
@property (retain, nonatomic) AWEMediumVideoChannelCachePreloadModel *lastPreloadVideoModel;
@property (copy, nonatomic) NSString *needClearVideoCacheUrlKey;
@property (copy, nonatomic) NSArray *tempRefreshAwemeJsonList;
@property (copy, nonatomic) NSArray *tempRefreshAwemeList;
@property (retain, nonatomic) AWEAwemeResponseModel *lastRefreshResponseModel;
@property (retain, nonatomic) AWEMVChannelCacheInfoModel *lastRefreshFeedCacheInfo;
@property (nonatomic) long long refreshResponseSaveTimes;
@property (retain, nonatomic) NSDate *lastRefreshResponseSaveDate;
@property (copy, nonatomic) id /* block */ refreshResponseSaveBlock;
@property (retain, nonatomic) AWEMVChannelCacheUpdateDraft *cacheDraft;
@property (retain, nonatomic) AWEStorageFilePermanent *filePermanent;
@property (retain, nonatomic) AWEStorage *infoStorage;
@property (nonatomic) unsigned long long errorCode;
@property (nonatomic) BOOL isAcquireCacheImmediately;
@property (nonatomic) BOOL resignActive;
@property (nonatomic) long long acquireCacheFrequencyForLog;
@property (nonatomic) BOOL isReuse;
@property (nonatomic) BOOL useCacheFinished;
@property (nonatomic) BOOL didLoadChannel;
@property (nonatomic) BOOL didLeaveChannel;
@property (readonly, nonatomic) BOOL cacheIsUsed;

+ (id)cacheStorageKey;
+ (id)cacheStorageKeyForLayoutType:(id)a0;
+ (BOOL)isValidTypeForCache:(id)a0;
+ (id)shareInstance;

- (void)readObjectFromFileForKey:(id)a0 completion:(id /* block */)a1;
- (double)cacheTime;
- (void)handleWillResignActive;
- (void)setupNotification;
- (id)cacheItemIds;
- (BOOL)cacheAvailable;
- (void)initialCacheInfo;
- (void)setupErrorCode:(unsigned long long)a0;
- (unsigned long long)getErrorCodeFromStorage;
- (void)setupCacheInfo;
- (void)saveCacheToDisk:(id)a0 cacheInfo:(id)a1;
- (void)handleAcquireBlockList:(id)a0 error:(id)a1;
- (void)readCacheFromDiskWithBlock:(id /* block */)a0;
- (void)bindPreloadVideoModel:(id)a0;
- (void)preloadImage:(id)a0 scene:(unsigned long long)a1;
- (void)saveFeedDataAndImageAtSameTime:(id)a0 cacheInfo:(id)a1;
- (void)trySaveRefreshedFeedData:(id)a0 awemeJsonList:(id)a1;
- (void)storageErrorCode:(unsigned long long)a0;
- (void)clearStorageErrorCode;
- (void)preloadVideo:(id)a0 timingType:(unsigned long long)a1;
- (id)acquireLastPreloadVideoModel;
- (void)removePreloadVideoModel;
- (void)savePreloadVideoModel:(id)a0;
- (void)trackCacheVideoRequestResult:(long long)a0 error:(id)a1;
- (id)trackParamsForCache;
- (id)getStartPlayTimeWithItemId:(id)a0;
- (void)updateStartPlayTimeRecordUsingBlock:(id /* block */)a0;
- (void)setupCacheUsed:(BOOL)a0;
- (void)setupUseCacheFinished:(BOOL)a0;
- (void)acquireCacheWithBlock:(id /* block */)a0;
- (void)tryFillRefreshedFeedDataByLoadMore:(id)a0 awemeJsonList:(id)a1;
- (void)tryClearPreloadVideoCache;
- (void)preloadVideoWithTimingType:(unsigned long long)a0;
- (void)setupIsAcquireCacheImmediately:(BOOL)a0;
- (void)recordAcquireCacheFrequency;
- (double)cacheReadDuration;
- (void).cxx_destruct;
- (id)init;
- (void)handleDidBecomeActive;
- (id)debugInfo:(long long)a0;

@end
