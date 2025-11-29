@class NSString, UIView;
@protocol AFDPinchUpdateAnimatorProtocol;

@interface AFDPinchUpdateKeepScaleAnimator : NSObject <AFDPinchUpdateKeepScaleAnimatorProtocol>

@property (retain, nonatomic) id<AFDPinchUpdateAnimatorProtocol> baseAnimator;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finishSafeFrame;
@property (nonatomic) BOOL flexibleUseSafeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRatioRectInSafeFrame;
@property (readonly, nonatomic) UIView *pinchTargetView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } initialFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } targetFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)scaleFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2 numberOfTouches:(unsigned long long)a3;
- (double)scaleRelativeToTargetFrame;
- (void)moveTargetViewToTargetFrame;
- (void)startAnimationWithPinchTargetView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)startAnimationWithPinchTargetView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finishSafeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 flexibleUseSafeFrame:(BOOL)a3;
- (void)startAnimationWithPinchTargetView:(id)a0;
- (void)startAnimationWithPinchTargetView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 disableChangeAnchorPoint:(BOOL)a2;
- (void)resetPinchTargetView;
- (id)pinchContentView;
- (void)updateVisibleRatioRectInSafeFrame;
- (void).cxx_destruct;

@end
