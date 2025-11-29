@class NSMutableDictionary, NSTimer, NSArray, AWETeenHotListDataController, NSNumber, NSString;

@interface AWETeenFeedPreCacheManager : NSObject <AWEDigitalWellbeingMessage, AWETeenFeedPreCacheMessage>

@property (retain, nonatomic) NSMutableDictionary *feedPreCacheList;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isFeedCacheSucceed;
@property (retain, nonatomic) NSTimer *feedCachePrefetchTimer;
@property (retain, nonatomic) NSNumber *autoTestFlag;
@property (retain, nonatomic) NSArray *validCachedFeedsInCurrentSession;
@property (retain, nonatomic) AWETeenHotListDataController *hotFeedDataController;
@property (nonatomic) BOOL isChangeToTeenMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)getFeedCacheFromFileWithCompletion:(id /* block */)a0;
- (id)getFeedPreCacheModelsWithClean:(BOOL)a0;
- (void)clearDuplicatedFeedPreCacheModels:(id)a0;
- (void)checkCacheAvailability:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableStorageFile;
- (id)getFeedCache;
- (void)timerRepeatFetchFeedCache;
- (id)getProFeedPreCacheModelsWithClean:(BOOL)a0;
- (id)getFeedPreCacheKey;
- (void)clearFeedPreCacheWithKey:(id)a0;
- (id)getValidCacheFromLocalCache:(id)a0;
- (id)getProFeedPreCacheKeyListForAccess;
- (id)generateValidAwemeCacheModels:(id)a0;
- (void)setProFeedPreCache:(id)a0;
- (void)preloadCacheFeed:(id)a0;
- (void)asyncFeedPreCacheListToStorage;
- (void)fetchFeedForCache;
- (void)storageToFlieWithFeedPreCacheList:(id)a0 key:(id)a1 completion:(id /* block */)a2;
- (BOOL)needFetchFeedCache;
- (void)invalidateFeedCacheTimer;
- (void)processFeedPreCacheModels:(id)a0;
- (BOOL)feedPreCacheEnable;
- (void)feedInitialFetchFinished;
- (BOOL)enablePreFeedCache;
- (long long)p_cacheMaxCount;
- (void)removeVideoCacheByKey:(id)a0;
- (long long)p_cacheTimeoutHour;
- (long long)feedPreCacheSizeLimit;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)dealloc;

@end
