@class UIColor, NSString, LOTAnimationView, UIImageView, UILabel;

@interface IESECShopExtensionAreaTipView : IESECShopMonitorActionView {
    double _lastScrollPercent;
}

@property (retain, nonatomic) UILabel *bannerTitleLabel;
@property (retain, nonatomic) LOTAnimationView *rightIconLottieView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (nonatomic) unsigned long long themeType;
@property (nonatomic) unsigned long long uiTheme;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *lottieFilePath;

- (void)updateTipText:(id)a0;
- (void)scrollToPercent:(double)a0;
- (void)updateBannerTitleStyle;
- (void)updateLottileStyle;
- (id)p_rightIconLottieFilePath:(unsigned long long)a0;
- (void)switchTheme:(unsigned long long)a0 uiTheme:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
