@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface WCFinderPlaybackSpeedView : UIView

@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *playbackSpeedLabel;
@property (retain, nonatomic) UIImageView *firstPlayIcon;
@property (retain, nonatomic) UIImageView *secondPlayIcon;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateWithTitle:(id)a0;
- (void)updateWithTitle:(id)a0 hideIconView:(BOOL)a1;
- (double)_getIconContentWidth;
- (void)layoutViewWithLandscape:(BOOL)a0;
- (void)_animatedLayoutViewWithType:(unsigned long long)a0;
- (void)doEnhanceAnimation;
- (void)resetEnhance;
- (void)resetEnhanceAnimation;
- (id)genUIImageView;
- (void)animationUpdateWithTitle:(id)a0 hideIconView:(BOOL)a1 completion:(id /* block */)a2;
- (void)startAnimation;
- (void)stopAnimation;
- (void).cxx_destruct;

@end
