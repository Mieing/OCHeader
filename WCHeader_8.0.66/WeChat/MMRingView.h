@class UIColor;

@interface MMRingView : UIView

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double from;
@property (nonatomic) double to;
@property (nonatomic) double lineWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
