@class UIImageView, AWEGradientView;

@interface AWEGuestHomeHeaderBgView : UIView

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) AWEGradientView *gradientView;

- (void)updateAppearanceWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
