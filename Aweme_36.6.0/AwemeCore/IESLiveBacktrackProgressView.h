@class UILabel, UIBezierPath, CAShapeLayer;

@interface IESLiveBacktrackProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CAShapeLayer *placeholderProgressLayer;
@property (retain, nonatomic) UILabel *progressLabel;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIBezierPath *bezierPath;

- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
