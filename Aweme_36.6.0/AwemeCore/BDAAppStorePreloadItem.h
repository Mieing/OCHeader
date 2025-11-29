@class NSString, NSDictionary, SKStoreProductViewController;

@interface BDAAppStorePreloadItem : NSObject <SKStoreProductViewControllerDelegate, UIViewControllerTransitioningDelegate>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *realAppID;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) long long state;
@property (retain, nonatomic) SKStoreProductViewController *productController;
@property (retain, nonatomic) SKStoreProductViewController *retainProductController;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double contentAppearTime;
@property (nonatomic) int loadDuration;
@property (copy, nonatomic) NSDictionary *businessIdentifyInfo;
@property (nonatomic) BOOL isPresentAnimated;
@property (nonatomic) BOOL isDismissAnimated;
@property (nonatomic) BOOL isDuplicated;
@property (readonly, copy, nonatomic) NSDictionary *skAdNetworkParams;
@property (nonatomic) BOOL isUsePreloading;
@property (copy, nonatomic) id /* block */ openPreloadingCompletion;
@property (retain, nonatomic) NSString *preloadScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadProductCompletion:(id /* block */)a0;
- (void)stopLoad;
- (void)openProductByController:(id)a0 presentCompletion:(id /* block */)a1 dismissCompletion:(id /* block */)a2;
- (id)formatJSON:(id)a0;
- (void)startPreloadTimeTrackEvent;
- (void)stopPreloadTimeTrackEvent;
- (id)initWithAppID:(id)a0 skAdNetworkParams:(id)a1 adID:(id)a2 logExtra:(id)a3 businessIdentifyInfo:(id)a4 initSKStore:(id /* block */)a5;
- (void)resetTimestamp;
- (void)cleanProduct;
- (double)preloadTime;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
