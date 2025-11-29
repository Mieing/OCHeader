@class UIColor;

@interface AWEEcomSearchEllipseView : UIImageView

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void)updateBlurredEllipseWith:(double)a0;
- (id)drawOriginalEllipse;
- (id)applyGaussianBlurToImage:(id)a0 blurRadius:(double)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 with:(id)a1 with:(double)a2;
- (void).cxx_destruct;

@end
