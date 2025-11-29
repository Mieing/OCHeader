@class CAGradientLayer, UIView;

@interface AWEECMallCategoryMaskView : UIView

@property (nonatomic) double leftMaskWidth;
@property (nonatomic) double rightMaskWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskFrame;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (retain, nonatomic) UIView *containerView;

- (void)updateMaskLayerWithLeftWidth:(double)a0 rightWidth:(double)a1 scrollView:(id)a2;
- (void)updateContainerView;
- (void)resetContainerViewLayer;
- (void)setMaskRasterizeIfNeeded;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
