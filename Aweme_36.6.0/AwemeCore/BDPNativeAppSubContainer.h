@class NSString, BDPAppPageURL, BDPAppController;

@interface BDPNativeAppSubContainer : BDPBaseSubContainer <BDPToolBarViewDelegate, BDPBootLifeCycleMessage, BDPPageDiagnoseProtocol>

@property (retain, nonatomic) BDPAppPageURL *startPage;
@property (retain, nonatomic) BDPAppController *appController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (BOOL)destroyAllPagesDisable;

- (void)onAppEnterBackground;
- (id)businessParamForEvent:(id)a0;
- (id)businessViewController;
- (void)applicationReadyToRedirectToWebViewWithUniqueID:(id)a0 routeID:(id)a1;
- (void)applicationSchemaUpdateWithUniqueID:(id)a0 bootManager:(id)a1 isColdBoot:(BOOL)a2;
- (void)onAppEnterForeground;
- (void)workBeforeClose:(id)a0;
- (void)forceStopRunning;
- (id)childRootViewController;
- (id)initWithBaseVC:(id)a0;
- (void)filesChanged:(id)a0;
- (void)setupSubNav:(id)a0 isColdBoot:(BOOL)a1;
- (void)setToolBarMoreButtonCustomMenu:(id)a0;
- (id)pageNavigationController;
- (id)getNewDismissAnimation;
- (void)gatherDiagnoseInfo:(id)a0 triggerType:(id)a1;
- (void)gatherDiagnoseInfo:(id)a0 webview:(id)a1 triggerType:(id)a2;
- (void)removeALLPageIfNeed;
- (BOOL)p_usingNewDismissAnimation:(id)a0;
- (BOOL)shouldDisableMoreButton;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)uniqueID;
- (void)dealloc;
- (id)topView;
- (void)updateNavigationBar;

@end
