@class UIColor, CAShapeLayer;

@interface IESECGoodsFeedPopoverItemContentView : UIView

@property (retain, nonatomic) CAShapeLayer *fillLayer;
@property (retain, nonatomic) CAShapeLayer *pointLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;
@property (nonatomic) unsigned long long position;
@property (nonatomic) double sharpOffset;
@property (nonatomic) BOOL shapeOffsetInCenter;
@property (nonatomic) BOOL showPoint;
@property (retain, nonatomic) UIColor *popoverColor;

+ (id)duxPopoverSharpBezierPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(unsigned long long)a1 sharpOffset:(double)a2 sharpSmooth:(BOOL)a3;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
