@class UIColor;

@interface MBBarProgressView : UIView

@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *progressRemainingColor;
@property (retain, nonatomic) UIColor *progressColor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
