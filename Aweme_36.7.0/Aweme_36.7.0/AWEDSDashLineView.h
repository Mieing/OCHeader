@class CAShapeLayer;

@interface AWEDSDashLineView : UIView

@property (retain, nonatomic) CAShapeLayer *dashLayer;

+ (id)dashedLineWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineColor:(id)a1 lineWidth:(double)a2 dashPattern:(id)a3;

- (void)setupDashedLineWithColor:(id)a0 lineWidth:(double)a1 dashPattern:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
