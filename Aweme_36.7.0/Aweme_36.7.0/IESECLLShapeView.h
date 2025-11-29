@class CAShapeLayer;

@interface IESECLLShapeView : IESECLLPassthroughView <IESECLLComponent> {
    CAShapeLayer *_shapeLayer;
}

@property (nonatomic) struct CGColor { } *fillColor;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
