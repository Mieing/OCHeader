@class UIColor, NSArray, UIImageView, MMTimer, UIImage;

@interface MMCircularProgressView : UIView

@property (retain, nonatomic) UIImageView *borderImageView;
@property (retain, nonatomic) NSArray *steps;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) double current;
@property (nonatomic) BOOL clockwise;
@property (nonatomic) double animationStep;
@property (retain, nonatomic) MMTimer *animationTimer;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIImage *progressImage;
@property (copy, nonatomic) id /* block */ progressTimingFunction;
@property (retain, nonatomic) UIImage *borderImage;
@property (nonatomic) double edgeRatio;
@property (nonatomic) double innerPadding;
@property (nonatomic) int lineCapStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)incrementBy:(double)a0;
- (void)setMaxValue:(double)a0;
- (void)setMinValue:(double)a0;
- (void)setCurrentValue:(double)a0;
- (void)setOrientation:(BOOL)a0;
- (void)setIncrementalSteps:(id)a0;
- (double)currentValue;
- (double)maxValue;
- (BOOL)orientation;
- (void)startAnimationWithDuration:(double)a0;
- (void)stopAnimation;
- (void)updateAnimation;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
