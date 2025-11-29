@class NSString, MMUIButton;
@protocol H5GameViewControllerDelegate;

@interface H5GameViewController : MMWebViewController <IVOIPUILogicMgrExt, MultiTalkMgrExt, IShortCutExt, IOnlineDeviceMgrExt, IWCPayJSApiMgrExt> {
    MMUIButton *menuButton;
    BOOL m_bFullscreen;
    long long m_orientation;
    BOOL m_bPaying;
    BOOL m_bResetPayingPwd;
    struct CGSize { double width; double height; } m_ButtonSize;
    double m_ButtonInset;
    BOOL m_bShouldUseCustomH5GameMenu;
    BOOL m_bViewWillDisappear;
    BOOL m_hasSetFullScreen;
}

@property (nonatomic) unsigned long long lockedOrientation;
@property (retain, nonatomic) id<H5GameViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *gameAppId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)initWithURL:(id)a0 fullScreen:(BOOL)a1 GameAppId:(id)a2;
- (id)initWithURL:(id)a0 fullScreen:(BOOL)a1 ExtInfo:(id)a2 DefinitelyUseWkWebview:(BOOL)a3 IsFloatLayer:(BOOL)a4;
- (id)initWithURL:(id)a0 fullScreen:(BOOL)a1 ExtInfo:(id)a2 DefinitelyUseWkWebview:(BOOL)a3 IsFloatLayer:(BOOL)a4 GameAppId:(id)a5;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)scrollActionSheet:(id)a0 MenuItem:(id)a1;
- (void)gameDidSelecteItem:(id)a0;
- (void)restoreViewStatus;
- (void)onVideoVoipViewDidAppear:(id)a0;
- (void)onVideoVoipViewDisappear;
- (void)onVoipMinimized;
- (void)onVoipMaximized;
- (void)onBeginMultiTalk;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMaximized;
- (void)onDeviceInfoOpen;
- (void)onDeviceInfoClose;
- (void)onPerformShortCut:(id)a0;
- (void)onWCPayJSApiBegin:(BOOL)a0;
- (void)onWCPayJSApiEnd:(BOOL)a0;
- (void)onOpenApiWillBeginShare:(id)a0;
- (void)viewDidTransitionToNewSize;
- (void)enterBackground;
- (void)enterForeground;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)applicationWillTerminate:(id)a0;
- (BOOL)isFullScreen;
- (BOOL)shouldUseH5GameCustomMenu;
- (BOOL)isOrientationLocked;
- (void)delaySetFullScreen:(BOOL)a0;
- (void)setFullScreen:(BOOL)a0;
- (void)viewWillPop:(BOOL)a0;
- (void)lockOrientation:(long long)a0;
- (void)unlockOrientation;
- (void).cxx_destruct;

@end
