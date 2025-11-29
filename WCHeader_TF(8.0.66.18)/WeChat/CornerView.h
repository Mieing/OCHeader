@class UIColor;

@interface CornerView : UIView

@property (nonatomic) BOOL leftTop;
@property (nonatomic) BOOL rightTop;
@property (nonatomic) BOOL rightBottom;
@property (nonatomic) BOOL leftBottom;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) int lineSize;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
