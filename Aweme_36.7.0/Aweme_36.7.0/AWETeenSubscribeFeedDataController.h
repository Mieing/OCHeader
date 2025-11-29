@class NSString;

@interface AWETeenSubscribeFeedDataController : AWEListDataController <AWETeenHomepageDataControllerProtocol>

@property (nonatomic) unsigned long long cursor;
@property (copy, nonatomic) NSString *stickToItemIds;
@property (copy, nonatomic) NSString *stickAfterAgeChangeItemIds;
@property (nonatomic) BOOL forceRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchHasNewSubscribeWithCompletion:(id /* block */)a0;
+ (void)reportWatchedSubscribeItemID:(id)a0;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)cancelCurrentTask;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (void)p_fetchWithPullType:(long long)a0 completion:(id /* block */)a1;
- (BOOL)p_isValidRequest;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
