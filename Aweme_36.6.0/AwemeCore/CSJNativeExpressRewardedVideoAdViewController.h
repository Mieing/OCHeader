@class CSJExpressRewardFullScreenVM, CSJAdSlot;
@protocol CSJNativeExpressVideoAdDelegate;

@interface CSJNativeExpressRewardedVideoAdViewController : UIViewController

@property (weak, nonatomic) id<CSJNativeExpressVideoAdDelegate> rewardedVideoAd;
@property (nonatomic) BOOL isRewardedVideo;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (copy, nonatomic) id /* block */ purePlayableClickBlock;
@property (retain, nonatomic) CSJExpressRewardFullScreenVM *viewModel;

- (id)initWithNativeExpressAdView:(id)a0 purePlayableNativeAd:(id)a1;
- (id)reallyMaterialMeta;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
