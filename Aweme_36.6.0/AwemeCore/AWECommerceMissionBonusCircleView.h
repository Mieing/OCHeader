@class CAGradientLayer, CAShapeLayer, UILabel, UIView;

@interface AWECommerceMissionBonusCircleView : UIView

@property (retain, nonatomic) UIView *circleContentView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *shapeView;
@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)generateCircleShapeLayer:(id)a0 strokeColor:(id)a1 startAngle:(double)a2 endAngle:(double)a3;
- (id)generateGradientLayerWithFlag:(BOOL)a0;
- (void)setupShapeLayerWithView:(id)a0 endAngle:(double)a1 isLightType:(BOOL)a2;
- (void)updateBonusViewWithMission:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
