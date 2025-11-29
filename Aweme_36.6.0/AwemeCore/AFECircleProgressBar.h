@class UIColor, NSArray, CAShapeLayer, UIBezierPath, CALayer, NSMutableArray, CADisplayLink;

@interface AFECircleProgressBar : CALayer {
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_progressLayer;
    CALayer *_gradientLayer;
    UIBezierPath *_circlePath;
    double _progressAdder;
    BOOL _enableAnimate;
    CADisplayLink *_displayLink;
    double _destPercent;
    NSArray *_location;
}

@property (nonatomic) BOOL clockWise;
@property (nonatomic) double animateTime;
@property (nonatomic) double endAngle;
@property (nonatomic) double progressBarWidth;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic) double startAngle;
@property (copy, nonatomic) NSArray *gradientLocation;
@property (retain, nonatomic) NSMutableArray *gradientColors;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressBarTrackColor;
@property (nonatomic) BOOL supportCustomUI;

- (void)_buildShowView;
- (void)_addAmimation;
- (void)_addDisplayLink;
- (void)_updateCircularPath;
- (void)setProgress:(double)a0 animation:(BOOL)a1;
- (void)_resizeGradientLayer;
- (void)_updateGradientColor;
- (void)_addColorShapeLayer;
- (void)_addBackgroundLayer;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_updateProgressBar;
- (void)_updateGradientLayer;

@end
