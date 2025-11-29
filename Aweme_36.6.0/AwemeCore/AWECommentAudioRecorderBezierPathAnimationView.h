@class UIBezierPath, CAGradientLayer, NSTimer;

@interface AWECommentAudioRecorderBezierPathAnimationView : AWECommentAudioRecorderBaseView

@property (retain, nonatomic) CAGradientLayer *shapeLayer;
@property (retain, nonatomic) CAGradientLayer *outShapeLayer;
@property (retain, nonatomic) CAGradientLayer *bottomShapeLayer;
@property (retain, nonatomic) CAGradientLayer *animationLayerOne;
@property (retain, nonatomic) CAGradientLayer *animationLayerTwo;
@property (retain, nonatomic) CAGradientLayer *animationLayerThree;
@property (retain, nonatomic) UIBezierPath *animationLayerOnePath;
@property (retain, nonatomic) UIBezierPath *animationLayerTwoPath;
@property (retain, nonatomic) UIBezierPath *animationLayerThreePath;
@property (nonatomic) double jumpValue;
@property (nonatomic) double jumpMin;
@property (nonatomic) double jumpMax;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationRect;
@property (nonatomic) BOOL isAnimationing;
@property (nonatomic) BOOL prepareCancel;
@property (retain, nonatomic) NSTimer *animationTimer;

+ (id)colorWithHex:(id)a0 alpha:(float)a1;

- (void)dismissAnimation;
- (void)startWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)stopWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)increaseVolumeAnimation:(double)a0 currentTime:(double)a1;
- (void)updateLayerColor;
- (id)jumpLayerColorOnes;
- (id)jumpLayerColorTwos;
- (id)jumpLayerColorThrees;
- (id)shapeLayerColors;
- (id)outLayerColors;
- (void)addSubLayer;
- (struct CGPoint { double x0; double x1; })getCenter;
- (void)animationLayerWithCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)animationPathWithCenter:(struct CGPoint { double x0; double x1; })a0 minControl:(double)a1 maxControl:(double)a2 finalControl:(double *)a3;
- (void)animationWithLayer:(id)a0 fromPath:(id)a1 toPath:(id)a2;
- (struct CGPoint { double x0; double x1; })getDefaultStartPointWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (struct CGPoint { double x0; double x1; })getDefaultEndPointWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (int)getRandomNumberWithMin:(double)a0 max:(double)a1;
- (id)generateGradientLayerWithColors:(id)a0;
- (int)getStartNumber;
- (double)getXWithNumber:(double)a0 radius:(double)a1;
- (double)getYWithNumber:(double)a0 radius:(double)a1;
- (float)arcNumberWithNumber:(float)a0;
- (double)getTransformPadding;
- (void).cxx_destruct;
- (void)animation;
- (id)shadowColor;

@end
