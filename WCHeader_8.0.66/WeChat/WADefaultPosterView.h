@class UIImageView, WAPosterBannerView, WADefaultPosterViewModel;

@interface WADefaultPosterView : UIView

@property (retain, nonatomic) UIImageView *originalScreenshotView;
@property (retain, nonatomic) WAPosterBannerView *bannerView;
@property (nonatomic) BOOL isPortrait;
@property (retain, nonatomic) WADefaultPosterViewModel *viewModel;

+ (struct CGSize { double x0; double x1; })calcPosterSizeWithOriginalImage:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)updateUI;
- (id)renderPosterImage;
- (void).cxx_destruct;

@end
