@class DVEVCContext, CAShapeLayer;

@interface DVECanvasVideoBorderView : UIView

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (weak, nonatomic) DVEVCContext *vcContext;

- (void)updateTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateCrop:(id)a0 scale:(double)a1 maxBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateScale:(double)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateRoation:(double)a0;
- (void)updateClip:(id)a0 scale:(double)a1 maxBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
