@class CAShapeLayer;

@interface CircleToSearchOverlayView : MMUIView

@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *focusBoxLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusFrame;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)maskPathForFocusFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFocusFrameDirectly:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFocusFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andAnimationDuration:(double)a1;
- (void).cxx_destruct;

@end
