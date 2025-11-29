@class UIColor, CAGradientLayer;

@interface AWESearchBaseShimmerView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long direction;
@property (nonatomic) double duration;
@property (nonatomic) BOOL repeatEnabled;
@property (nonatomic) double pauseBetweenLoops;
@property (nonatomic) double highlightWidthRatio;
@property (retain, nonatomic) UIColor *baseColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) BOOL autoStart;

+ (id)attachToView:(id)a0;

- (id)currentGradientColors;
- (void)updateGradientAxis;
- (id)startLocations;
- (void)startShimmer;
- (id)endLocations;
- (void)stopShimmer;
- (void)attachToView:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
