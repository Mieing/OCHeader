@class UILabel, NSString, UIView;
@protocol ACCLoadingViewProtocol;

@interface ACCLoadMoreFooter : MJRefreshBackFooter

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL showNoMoreDataText;
@property (copy, nonatomic) NSString *noMoreDataString;
@property (nonatomic) double horizonalInset;

- (void)setLoadMoreLabelTextColor:(id)a0;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (void)_startLoadingAnim;
- (void)_stopLoadingAnim;
- (void)setLoadingViewBackgroundColor:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)_addObservers;
- (void).cxx_destruct;
- (void)_removeObservers;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)dealloc;

@end
