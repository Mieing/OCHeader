@class UIColor, UIImageView, CAShapeLayer, UILabel, NSDictionary;

@interface AWEIMCircleProgressView : UIView

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) CAShapeLayer *baseLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIImageView *centerImageView;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *backgroudProgressColor;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double progressLineWidth;
@property (retain, nonatomic) NSDictionary *progressLabelAttributes;

- (void)p_updateProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andStyle:(unsigned long long)a1 andCenterImage:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andCenterImage:(id)a1;
- (void).cxx_destruct;
- (void)resetProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andStyle:(unsigned long long)a1;

@end
