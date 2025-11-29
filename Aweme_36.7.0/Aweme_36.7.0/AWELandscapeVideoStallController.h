@class AWELoadingAndVolumeView;

@interface AWELandscapeVideoStallController : AWELandscapeInteractionBaseController

@property (retain, nonatomic) AWELoadingAndVolumeView *loadingView;

- (void)playLoadingAnimation;
- (void)player:(id)a0 willInStallAction:(BOOL)a1;
- (void)switchLoadingModel:(BOOL)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)stopLoadingAnimation;

@end
