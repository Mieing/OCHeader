@class WCFinderAnimationLoadingView;

@interface WCFinderProfileNormalTopRefreshView : WCFinderProfileTopRefreshView

@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)willBeginRefresh;
- (void)setState:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
