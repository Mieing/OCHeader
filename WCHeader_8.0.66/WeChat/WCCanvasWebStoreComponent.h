@class NSString, SKStoreProductViewController;

@interface WCCanvasWebStoreComponent : WCCanvasComponent <SKStoreProductViewControllerDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) SKStoreProductViewController *productViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)initViews;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)dismissProductViewController;
- (void)productViewControllerDidFinish:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)reportSKLoadingTimeWithBeginTime:(unsigned long long)a0;
- (void)doAppStoreColorReport;
- (void).cxx_destruct;

@end
