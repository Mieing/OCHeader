@class UITapGestureRecognizer, UIImpactFeedbackGenerator;
@protocol InteractiveImplicitViewDelegate;

@interface InteractiveImplicitView : ImplicitView

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) double nextShakeCoordinate;
@property (weak, nonatomic) id<InteractiveImplicitViewDelegate> delegate;
@property (nonatomic) double shakeDistanceBetween;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFrameWithBottomBoundaryY:(double)a0;
- (void)onWillStartWithOrigin:(inout struct CGPoint { double x0; double x1; } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handleTapGesture:(id)a0;
- (void)tap;
- (void)shake;
- (void).cxx_destruct;

@end
