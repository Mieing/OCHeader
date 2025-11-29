@class UITapGestureRecognizer, NSTimer, CALayer;

@interface AWEGrouponC2GuideMaskView : UIView

@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (copy, nonatomic) id /* block */ dismissBlk;
@property (retain, nonatomic) CALayer *shapeLayer;
@property (nonatomic) long long autoDismissTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } highLightRect;
@property (nonatomic) double radius;

- (void)startAutoHideIfNeeded;
- (void)updateHighLightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showWithBlk:(id /* block */)a0 dismissBlk:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
