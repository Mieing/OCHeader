@class UIBezierPath, UIColor;

@interface StrokeView : UIView

@property (retain, nonatomic) UIBezierPath *strokePath;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) BOOL fill;
@property (nonatomic) int blendMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
