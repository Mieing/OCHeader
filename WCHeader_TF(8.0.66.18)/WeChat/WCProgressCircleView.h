@class UIColor, CAShapeLayer;

@interface WCProgressCircleView : UIView

@property (nonatomic) double progressBorderWidth;
@property (retain, nonatomic) UIColor *progressFrontColor;
@property (retain, nonatomic) UIColor *progressBackColor;
@property (retain, nonatomic) CAShapeLayer *progressBackShapeLayer;
@property (retain, nonatomic) CAShapeLayer *progressFrontShapeLayer;
@property (nonatomic) double currentProgress;
@property (nonatomic) long long stepMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setInfinity;
- (void)setInfinityWithProgress:(double)a0;
- (void)setProgress:(double)a0;
- (double)progress;
- (void)resetProgress;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (double)_getValidProgressFrom:(double)a0;
- (void)resizeView;
- (void)resetDefaultStyle;
- (void)initView;
- (void).cxx_destruct;

@end
