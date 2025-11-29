@class UIColor;

@interface ACCBrushPopoverContentView : UIView

@property (nonatomic) double popoverCornerRadius;
@property (nonatomic) double sharpOffset;
@property (retain, nonatomic) UIColor *popoverColor;

- (id)popoverSharpBezierPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sharpOffset:(double)a1 cornerRadius:(double)a2;
- (void)drawPopover;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
