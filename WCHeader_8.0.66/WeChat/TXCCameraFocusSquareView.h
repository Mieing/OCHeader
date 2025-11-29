@interface TXCCameraFocusSquareView : UIView

@property (nonatomic) double scalingFactor;

+ (id)defaultFocusSquareView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupFocusShapeLayer;
- (void)updatePoint:(struct CGPoint { double x0; double x1; })a0;

@end
