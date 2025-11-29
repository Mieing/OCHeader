@class UIView;

@interface AFDColorRingAnimationConfig : NSObject

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *alphaView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentSubview;
@property (nonatomic) double duration;
@property (nonatomic) double targetScale;
@property (nonatomic) struct CGPoint { double x; double y; } endCenter;
@property (nonatomic) double alphaHoldRatio;
@property (nonatomic) BOOL useSeparateCurves;
@property (nonatomic) BOOL scrubsLinearly;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL preserveCurrentState;
@property (nonatomic) BOOL enableClipping;

+ (id)configWithContentView:(id)a0 alphaView:(id)a1 duration:(double)a2 targetScale:(double)a3 endCenter:(struct CGPoint { double x0; double x1; })a4;
+ (id)defaultConfig;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
