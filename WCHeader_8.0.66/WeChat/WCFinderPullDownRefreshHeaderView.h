@class WCFinderAnimationLoadingView, UILabel;
@protocol WCFinderPullDownRefreshHeaderViewStatusDelegate;

@interface WCFinderPullDownRefreshHeaderView : EGORefreshTableHeaderView

@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (weak, nonatomic) id<WCFinderPullDownRefreshHeaderViewStatusDelegate> statusDelegate;
@property (nonatomic) double triggerHeight;
@property (nonatomic) unsigned long long triggerMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configWithImageName:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configWithImage:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configWithImage:(id)a1 configWithImageName:(id)a2;
- (void)setState:(int)a0;
- (void)onStateOfPulling;
- (BOOL)isLoadingNow;
- (BOOL)isOnLoadingRefreshState;
- (void)onResumeOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfError:(id)a0;
- (void)onStateOfNoMore:(id)a0;
- (void)setTipsTextColor:(id)a0;
- (void)egoRefreshScrollViewDidScroll:(id)a0;
- (void)egoRefreshScrollViewDidEndDragging:(id)a0;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)a0;
- (void).cxx_destruct;

@end
