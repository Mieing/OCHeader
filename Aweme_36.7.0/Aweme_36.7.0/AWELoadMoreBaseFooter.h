@class NSString, AWEUILoadingView, UIView, NSAttributedString;

@interface AWELoadMoreBaseFooter : MJRefreshBackFooter

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *innerLabel;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL showNoMoreDataText;
@property (copy, nonatomic) NSString *noMoreDataString;
@property (nonatomic) BOOL adaptiveFontEnable;
@property (copy, nonatomic) NSAttributedString *noMoreDataAttributedString;

- (void)setLoadMoreLabelTextColor:(id)a0;
- (void)placeSubviews;
- (void)updateLabelWithAttributedText:(id)a0;
- (void)forceUpdateUI;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (void)_startLoadingAnim;
- (void)_stopLoadingAnim;
- (id)getInnerLabel;
- (void)updateLabelWithText:(id)a0;
- (void)updateLabelWithTextColor:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)_addObservers;
- (void).cxx_destruct;
- (void)_removeObservers;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)dealloc;

@end
