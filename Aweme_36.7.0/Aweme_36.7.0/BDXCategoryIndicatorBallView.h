@class CAShapeLayer, UIView;

@interface BDXCategoryIndicatorBallView : BDXCategoryIndicatorComponentView

@property (retain, nonatomic) UIView *smallBall;
@property (retain, nonatomic) UIView *bigBall;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) double ballScrollOffsetX;

- (void)jx_refreshState:(id)a0;
- (void)jx_contentScrollViewDidScroll:(id)a0;
- (void)jx_selectedCell:(id)a0;
- (void)configureIndicatorBall;
- (id)getBezierPathWithSmallCir:(id)a0 andBigCir:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
