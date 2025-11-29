@interface AWELifeCardHotView : UIView

@property (nonatomic) struct CGPoint { double x; double y; } currentPoint;
@property (nonatomic) struct CGPoint { double x; double y; } curPending2Point;
@property (nonatomic) struct CGPoint { double x; double y; } tempPoint;
@property (copy, nonatomic) id /* block */ hotTouchHandler;

+ (id)convertNumberStringFromFloat:(double)a0;

- (void)antiQuickHandel;
- (id)_float1:(double)a0 byDividingBy:(double)a1;
- (id)notRounding:(float)a0 afterPoint:(int)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
