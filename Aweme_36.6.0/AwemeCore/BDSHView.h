@interface BDSHView : UIView

@property (retain, nonatomic) struct CGGradient { } *gradientRef;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (copy, nonatomic) id /* block */ touchUpCallback;

- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
