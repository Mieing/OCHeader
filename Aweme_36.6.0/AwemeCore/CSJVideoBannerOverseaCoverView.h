@class UIImageView, UIView;

@interface CSJVideoBannerOverseaCoverView : CSJBannerOverseaCoverView

@property (retain, nonatomic) UIImageView *videoMaskImage;
@property (retain, nonatomic) UIView *videoBottomContentView;

- (void)pbu_override_buildView;
- (void)pbu_override_buildViewData;
- (void)pbu_fillData_videoMaskImage;
- (void).cxx_destruct;

@end
