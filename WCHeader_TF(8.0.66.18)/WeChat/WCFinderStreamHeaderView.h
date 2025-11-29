@class WCFinderAnimationLoadingView, UILabel, NSString;
@protocol WCFinderStreamHeaderViewDelegate;

@interface WCFinderStreamHeaderView : UICollectionReusableView

@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double pulldownHeight;
@property (retain, nonatomic) NSString *normalTips;
@property (weak, nonatomic) id<WCFinderStreamHeaderViewDelegate> delegate;
@property (nonatomic) double triggerHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLoadingImage:(id)a0;
- (void)configNormalTips:(id)a0;
- (void)setLoadingTop:(double)a0;
- (BOOL)isLoadingNow;
- (void)onResumeOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfError:(id)a0;
- (void)onStateOfNoMore:(id)a0;
- (void)onStateOfNone;
- (void)streamRefreshScrollViewDidScroll:(id)a0;
- (void)streamRefreshScrollViewDidEndDragging:(id)a0;
- (void)streamRefreshScrollViewDataSourceDidFinishedLoading:(id)a0;
- (void).cxx_destruct;

@end
