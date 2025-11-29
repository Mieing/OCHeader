@class UIColor, CAShapeLayer;

@interface AWEMusicCircleProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *curShapreLayer;
@property (retain, nonatomic) CAShapeLayer *bgShapeLayer;
@property (retain, nonatomic) CAShapeLayer *auxiliaryLayer;
@property (nonatomic) double progress;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *bgLineColor;

- (id)generatePath;
- (id)auxiliaryPath;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (void)updateProgress:(double)a0;

@end
