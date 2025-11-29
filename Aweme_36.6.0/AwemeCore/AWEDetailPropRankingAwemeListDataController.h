@class NSArray, AWEDetailPropViewModel, IESServiceProvider, AWEDetailPropTracker;

@interface AWEDetailPropRankingAwemeListDataController : AWEListDataController

@property (retain, nonatomic) IESServiceProvider *serviceProvider;
@property (retain, nonatomic) AWEDetailPropViewModel *stateContext;
@property (retain, nonatomic) AWEDetailPropTracker *propTracker;
@property (retain, nonatomic) NSArray *awemeInfoList;
@property (nonatomic) long long initIndex;
@property (nonatomic) long long beginIndex;
@property (nonatomic) long long endIndex;

- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (BOOL)loadPreviousHasPrevious;
- (void)loadMoreWithCompletion:(id /* block */)a0 repeatCount:(long long)a1;
- (void)fetchAwemeListWithBeginIndex:(long long)a0 endIndex:(long long)a1 completion:(id /* block */)a2;
- (void)loadPreviousWithCompletion:(id /* block */)a0 repeatCount:(long long)a1;
- (id)initWithServiceProvider:(id)a0 awemeInfoList:(id)a1 initIndex:(long long)a2;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
