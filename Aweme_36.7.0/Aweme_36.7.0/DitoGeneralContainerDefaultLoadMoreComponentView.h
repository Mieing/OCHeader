@class UILabel, AWEPOILoadingView, DitoGeneralContainerDefaultLoadMoreComponentViewModel;

@interface DitoGeneralContainerDefaultLoadMoreComponentView : DitoComponentView

@property (retain, nonatomic) AWEPOILoadingView *loadingView;
@property (retain, nonatomic) UILabel *noMoreLabel;
@property (weak, nonatomic) DitoGeneralContainerDefaultLoadMoreComponentViewModel *viewModel;
@property (nonatomic) BOOL forceUpdateLoading;
@property (copy, nonatomic) id /* block */ loadMoreStateObserveBlock;

- (void)endRefreshingWithNoMoreData;
- (void)updateViewModel:(id)a0;
- (void)setupUIIfNeeded;
- (void)bindActionAndState;
- (id)generalContext;
- (void)updateWithLoadMoreState:(unsigned long long)a0;
- (void)removeLoadMoreStateObserve;
- (void)addLoadMoreStateObserve;
- (BOOL)isLocalLifeLoading;
- (void).cxx_destruct;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)dealloc;

@end
