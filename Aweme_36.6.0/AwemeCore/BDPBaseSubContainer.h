@class NSString, UIView, BDPNavigationController, UIViewController;
@protocol BDPBaseVCProtocol, BDPToolBarViewProtocol;

@interface BDPBaseSubContainer : NSObject <BDPContainerLifeCycleMessage, BDPSubContainerProtocol, BDPBootLifeCycleMessage>

@property (weak, nonatomic) UIViewController<BDPBaseVCProtocol> *baseVC;
@property (retain, nonatomic) BDPNavigationController *subNavi;
@property (retain, nonatomic) UIView<BDPToolBarViewProtocol> *toolBarView;
@property (nonatomic) BOOL pkgDownloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)setAudioMute:(BOOL)a0;
- (void)onAppEnterBackground;
- (id)businessParamForEvent:(id)a0;
- (id)businessViewController;
- (void)viewWillLayoutSubviews:(id)a0 uniqueID:(id)a1;
- (void)applicationPkgDownloadFinishWithUniqueID:(id)a0;
- (void)onAppEnterForeground;
- (void)workBeforeClose:(id)a0;
- (void)forceStopRunning;
- (id)childRootViewController;
- (void)setupToolBarView;
- (void)changeToolBarViewVisible:(BOOL)a0;
- (id)initWithBaseVC:(id)a0;
- (void)setupSubNav:(id)a0 isColdBoot:(BOOL)a1;
- (void)setToolBarMoreButtonCustomMenu:(id)a0;
- (void)setupFloatingViewIfNeeded;
- (void)getGameSnapshotWithCompletion:(id /* block */)a0;
- (void)getGameSnapshotWithAfterUpdates:(BOOL)a0 needToolbar:(BOOL)a1 completion:(id /* block */)a2;
- (id)pageNavigationController;
- (void)updateSubNavi:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)uniqueID;
- (void)dealloc;
- (id)topView;
- (void)updateNavigationBar;

@end
