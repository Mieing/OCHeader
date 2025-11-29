@class UILabel, AWEUILoadingView;

@interface AWELiveInnerFeedRefreshFooter : MJRefreshAutoFooter

@property (retain, nonatomic) UILabel *readyLabel;
@property (retain, nonatomic) UILabel *refreshingLabel;
@property (retain, nonatomic) UILabel *noMoreLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;

- (void)placeSubviews;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)startLoadingAnim;
- (id)createFooterLabel;
- (void)stopLoadingAnim;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(long long)a1;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (void)p_removeObservers;
- (void)p_addObservers;

@end
