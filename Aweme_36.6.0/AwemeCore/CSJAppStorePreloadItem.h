@class CSJSKANStoreProductModel, NSString, SKStoreProductViewController, NSMutableDictionary, NSDictionary, UIViewController;
@protocol CSJAd;

@interface CSJAppStorePreloadItem : NSObject <SKStoreProductViewControllerDelegate, UIViewControllerTransitioningDelegate>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *realAppID;
@property (retain, nonatomic) id<CSJAd> adModel;
@property (nonatomic) long long state;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) SKStoreProductViewController *productController;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double startShowTime;
@property (nonatomic) double beginLoadTime;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *productionParams;
@property BOOL animationing;
@property (nonatomic) BOOL isPresentAnimated;
@property (nonatomic) BOOL isDismissAnimated;
@property (nonatomic) BOOL isDuplicated;
@property (retain, nonatomic) CSJSKANStoreProductModel *adNetworkModel;
@property (nonatomic) BOOL isUsePreloading;
@property (nonatomic) BOOL presenting;
@property (nonatomic) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isZeroOfFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAppID:(id)a0 adModel:(id)a1;
- (void)loadProductCompletion:(id /* block */)a0;
- (void)stopLoad;
- (void)openProductByController:(id)a0 presentCompletion:(id /* block */)a1 dismissCompletion:(id /* block */)a2;
- (id)formatJSON:(id)a0;
- (void)resetLoadTimestamp;
- (void)resetShowTimestamp;
- (void)startPreloadTimeTrackEvent;
- (void)stopPreloadTimeTrackEvent;
- (void)startShowTimeTrackEvent;
- (void)stopShowTimeTrackEvent;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)dealloc;
- (void)dismissAction;

@end
