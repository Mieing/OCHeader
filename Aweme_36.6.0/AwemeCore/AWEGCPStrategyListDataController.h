@class IESGCPPlayerTransitionContext;
@protocol AWEGCPStrategyDataManager;

@interface AWEGCPStrategyListDataController : AWEListDataController

@property (retain, nonatomic) id<AWEGCPStrategyDataManager> dataManager;
@property (retain, nonatomic) IESGCPPlayerTransitionContext *context;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (void)replaceVideosWithCompletion:(id /* block */)a0 replaceVideosType:(long long)a1;
- (void)fetchForCacheWithCompletion:(id /* block */)a0;
- (id)getModelsWithStrategyArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataManager:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
