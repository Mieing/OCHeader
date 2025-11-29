@class AWELandscapeStatusBarView;

@interface AWELandscapeStatusBarController : AWELandscapeInteractionBaseController

@property (retain, nonatomic) AWELandscapeStatusBarView *statusBar;

- (void)updateControllerWithAnimationOffset:(double)a0 positon:(long long)a1;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
