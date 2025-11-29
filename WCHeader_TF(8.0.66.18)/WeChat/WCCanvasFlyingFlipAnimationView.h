@class UIView, WCADCanvasEggAnimationFlyingFlip, NSArray, WCCanvasFlyingFlipSpecialAnimationView, NSString, UIImageView, WCAdURLImageView, NSMutableArray;
@protocol WCCanvasFlyingFlipAnimationViewDelegate;

@interface WCCanvasFlyingFlipAnimationView : MMUIView <CAAnimationDelegate>

@property (retain, nonatomic) WCADCanvasEggAnimationFlyingFlip *flyingFlipInfo;
@property (retain, nonatomic) UIImageView *flipBackView;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) struct CGSize { double width; double height; } transitionImageSize;
@property (retain, nonatomic) WCAdURLImageView *transitionImageView;
@property (retain, nonatomic) UIView *mirroringView;
@property (retain, nonatomic) UIView *transitionZView;
@property (retain, nonatomic) UIView *yRotationView;
@property (retain, nonatomic) UIView *scaleView;
@property (retain, nonatomic) WCCanvasFlyingFlipSpecialAnimationView *specialAnimationView;
@property (retain, nonatomic) NSMutableArray *impactFeedbacks;
@property (retain, nonatomic) NSArray *impactStyles;
@property (nonatomic) int impactStyleIndex;
@property (retain, nonatomic) NSArray *impactTimings;
@property (nonatomic) int impactTimingIndex;
@property (weak, nonatomic) id<WCCanvasFlyingFlipAnimationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flyingFlipInfo:(id)a1 flipBackView:(id)a2 containerView:(id)a3 transitionImageSize:(struct CGSize { double x0; double x1; })a4;
- (void)dealloc;
- (void)generateSubviews;
- (id)fetchDefaultImageWithColorString:(id)a0;
- (void)updateFlipBackViewWithImage:(id)a0;
- (void)startFlipAnimation;
- (void)startZRotationAnimation;
- (void)startYRotationAnimation;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })fetchYTransformWithDegree:(double)a0;
- (void)startScaleAnimation;
- (void)startXPositionAnimation;
- (void)startOpacityAnimation;
- (void)startFinalAnimationWithNewCollection:(BOOL)a0 finalCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)startFinalYRotationAnimationWithNewCollection:(BOOL)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)startToImpact;
- (id)generateImpactTimings;
- (void)triggerImpactOnce;
- (void)triggerImpactOnceAtIndex:(int)a0;
- (void).cxx_destruct;

@end
