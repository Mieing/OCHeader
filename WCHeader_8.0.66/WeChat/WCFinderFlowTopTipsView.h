@class WCFinderAnimationLoadingView, UILabel, NSString;
@protocol WCFinderFlowTopTipsViewDelegate;

@interface WCFinderFlowTopTipsView : UICollectionViewCell

@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double pulldownHeight;
@property (retain, nonatomic) NSString *normalTips;
@property (weak, nonatomic) id<WCFinderFlowTopTipsViewDelegate> delegate;
@property (nonatomic) double triggerHeight;
@property (nonatomic) BOOL onlyVisbleWhenFullyDragged;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
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
- (void)setTipsColor:(id)a0;
- (void)finderFlowTopTipsViewDidScroll:(id)a0;
- (void)finderFlowTopTipsViewDidEndDragging:(id)a0;
- (void)finderFlowTopTipsViewDataSourceDidFinishedLoading:(id)a0;
- (void).cxx_destruct;

@end
