@class CSJNativeAd, NSString, CSJNativeExpressAdView, CSJImmersiveMiddleExpressUtility;

@interface CSJImmersiveMiddlePageViewController : UIViewController <CSJImmersiveMiddleExpressDelegate>

@property (retain, nonatomic) CSJNativeAd *nativeAd;
@property (retain, nonatomic) CSJImmersiveMiddleExpressUtility *middleExpressManager;
@property (retain, nonatomic) CSJNativeExpressAdView *expressAdView;
@property (nonatomic) BOOL renderImmersiveTemplateSuccesss;
@property (nonatomic) BOOL middlePageViewDidAppear;
@property (copy, nonatomic) id /* block */ CloseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showImmersiveMiddlePage;
- (void)gotDetailPageWith:(id)a0;
- (void)middleRenderSuccess:(id)a0;
- (void)middleRenderFailBackup;
- (void)middlePageVideoDetailBackup;
- (void)closeVideoDetailView;
- (void)nativeExpressViewImmersiveMiddlePageBack:(id)a0;
- (void)nativeExpressView:(id)a0 creativeClickWithMaterial:(id)a1;
- (id)initImmersiveMiddlePageWith:(id)a0;
- (void)showStoreProductWithAppID:(id)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;

@end
