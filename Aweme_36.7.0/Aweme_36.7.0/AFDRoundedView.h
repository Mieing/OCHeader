@class UIColor;

@interface AFDRoundedView : UIView

@property (nonatomic) unsigned long long drawnBordersSides;
@property (nonatomic) unsigned long long roundedCorners;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct AFDRoundedCornerRadius { double topLeft; double topRight; double bottomRight; double bottomLeft; } roundedCornerRadius;

- (void)addPathToContext:(struct CGContext { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 respectDrawnBorder:(BOOL)a2;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
