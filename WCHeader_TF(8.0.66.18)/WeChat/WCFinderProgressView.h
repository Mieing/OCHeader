@class UIColor, CAShapeLayer;

@interface WCFinderProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *bottomShapeLayer;
@property (retain, nonatomic) CAShapeLayer *shpreLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *bottomStrokeColor;
@property (retain, nonatomic) UIColor *lineStrokeColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createLayer;
- (void)setupProgress:(double)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
