@class MMUIImageView;

@interface MMLiveAdCountdownBannerView : WCFinderAdCountdownBannerView

@property (retain, nonatomic) MMUIImageView *doneIcon;

- (void)setupSubviews;
- (void)layoutComponents;
- (id)countdownLabelString;
- (void)updateUIWithTime:(long long)a0;
- (void)countdownEndAnimate;
- (BOOL)shouldShowAdsConfirmView;
- (void).cxx_destruct;

@end
