@class NSArray, CSJMaterialMeta, CSJAdSlot;
@protocol CSJNativeExpressVideoAdDelegate;

@interface CSJNativeExpressRewardDrawAdViewController : UIViewController

@property (retain, nonatomic) NSArray *expressAdViews;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) CSJMaterialMeta *firstMaterial;
@property (weak, nonatomic) id<CSJNativeExpressVideoAdDelegate> rewardedVideoAd;

- (id)initWithExpressAdViews:(id)a0 slot:(id)a1 rewardedVideoAd:(id)a2;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
