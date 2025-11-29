@class NSNumber, NSDictionary, AWEHotSpotChannelViewModel;
@protocol AWESkyLightContainerProtocol;

@interface AWEXTabHotSpotFeedDataController : AWEListDataController

@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (weak, nonatomic) id<AWESkyLightContainerProtocol> skyLightContainer;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSDictionary *firstRequestParams;
@property (weak, nonatomic) AWEHotSpotChannelViewModel *channelViewModel;
@property (nonatomic) BOOL disableAutoUnfoldSkylight;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)transferAwemeModelForLive:(id)a0 isFirstColdLaunch:(BOOL)a1;
- (id)transferAwemeListIfNeededWithArray:(id)a0 isInitFetch:(BOOL)a1;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (id)configRequestParamsWithParamsDict:(id)a0;
- (void)initFetchWithCompletion:(id /* block */)a0 fromHotSpotVC:(BOOL)a1;
- (void)tryUseCacheAwemeWithCompletion:(id /* block */)a0 fromHotSpotVC:(BOOL)a1;
- (id)refreshTypeWithPullType:(long long)a0;
- (id)configRequestTypeParamsWithPullType:(long long)a0;
- (void)executeFetchCacheCompletion;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
