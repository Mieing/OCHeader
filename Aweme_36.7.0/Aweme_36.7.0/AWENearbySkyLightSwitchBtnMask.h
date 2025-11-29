@class CAShapeLayer;

@interface AWENearbySkyLightSwitchBtnMask : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } holeRect;
@property (nonatomic) double holeRadius;
@property (nonatomic) double alphaDuration;
@property (nonatomic) double drawerAnimateDuration;
@property (nonatomic) double drawerInitialWidth;
@property (nonatomic) double drawerFinallWidth;
@property (nonatomic) double drawerAnimateWidth;
@property (retain, nonatomic) CAShapeLayer *fillLayer;
@property (copy, nonatomic) id /* block */ clickBlk;

- (void)addMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 holeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 holdRadius:(double)a2 alphaDuration:(double)a3 drawerAnimateDuration:(double)a4 drawerInitialWidth:(double)a5 drawerFinallWidth:(double)a6;
- (void)dismiss;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;
- (void)tap;

@end
