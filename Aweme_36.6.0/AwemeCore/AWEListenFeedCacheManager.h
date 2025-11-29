@class NSMutableArray;

@interface AWEListenFeedCacheManager : NSObject

@property (retain, nonatomic) NSMutableArray *listenLaterCache;
@property (nonatomic) long long storageCacheCount;
@property (retain, nonatomic) NSMutableArray *listenFeedCache;
@property (retain, nonatomic) NSMutableArray *currentFeedCacheUnconsumedArray;
@property (retain, nonatomic) NSMutableArray *unconsumedListenDataArray;
@property (nonatomic) BOOL isUsingFeedCache;

+ (void)requestAwemeItemsWithIDs:(id)a0 completion:(id /* block */)a1;
+ (id)listenLaterUserStorage;
+ (id)sharedInstance;

- (id)userListenLaterStorageCache;
- (void)saveFeedCacheToFile:(id)a0;
- (void)addListenLaterCache:(id)a0;
- (void)listenLaterItemHasFinished:(id)a0;
- (BOOL)itemIsInListenLater:(id)a0;
- (void)didDeleteListenLaterCache:(id)a0;
- (void)removeHasFinishedListenCache;
- (void)clearListenLaterCache;
- (id)currentListenLaterCache;
- (BOOL)needShowRecoverToast:(id)a0;
- (long long)countOfRecoverContent;
- (void)recoverToaskDidShow;
- (BOOL)isListenFeedCacheModel:(id)a0;
- (void)getFeedCacheArrayWithCompletion:(id /* block */)a0;
- (id)getCurrentFeedCacheUnconsumedArray;
- (void)updateFeedCache;
- (void)onlyUpdateFileCache;
- (void)addListenFeedData:(id)a0;
- (void)consumeOneAwemeModel:(id)a0;
- (void)markAllCacheConsumed;
- (void).cxx_destruct;

@end
