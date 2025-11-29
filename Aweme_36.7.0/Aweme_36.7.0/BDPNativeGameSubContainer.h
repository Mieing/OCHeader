@class NSString, UIImage, BDPViewController, BDPNavigationController, BDPOpenExternalPageAfterLaunch;
@protocol BDPNativeGameBaseControllerProtocol;

@interface BDPNativeGameSubContainer : BDPBaseSubContainer <BDPPageDiagnoseProtocol, BDPAppInterfaceOrientationChangeMessage> {
    BOOL _isAudioMute;
    BOOL _disableGameExceptionAlert;
    BOOL _isShowingGameExceptionAlert;
    BOOL _landscapeGameFirstTurnFlag;
}

@property (retain, nonatomic) BDPNavigationController *subNavi;
@property (retain, nonatomic) BDPOpenExternalPageAfterLaunch *launchOpenInstance;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL enableNativeStyle;
@property (retain, nonatomic) BDPViewController<BDPNativeGameBaseControllerProtocol> *gameController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)setAudioMute:(BOOL)a0;
- (void)onAppLaunch;
- (void)setupObserver;
- (void)onAppEnterBackground;
- (id)businessParamForEvent:(id)a0;
- (id)businessViewController;
- (void)applicationPkgDownloadFinishWithUniqueID:(id)a0;
- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)interfaceOrientationChangeComplete:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)onAppEnterForeground;
- (void)workBeforeClose:(id)a0;
- (void)forceStopRunning;
- (id)childRootViewController;
- (id)initWithBaseVC:(id)a0;
- (void)setupSubNav:(id)a0 isColdBoot:(BOOL)a1;
- (void)setToolBarMoreButtonCustomMenu:(id)a0;
- (void)setupFloatingViewIfNeeded;
- (void)getGameSnapshotWithCompletion:(id /* block */)a0;
- (void)getGameSnapshotWithAfterUpdates:(BOOL)a0 needToolbar:(BOOL)a1 completion:(id /* block */)a2;
- (id)getNewDismissAnimation;
- (void)gatherDiagnoseInfo:(id)a0 triggerType:(id)a1;
- (void)gatherDiagnoseInfo:(id)a0 webview:(id)a1 triggerType:(id)a2;
- (void)handleGameFirstFrameDidDraw:(id)a0;
- (void)handleGameException:(id)a0;
- (BOOL)p_usingNewDismissAnimation:(id)a0;
- (void)p_preLoadIcon;
- (double)toolbarTop:(BOOL)a0;
- (void)p_recordGameSnapshotIfNeed:(id)a0;
- (BOOL)shouldUseNewThumbnail;
- (void)getSnapshotWithShift:(long long)a0 completion:(id /* block */)a1;
- (void)sendDeviceOrientationChange:(long long)a0 uniqueID:(id)a1;
- (id)controllerView;
- (void)permissionControllerClosed:(id)a0;
- (id)schema;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)dealloc;
- (id)topView;
- (void)updateNavigationBar;

@end
