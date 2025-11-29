@class CAShapeLayer;

@interface IESECRelationDashLineComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) CAShapeLayer *dashLineLayer;

+ (id /* block */)dashLine;
+ (id /* block */)solidLineWithPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
+ (id /* block */)dashLineWithPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 width:(double)a1;

- (void)updateUIWithModel:(id)a0;
- (double)p_dashLineWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
