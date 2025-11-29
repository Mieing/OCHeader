@class CAShapeLayer;

@interface IESLiveRoundProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
