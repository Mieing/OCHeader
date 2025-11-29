@class UIImageView, AWEGradientView;

@interface AWENearbyPOIContentContainer : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEGradientView *bgGraidentView;
@property (retain, nonatomic) AWEGradientView *boderGradientView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;

- (void)configViewsWithModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)addBgGradient;
- (void)addBoderGradient;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
