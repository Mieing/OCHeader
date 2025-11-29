@class NSDictionary;
@protocol AWEDiscoverDPlayletPositiveDataChangeProtocol;

@interface AWEDiscoverDPlayletPositiveDataController : AWEDiscoverDPlayletBaseDataController

@property (nonatomic) BOOL isPreloadRequestFinish;
@property (nonatomic) BOOL needInitFetchRequestFinish;
@property (nonatomic) BOOL initFetchRequestFinished;
@property (nonatomic) BOOL hadFetched;
@property (nonatomic) BOOL isCalculatedInitial;
@property (weak, nonatomic) id<AWEDiscoverDPlayletPositiveDataChangeProtocol> delegate;
@property (nonatomic) BOOL filterPaymentVideo;
@property (copy, nonatomic) NSDictionary *outerParams;
@property (nonatomic) long long firstRequestCount;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)initFromListDataController:(id)a0 withPlayletID:(id)a1;
- (void)firstFetchWithCompletion:(id /* block */)a0;
- (void)requestPositiveRecommendPlayletCardsWithID:(id)a0 Completion:(id /* block */)a1;
- (id)forceAddPositiveRecommendAwemeModels;
- (BOOL)updatePositiveIaaAwemeStatus:(id)a0;
- (void)appendPositiveNewModels:(id)a0 isLoadmore:(BOOL)a1;
- (void)refreshPositiveWithCount:(long long)a0 completion:(id /* block */)a1;
- (id)requestSeriesListWithPlayletId:(id)a0 cursor:(id)a1 count:(id)a2 pullDown:(BOOL)a3 completeBlock:(id /* block */)a4;
- (void)replaceWithNewModelWithResponse:(id)a0;
- (BOOL)isFastEnterPlayletHighlightScene;
- (id)addRecommendAwemeModelsIfNeeded;
- (void)addNewRecommendModelsIfNeed;
- (id)requestSeriesListWithCursor:(id)a0 count:(id)a1 PullType:(long long)a2 completeBlock:(id /* block */)a3;
- (void)reloadWithPullType:(long long)a0 count:(long long)a1 completion:(id /* block */)a2;
- (long long)calculateIndex:(id)a0 responseModel:(id)a1;
- (id)filterPaymentVideoWithArray:(id)a0;
- (id)replaceModelsForRequestOfEasyWithFilteredArray:(id)a0 requestPreloadModels:(id)a1;
- (void)updateRequestParamsWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataModel:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
