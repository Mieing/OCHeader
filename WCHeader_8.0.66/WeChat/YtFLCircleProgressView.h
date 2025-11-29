@class UIColor, NSString, CAShapeLayer, UIFont, CATextLayer;

@interface YtFLCircleProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *circleBackgroundLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CATextLayer *contentTextLayer;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double startAngle;
@property (retain, nonatomic) UIColor *trackColor;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *progressColor;
@property (copy, nonatomic) NSString *progressLineCap;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSString *contentText;
@property (retain, nonatomic) UIColor *contentTextColor;
@property (retain, nonatomic) UIFont *contentTextFont;

- (id)init;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)fl_drawCircleBackgroundLayer;
- (void)fl_drawProgressLayer;
- (void)fl_drawContentTextLayer;
- (struct CGSize { double x0; double x1; })fl_sizeString:(id)a0 font:(id)a1 constrainedSize:(struct CGSize { double x0; double x1; })a2 mode:(long long)a3;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
