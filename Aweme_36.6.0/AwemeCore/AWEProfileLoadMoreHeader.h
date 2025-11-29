@class UIButton, NSMutableDictionary, AWEUILoadingView, YYLabel;

@interface AWEProfileLoadMoreHeader : MJRefreshFooter

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) YYLabel *label;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSMutableDictionary *stateTitles;
@property (nonatomic) BOOL newPanGesture;
@property (nonatomic) BOOL firstLoadMore;
@property (nonatomic) double positonY;
@property (copy, nonatomic) id /* block */ changeVisiableBlock;
@property (copy, nonatomic) id /* block */ checkBeginRefreshingBlock;

- (void)endRefreshingWithNoMoreData;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)handleTapAction;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)__addObservers;
- (void)endRefreshingWithNoMoreDataCompletionBlock:(id /* block */)a0;
- (void)__startLoadingAnim;
- (void)__stopLoadingAnim;
- (void)__forceUpdateUI;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end
