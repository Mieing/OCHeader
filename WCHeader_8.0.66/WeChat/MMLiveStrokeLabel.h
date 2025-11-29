@class UIColor;

@interface MMLiveStrokeLabel : UILabel

@property (retain, nonatomic) UIColor *strokeColorFrom;
@property (retain, nonatomic) UIColor *strokeColorTo;
@property (nonatomic) struct CGPoint { double x; double y; } strokeStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } strokeEndPoint;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double strokeWidth;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
