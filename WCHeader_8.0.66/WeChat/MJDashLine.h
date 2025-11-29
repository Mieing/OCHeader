@class UIColor, NSArray, CAShapeLayer;

@interface MJDashLine : MMUIView

@property (readonly, nonatomic) BOOL isVertical;
@property (readonly, nonatomic) CAShapeLayer *layer;
@property (retain, nonatomic) UIColor *dashColor;
@property (copy, nonatomic) NSArray *lineDashPattern;

+ (Class)layerClass;
+ (id)verticalLine;
+ (id)horizontalLine;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isVertical:(BOOL)a1;
- (void)layoutSubviews;
- (void)setDashColor:(id)a0 animated:(BOOL)a1;

@end
