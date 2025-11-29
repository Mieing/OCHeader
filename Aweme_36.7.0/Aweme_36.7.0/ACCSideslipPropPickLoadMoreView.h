@class ACCQuickSaveBarItemLoadingView, UIView;

@interface ACCSideslipPropPickLoadMoreView : MJRefreshComponent

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCQuickSaveBarItemLoadingView *loadingView;
@property (nonatomic) BOOL hasErrorInBack;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (nonatomic) double prefetchRemainDistance;

+ (id)loadMoreWithRefreshingBlock:(id /* block */)a0;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)endRefreshingWithNetWorkError:(id /* block */)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end
