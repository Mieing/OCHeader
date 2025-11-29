@class NSString;

@interface AWEIMFeedVideoCachePool : NSObject <IESIMFeedVideoCachePoolProtocol, IESIMUserServiceMessage>

@property (nonatomic) BOOL enableOutStreamDowngrade;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } cacheLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneParamsForRequestingVideoAtDM;
+ (void)tryRequestAwemeItemsWithIds:(id)a0 originType:(unsigned long long)a1 requestScene:(id)a2;
+ (void)tryRequestAwemeItemsWithIds:(id)a0 afterDelay:(double)a1 originType:(unsigned long long)a2 requestScene:(id)a3;
+ (id)preRequestPool;
+ (void)p_requestAwemeItemsFromPoolWithParams:(id)a0;
+ (void)p_requestAwemeItemsFromPoolWithRequestScene:(id)a0;
+ (void)setItemToCacheWith:(id)a0 withItemId:(id)a1;
+ (void)removeItemFromCacheWith:(id)a0;
+ (void)removeAwemeModelForItemId:(id)a0;
+ (void)removeAllItemFromCache;
+ (id)getItemFromCacheWith:(id)a0;
+ (void)p_requestAwemeModelForItemIds:(id)a0 requestScene:(id)a1 originType:(unsigned long long)a2 results:(id /* block */)a3;
+ (id)createIDsFromAwemeItemIDs:(id)a0;
+ (id)requestingCache;
+ (id)requestCallbackMaps;
+ (id)profileUidWithAwemeIdDict;
+ (id)newFeedCache;
+ (void)tryRequestAwemeItemsWithIds:(id)a0 afterDelay:(double)a1 requestScene:(id)a2;
+ (void)generateMomentPreloadWithMessage:(id)a0;
+ (void)tryRequestAwemeItemsWithIds:(id)a0 requestScene:(id)a1;
+ (void)cancelRequestAwemeItemsWithIds:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)sceneParamsForRequestingVideoAtDM;
- (void)tryRequestAwemeItemsWithMessage:(id)a0 requestScene:(id)a1;
- (void)requestAwemeModelsForItemIds:(id)a0 requestScene:(id)a1 results:(id /* block */)a2;
- (void)removeAwemeModelWithItemId:(id)a0 afterDelay:(double)a1;
- (double)lastRequestTimeStampForItemID:(id)a0;
- (id)selectedCoIdWithAwemeIds:(id)a0;
- (void)tryRequestAwemeItemsWithCell:(id)a0 requestScene:(id)a1;
- (void)cancelRequestAwemeItemsWithCell:(id)a0;
- (void)getAwemeModelForItemId:(id)a0 requestScene:(id)a1 canRequest:(BOOL)a2 result:(id /* block */)a3;
- (void)clearRequestCallBacks;
- (void)cleanFeedTypeMessageForCid:(id)a0;
- (void)removeAllAwemeModel;
- (void)removeAwemeModelWithItemId:(id)a0;
- (void)addCacheWithAwemeModels:(id)a0;
- (void)addAwemeModels:(id)a0;
- (id)awemeWithItemId:(id)a0;
- (void)removeAwemeCacheWithItemId:(id)a0;
- (void)cleanFeedCardMessageListForCid:(id)a0;
- (void)setQuoteMessageV2:(id)a0;
- (id)quoteMessageV2;
- (id)awemeModelForItemId:(id)a0;
- (void)removeAllCache;
- (id)unavailableCacheModelForItemId:(id)a0;
- (void)saveFeedCardMessageList:(id)a0 cid:(id)a1;
- (id)feedCardMessageWithCid:(id)a0 index:(unsigned long long)a1;
- (void)setQuoteReplyFeedCardMessage:(id)a0;
- (id)quoteReplyFeedCardMessage;
- (void)setPublishAtFriendMessage:(id)a0;
- (id)publishAtFriendMessage;
- (id)unavailableStateCache;
- (void)recordAwemeCoIdWithMessage:(id)a0;
- (void)removeUnavailableCacheWithItemId:(id)a0;
- (id)awemeCacheModelForItemId:(id)a0;
- (void)saveAwemeCacheWithModel:(id)a0;
- (void)saveAwemeCacheWithModels:(id)a0;
- (void)saveUnavailableCacheWithModel:(id)a0;
- (void)saveUnavailableCacheWithModels:(id)a0;
- (void)sync_fullCacheModelForItemId:(id)a0 complete:(id /* block */)a1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
