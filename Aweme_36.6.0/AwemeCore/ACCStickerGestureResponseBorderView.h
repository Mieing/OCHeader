@class CAShapeLayer;

@interface ACCStickerGestureResponseBorderView : UIView

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (nonatomic) double currentScale;

- (void)updateBorderScale:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateBorderPath;

@end
