@class NSString, UIView;

@interface MMLiveObjectSingleTouchManipulationGestureRecognizer : UIGestureRecognizer <MMLiveObjectManipulationGestureRecognizing>

@property (nonatomic) struct CGAffineTransformComponents { struct CGSize { double width; double height; } scale; double horizontalShear; double rotation; struct CGVector { double dx; double dy; } translation; } transformComponents;
@property (nonatomic) struct CGAffineTransformComponents { struct CGSize { double width; double height; } scale; double horizontalShear; double rotation; struct CGVector { double dx; double dy; } translation; } transformComponentsAtGesetureBeginning;
@property (nonatomic) struct CGPoint { double x; double y; } currentTouchPosition;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transformAtGesetureBeginning;
@property (weak, nonatomic) UIView *manipulatedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)overrideCurrentTransformComponents:(struct CGAffineTransformComponents { struct CGSize { double x0; double x1; } x0; double x1; double x2; struct CGVector { double x0; double x1; } x3; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)updateTouchPositionWithTouches:(id)a0;
- (void)updateTransformAndTouchPositionWithTouches:(id)a0;
- (void)updateTransformWithTouch:(id)a0;
- (void)resetState;
- (struct CGAffineTransformComponents { struct CGSize { double x0; double x1; } x0; double x1; double x2; struct CGVector { double x0; double x1; } x3; })decomposeManipulationTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void).cxx_destruct;

@end
