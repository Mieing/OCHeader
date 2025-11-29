@class CSJRewardFullScreenBaseVM;
@protocol CSJVideoAdDelegate;

@interface CSJRewardedVideoAdViewController : UIViewController

@property (retain, nonatomic) CSJRewardFullScreenBaseVM *viewModel;
@property (retain, nonatomic) id<CSJVideoAdDelegate> rewardedVideoAd;

- (id)initViewControllerWithAd:(id)a0 slot:(id)a1;
- (void)switchToWebViewMute:(BOOL)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)openAppStore;

@end
