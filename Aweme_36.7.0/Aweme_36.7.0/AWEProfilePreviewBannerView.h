@class AWEGradientView, BDImageView;

@interface AWEProfilePreviewBannerView : UIView

@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) AWEGradientView *gradientView;

- (BOOL)isThemeStyleLight;
- (id)bannerCoverColor;
- (id)bannerCoverModel;
- (id)bannerURLArray;
- (void).cxx_destruct;
- (id)userModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
