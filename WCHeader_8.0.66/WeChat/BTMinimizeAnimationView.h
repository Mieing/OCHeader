@class CAShapeLayer, UIView;

@interface BTMinimizeAnimationView : MMUIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *snapshotCellView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 snapshotCellView:(id)a1;
- (void)initSubview;
- (void)setMaskLayerAnimationWithStartPath:(id)a0 endPath:(id)a1 duration:(double)a2;
- (void)setSnapshotCellViewAlpha:(double)a0;
- (void).cxx_destruct;

@end
