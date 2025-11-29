@class AWEGrouponResponse, NSString, AWEGrouponC2FeedDataController, AWEGrouponPageContext, NSNumber;

@interface AWEGrouponTabListViewModel : NSObject <AWENearbyGrouponTabFeedDelegate>

@property (retain, nonatomic) AWEGrouponPageContext *pageContext;
@property (retain, nonatomic) AWEGrouponC2FeedDataController *dataController;
@property (retain, nonatomic) AWEGrouponResponse *response;
@property (nonatomic) BOOL isInitFetchFinish;
@property (nonatomic) BOOL isFirstFetched;
@property (nonatomic) BOOL willLoadTransformerCache;
@property (nonatomic) BOOL willLoadFeedCache;
@property (nonatomic) long long currentTabID;
@property (nonatomic) unsigned long long manualRefreshType;
@property (readonly, nonatomic) BOOL isRequestAir;
@property (readonly, nonatomic) NSNumber *topFeedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithPageContext:(id)a0;
- (void)refreshGrouponV2WithRefreshConfig:(id)a0 completion:(id /* block */)a1;
- (void)updateGrouponCacheWithListResponse:(id)a0;
- (void)preInitFetch;
- (void)deleteCards:(id)a0 tabID:(id)a1 completion:(id /* block */)a2;
- (void)deleteCardWithMode:(unsigned long long)a0 idList:(id)a1 tabID:(id)a2 completion:(id /* block */)a3;
- (void)insertAwemeModel:(id)a0 index:(long long)a1 allowApendMax:(BOOL)a2 insertType:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)insertAwemeModel:(id)a0 index:(long long)a1 insertType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)deleteAwemes:(id)a0 tabID:(long long)a1 completion:(id /* block */)a2;
- (void)requestRecommendDataAfterClickWithParams:(id)a0 completion:(id /* block */)a1;
- (void)cancelRecommendDataRequest;
- (void)loadMoreWithTabID:(long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)extraRequestParamsForRecommendAfterClick:(id)a0;
- (void)updateCurrentTabID:(long long)a0;
- (void)updateManualRefreshType:(unsigned long long)a0;
- (void)loadGrouponCacheWithCacheConfig:(id)a0 completion:(id /* block */)a1;
- (void)updateMultiTabNodeWithParams:(id)a0 completion:(id /* block */)a1;
- (void)updateFirstFetch;
- (void).cxx_destruct;
- (BOOL)cancelCurrentRequest;

@end
