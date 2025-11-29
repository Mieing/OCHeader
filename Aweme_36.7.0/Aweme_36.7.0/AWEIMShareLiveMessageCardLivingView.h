@class UIView, AWEBinding, AWEGradientView, UIImageView, CAGradientLayer, NSMutableArray, LOTAnimationView, UILabel, MASConstraint;

@interface AWEIMShareLiveMessageCardLivingView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *lottieBackgroundView;
@property (retain, nonatomic) AWEGradientView *livingLottieGradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) LOTAnimationView *livingLottieView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *binds;
@property (retain, nonatomic) AWEBinding *livingViewHiddenBinding;
@property (retain, nonatomic) UIImageView *livingEndView;
@property (retain, nonatomic) MASConstraint *titleLabelConstraint;

- (void)__setupUI;
- (void)stopAnimationIfNeed;
- (void)updateWithLivingViewModel:(id)a0;
- (void)__config;
- (void)observeLivingViewStatusWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
