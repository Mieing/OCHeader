@protocol AWEUserRecommendTableDataSourceProtocol, AWEUserRecommendTableViewModelProtocol;

@interface AWEIMFansRecommendViewModel : AWEIMFansBaseViewModel

@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> recommendTableViewModel;
@property (retain, nonatomic) id<AWEUserRecommendTableDataSourceProtocol> recommendSnapshot;

- (void)trackListStartRefreshing;
- (BOOL)wasRecommendClosed;
- (BOOL)enableShowRecommendSection;
- (void)updateRecommendFilterUIDIfCanUseCache:(BOOL)a0 refreshByPullDown:(BOOL)a1;
- (void)applyRecommendSnapShotToProvider;
- (BOOL)shouldShowRecommendSection;
- (void)monitorListBeginRefreshing;
- (void)fetchRecommendData:(id /* block */)a0;
- (void)removeDuplicateRecommendUIDS:(id)a0;
- (void)monitorListEndRefreshing;
- (void)setLastHasRecommendData:(BOOL)a0;
- (BOOL)showRecommendPlaceHolder;
- (void).cxx_destruct;

@end
