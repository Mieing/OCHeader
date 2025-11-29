@class CSJNativeExpressRewardedVideoAdView;

@interface CSJNativeExpressRewardedVideoAdDisplayViewController : UIViewController

@property (retain, nonatomic) CSJNativeExpressRewardedVideoAdView *rewardExpressAdView;
@property (nonatomic) unsigned long long transformDirection;
@property (nonatomic) BOOL isRewardedVideo;

- (void)buidupViews;
- (void)preloadAppStore;
- (void)storeKitWillOpen:(id)a0;
- (void)storeKitDidClose:(id)a0;
- (id)initWithNativeExpressAdView:(id)a0;
- (void)addNotification;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
