@class UIColor;

@interface AFDStrokeLabel : UILabel

@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *strokeColor;

- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
