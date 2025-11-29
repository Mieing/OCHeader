@class UIImageView, AWELoadingAndVolumeView;

@interface AWEDPlayerVideoStallController : AWEDPlayerInteractionBaseController

@property (retain, nonatomic) UIImageView *loadingView;
@property (retain, nonatomic) AWELoadingAndVolumeView *loadingAndVolumeView;

- (unsigned long long)activateType;
- (void)iesPlayer:(id)a0 willInStallAction:(BOOL)a1;
- (void)playLoadingAnimation;
- (void)willRotateToFullScreen:(BOOL)a0;
- (void)updateDPlayerState:(unsigned long long)a0;
- (void)switchLoadingModel:(BOOL)a0;
- (id)loadingAnimation;
- (BOOL)useCircleStyleLoading;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)stopLoadingAnimation;

@end
