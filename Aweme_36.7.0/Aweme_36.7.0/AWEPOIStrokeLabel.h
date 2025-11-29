@class UIColor;

@interface AWEPOIStrokeLabel : UILabel

@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;

- (id)initWithStrokeColor:(id)a0 andStrokeWidth:(double)a1;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
