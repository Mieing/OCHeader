@class WCFinderAnimationLoadingView, WCFinderNoMoreView, NSString, UILabel, UITapGestureRecognizer;
@protocol WCFinderRefreshTableFooterViewDelegate;

@interface WCFinderRefreshTableFooterView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) WCFinderNoMoreView *noMoreView;
@property (retain, nonatomic) UITapGestureRecognizer *singleGestureRecognizer;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) BOOL isLoadingVisible;
@property (weak, nonatomic) id<WCFinderRefreshTableFooterViewDelegate> delegate;
@property (copy, nonatomic) NSString *normalText;
@property (nonatomic) double heightLimit;
@property (nonatomic) double heightInNoMoreDataState;
@property (nonatomic) unsigned long long style;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTextColor:(id)a0;
- (void)setNoMoreViewColor:(id)a0;
- (void)setUseDarkLoading:(BOOL)a0;
- (void)setNoMoreViewDarkStyle:(BOOL)a0;
- (void)onConfigLabelTop:(double)a0;
- (BOOL)isLoadingNow;
- (BOOL)isNormalStateNow;
- (void)onResumeOfLoading;
- (void)onForceNoramalToLoadingState;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfBlank;
- (void)onStateOfNoMoreData:(id)a0;
- (void)onSetStateForNoMoreData:(id)a0;
- (void)onStateOfError:(id)a0;
- (void)onClickRetry;
- (void)onClick;
- (void)refreshScrollViewDidScroll:(id)a0;
- (void)forceUpdateRefreshState:(id)a0;
- (void)refreshScrollViewDidScroll:(id)a0 checkIsDragging:(BOOL)a1;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)a0;
- (void).cxx_destruct;

@end
