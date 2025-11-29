@class NSDictionary, AWESocialRelationObserver, NSString;
@protocol AWEAwemeModelCacheProtocol;

@interface AWEStoryAwemeModelCacheManager : NSObject <AWEUserMessage, AWEStoryAwemeModelCacheManagerProtocol>

@property (retain, nonatomic) id<AWEAwemeModelCacheProtocol> awemeCache;
@property (retain, nonatomic) AWESocialRelationObserver *UCObserver;
@property (copy, nonatomic) NSDictionary *storyPreloadSceneWhitelist;
@property (copy, nonatomic) NSDictionary *storyResourcePreloadSceneBlockList;
@property (readonly, nonatomic) BOOL isCachePrepared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)cachedAwemeForID:(id)a0;
- (BOOL)enablePreload;
- (void)preloadAwemeWithItemIDs:(id)a0 scene:(id)a1;
- (void)preloadStoryImageForAwemeID:(id)a0 scene:(id)a1;
- (void)prepareAwemeCache;
- (void)writeStoryCacheWhenColdLaunch;
- (void)observeUCMessage;
- (long long)maxCountPerUser;
- (void)monitorCacheHitRate:(BOOL)a0;
- (unsigned long long)maxItemOnAwemeDetailRequest;
- (void)requestAwemeWithBatchItemIds:(id)a0 syncDiskCache:(BOOL)a1;
- (BOOL)enablePreloadForScene:(id)a0;
- (void)prefetchAndCacheAwemeWithItemIds:(id)a0 syncDiskCache:(BOOL)a1;
- (void)updateAllUsersItemsWithStoryListDictionary:(id)a0;
- (void)observeUCMessageWithResponse:(id)a0;
- (void)deleteStoryListFromUCDelete:(id)a0;
- (void)deleteItemsInDisk:(id)a0;
- (id)getSingleUserMaxItemsWithUserID:(id)a0 storyStatusModels:(id)a1;
- (id)storyCacheSettings;
- (BOOL)enableResourcePreload;
- (BOOL)enableResourcePreloadForScene:(id)a0;
- (id)cachedAwemesForIDs:(id)a0;
- (id)getAllCachedAwemes;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)maxUserCount;

@end
