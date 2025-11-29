@class UIVisualEffectView;
@protocol AWEIMPushGuideBannerViewDelegate;

@interface AWEIMPushGuideBannerView : AWEIMMessageTabLeftTextRightIconBannerView

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (weak, nonatomic) id<AWEIMPushGuideBannerViewDelegate> delegate;

- (void)p_didBecomeActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pushGuideStyle:(unsigned long long)a1;
- (void)refreshBannerViewWithModel:(id)a0;
- (void)setupBannerView;
- (void)onClickBannerView;
- (void)pushGuideBannerViewOnClockClose;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
