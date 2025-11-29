@class WCFinderAnimationLoadingView, UILabel;

@interface WCFinderCollectionHalfHeaderRefreshView : EGORefreshTableHeaderView

@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) double triggerHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onStateOfPulling;
- (void)onStateOfNormal;
- (void)onStateOfNormal:(id)a0;
- (void)onStateOfLoading;
- (void)onStateOfError:(id)a0;
- (void)onStateOfNoMore:(id)a0;
- (void)egoRefreshScrollViewDidScroll:(id)a0;
- (void)egoRefreshScrollViewDidEndDragging:(id)a0;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)a0;
- (void).cxx_destruct;

@end
