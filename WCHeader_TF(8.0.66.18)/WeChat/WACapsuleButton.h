@class UIView, UILabel, CAShapeLayer;

@interface WACapsuleButton : MMUIButton

@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView *hightlightedView;
@property (retain, nonatomic) UILabel *bannerLabel;
@property (nonatomic) long long navMode;
@property (nonatomic) long long menuState;
@property (nonatomic) long long translateState;
@property (retain, nonatomic) UIView *stateView;
@property (retain, nonatomic) UIView *bannerView;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UILabel *iconSubtextLabel;
@property (retain, nonatomic) UIView *splitLineView;
@property (nonatomic) double scale;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configBanner:(id)a0;
- (void)sizeToFit;
- (void)removeBanner;
- (void)updateIcon:(id)a0;
- (void)updateWithIconView:(id)a0 iconSubtext:(id)a1;
- (BOOL)isAutoWidth;
- (void)rollIconView;
- (void)updateScale:(double)a0;
- (void)layoutSubviews;
- (void)updateSubviews;
- (void)resetBannerLayout;
- (void)setSplitLineHidden:(BOOL)a0;
- (double)bannerWidth;
- (void)setHighlighted:(BOOL)a0;
- (id)splitLineColor:(long long)a0;
- (id)highlightedColor:(long long)a0;
- (void).cxx_destruct;

@end
