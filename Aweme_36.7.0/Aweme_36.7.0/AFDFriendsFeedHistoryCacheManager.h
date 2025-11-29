@class NSMutableDictionary, NSArray, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface AFDFriendsFeedHistoryCacheManager : NSObject <AWEUserMessage, AFDFriendsFeedHistoryCacheManagerProtocol>

@property (retain, nonatomic) NSMutableArray *feedHistoryCacheList;
@property (retain, nonatomic) NSMutableDictionary *interactionInfoDictionary;
@property (nonatomic) BOOL isReadingInfoFromStorage;
@property (retain, nonatomic) NSMutableArray *getHistoryCacheInfoDictBlocks;
@property (nonatomic) BOOL isReadingFromStorage;
@property (retain, nonatomic) NSMutableArray *getHistoryCacheListBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSMutableArray *disasterRecoveryCacheList;
@property (retain, nonatomic) NSArray *disasterRecoveryCacheListFromStorage;
@property (nonatomic) BOOL isReadingDisasterRecoveryFromStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (long long)friendsFeedHistoryCacheListCount;
- (long long)friendsFeedLoadCacheCount;
- (void)cacheFamiliarDataControllerDataSource:(id)a0 pullType:(long long)a1;
- (void)clearGetHistoryCacheListBlocks;
- (void)getFriendsFeedHistoryCacheListWithCompletion:(id /* block */)a0;
- (void)getFriendsFeedDisasterRecoveryListFromStorageWithCompletion:(id /* block */)a0;
- (void)cacheFamiliarInteractionInfo:(id)a0 pullType:(long long)a1;
- (void)getFriendsInteractionInfoDictWithCompletion:(id /* block */)a0;
- (void)updateInteractionInfo:(id)a0 withItemID:(id)a1;
- (id)getCachedAwemeWithItemID:(id)a0;
- (void)updateFeedHistoryCacheListToFile;
- (void)enableAutoTrimForURLString:(id)a0 URLKey:(id)a1;
- (void)disableAutoTrimForURLString:(id)a0 URLKey:(id)a1;
- (void)updateFeedHistoryCacheListIfNeeded;
- (void)removeFeedHistoryCacheListAndVideoData;
- (long long)countOfHistoryCacheVideosRemainingToStore:(long long)a0;
- (long long)countOfDisasterRecoveryVideosRemainingToStore:(long long)a0;
- (void)updatePropertiesForCacheModel:(id)a0;
- (void)removeFeedHistoryCacheListVideoData;
- (void)setFriendsFeedHistoryCacheList;
- (void)setDisasterRecoveryCacheList;
- (void)removeFriendsInfoDictionary;
- (void)setFriendsInfoDictionary;
- (id)filteredCacheListByHistoryCacheList:(id)a0 limitCacheCount:(long long)a1;
- (id)getFriendsFeedHistoryCacheList;
- (void)getFriendsFeedHistoryCacheListFromStorageWithCompletion:(id /* block */)a0;
- (void)getFriendsInteractionInfoDictFromStorageWithCompletion:(id /* block */)a0;
- (void)removeFriendsFeedHistoryCacheList;
- (void)clearGetHistoryCacheInfoDictBlocks;
- (id)filteredNon24StoryCacheList:(id)a0;
- (id)getHistoryCacheSimpleInfo:(id)a0;
- (void)updateDisasterRecoveryCache:(id)a0;
- (void)clearHistoryFeedListItemWithIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
