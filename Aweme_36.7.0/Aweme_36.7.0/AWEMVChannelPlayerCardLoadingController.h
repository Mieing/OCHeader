@class UIImageView;

@interface AWEMVChannelPlayerCardLoadingController : AWEMVChannelPlayerCardBaseController

@property (retain, nonatomic) UIImageView *loadingView;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (id)loadingAnimation;
- (void)player:(id)a0 willLoading:(BOOL)a1;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
