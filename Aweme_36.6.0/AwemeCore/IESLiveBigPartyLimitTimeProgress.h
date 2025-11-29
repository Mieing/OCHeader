@class CAShapeLayer, UIView;

@interface IESLiveBigPartyLimitTimeProgress : UIView

@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) double progress;

- (void)p_addRoundingCorners;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateProgress:(double)a0;

@end
