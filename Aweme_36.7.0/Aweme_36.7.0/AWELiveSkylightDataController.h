@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol AWELiveModuleService;

@interface AWELiveSkylightDataController : AWEListDataController

@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *pageUrl;
@property (nonatomic) long long followSessionId;
@property (retain, nonatomic) NSMutableSet *displayedRoomIds;
@property (nonatomic) BOOL isRequestMore;
@property (nonatomic) long long totalLiveCount;
@property (retain, nonatomic) id<AWELiveModuleService> liveModuleService;
@property (nonatomic) BOOL isFeedLoadMore;
@property (nonatomic) BOOL liveSpecialFollowShown;
@property (retain, nonatomic) NSMutableArray *anchorIdList;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSMutableArray *liveList;
@property (retain, nonatomic) NSString *callBackHeader;
@property (retain, nonatomic) NSMutableDictionary *extraParams;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithLiveModuleService:(id)a0;
- (void)handleRefreshCompletionData:(id)a0;
- (void)loadMore:(id)a0 completion:(id /* block */)a1;
- (void)refreshAllPageWithCompletion:(id /* block */)a0 needHandleData:(BOOL)a1 isReticentRefresh:(BOOL)a2;
- (void)refreshWithCompletion:(id /* block */)a0 needHandleData:(BOOL)a1;
- (void)refreshWithCompletion:(id /* block */)a0 needHandleData:(BOOL)a1 isReticentRefresh:(BOOL)a2;
- (BOOL)removeDataSourceWithUserID:(id)a0;
- (void)refreshFollowTopByteLink;
- (void)loadNextPageWithCompletion:(id /* block */)a0;
- (void)updateDisplayedRoomId:(id)a0;
- (void)reloadWithPullType:(long long)a0 completion:(id /* block */)a1;
- (id)appendUrl:(id)a0 andProcessDisplayRoomIds:(id)a1;
- (void)reloadWithPullType:(long long)a0 completion:(id /* block */)a1 needHandleData:(BOOL)a2;
- (id)getCommonRequestParamsWithSessionId:(long long)a0 isReticentRefresh:(BOOL)a1;
- (void)handleNeedPushAnchorIds:(id)a0;
- (BOOL)enableLoadNextPage;
- (void)handleLoadMoreCompletionData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
