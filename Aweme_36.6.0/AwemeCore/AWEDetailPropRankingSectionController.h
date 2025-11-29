@class AWEDetailPropRankingListModel, AWEDetailPropViewModel, IESServiceProvider, AWEDetailPropRankingViewController;

@interface AWEDetailPropRankingSectionController : IGListSectionController

@property (retain, nonatomic) IESServiceProvider *serviceProvider;
@property (retain, nonatomic) AWEDetailPropViewModel *stateContext;
@property (retain, nonatomic) AWEDetailPropRankingListModel *object;
@property (retain, nonatomic) AWEDetailPropRankingViewController *rankingVC;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)tabBarContainerGestures;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
