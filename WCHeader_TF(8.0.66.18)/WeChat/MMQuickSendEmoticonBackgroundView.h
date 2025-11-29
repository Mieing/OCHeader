@class CALayer;

@interface MMQuickSendEmoticonBackgroundView : UIView

@property (retain, nonatomic) CALayer *pubbleLayer;
@property (nonatomic) double triangleXRightMargin;

+ (id)createMaskPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pubblePadding:(double)a1 cornerRadius:(double)a2 triangleWidth:(double)a3 triangleHeight:(double)a4 triangleX:(double)a5;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateTriangleXRightMargin:(double)a0;
- (void)updateShapeLayer;
- (void).cxx_destruct;

@end
