@class NSString, UIView;

@interface AFDPinchUpdateAnimator : NSObject <AFDPinchUpdateAnimatorProtocol>

@property (retain, nonatomic) UIView *pinchTargetView;
@property (nonatomic) BOOL isStartPinch;
@property (nonatomic) BOOL disableChangeAnchorPoint;
@property (nonatomic) BOOL isNotFirstTimeSingleFingerPinchGesture;
@property (nonatomic) struct CGPoint { double x; double y; } lastPinchGesturePosition;
@property (nonatomic) struct CGPoint { double x; double y; } initialAnchorPoint;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } standardTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)changeToAnchorPoint:(struct CGPoint { double x0; double x1; })a0 withoutMovingForView:(id)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2;

- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2 numberOfTouches:(unsigned long long)a3;
- (void)moveTargetViewToTargetFrame;
- (void)startAnimationWithPinchTargetView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)startAnimationWithPinchTargetView:(id)a0;
- (void)startAnimationWithPinchTargetView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 disableChangeAnchorPoint:(BOOL)a2;
- (void)resetPinchTargetView;
- (void)updateTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)calculateAppropriateScale:(double)a0;
- (double)zoomInMaxScaleValue;
- (void).cxx_destruct;

@end
