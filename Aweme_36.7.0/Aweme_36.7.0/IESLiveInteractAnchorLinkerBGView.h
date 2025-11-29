@class CAGradientLayer, CAShapeLayer;

@interface IESLiveInteractAnchorLinkerBGView : UIView

@property (retain, nonatomic) CAShapeLayer *leftRectLayer;
@property (retain, nonatomic) CAShapeLayer *righttRectLayer;
@property (retain, nonatomic) CAGradientLayer *leftGradientLayer;
@property (retain, nonatomic) CAGradientLayer *rightGradientLayer;
@property (nonatomic) double ratio;
@property (nonatomic) double splitCenterX;
@property (nonatomic) double splitLineWidth;
@property (nonatomic) long long splitType;

- (id)leftBezierPath;
- (id)rightBezierPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 splitType:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)refreshLayout;

@end
