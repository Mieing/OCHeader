@class CAGradientLayer, NSString, UIImageView, CALayer, UIView;

@interface AWEEcomSearchMarqueeView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) UIImageView *snapshotImageView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double borderRadius;
@property (nonatomic) double borderWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configMarqueeViewWithBorderRadius:(double)a0 borderWidth:(double)a1;
- (void)playAnimationIfNeeded;
- (void)setupMaskLayerWithBorderRadius:(double)a0;
- (void)setupBorderMaskWithBorderRadius:(double)a0 borderWidth:(double)a1;
- (void)setupGradientLayer;
- (id)applyGaussianBlurToImage:(id)a0 radius:(double)a1;
- (id)createFourDirectionRingMaskWithRingWidth:(double)a0;
- (void)configMarqueeViewWithBorderRadius:(double)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
