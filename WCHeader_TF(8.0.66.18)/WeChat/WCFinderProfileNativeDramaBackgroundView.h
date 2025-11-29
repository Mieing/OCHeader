@class CAGradientLayer;

@interface WCFinderProfileNativeDramaBackgroundView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;

+ (id)startColor;
+ (id)endColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)layoutSubviews;
- (id)_gradientColors;
- (void).cxx_destruct;

@end
