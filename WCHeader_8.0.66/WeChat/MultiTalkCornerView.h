@class CAShapeLayer;

@interface MultiTalkCornerView : UIView

@property (nonatomic) unsigned long long corner;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 corner:(unsigned long long)a1;
- (void)layoutSubviews;
- (unsigned long long)autoresizingMaskForCorner:(unsigned long long)a0;
- (void).cxx_destruct;

@end
