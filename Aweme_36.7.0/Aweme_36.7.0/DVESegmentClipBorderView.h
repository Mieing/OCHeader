@class UIColor, CAShapeLayer;

@interface DVESegmentClipBorderView : UIView

@property (retain, nonatomic) CAShapeLayer *outerLayer;
@property (retain, nonatomic) CAShapeLayer *innerLayer;
@property (nonatomic) double innerMargin;
@property (nonatomic) double borderWidth;
@property (nonatomic) double radius;
@property (nonatomic) double innerRadius;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *innerStrokeColor;
@property (nonatomic) BOOL buildOutSideFrame;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
