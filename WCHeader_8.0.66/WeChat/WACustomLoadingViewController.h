@class NSString, WAPackageConfig;
@protocol WACustomLoadingViewControllerDelegate;

@interface WACustomLoadingViewController : WALoadingViewController <WAAppTaskSystemCoverViewDataSource, WACapsuleMenuDataSource>

@property (weak, nonatomic) id<WACustomLoadingViewControllerDelegate> customLoadingDelegate;
@property (retain, nonatomic) NSString *nsExtraData;
@property (retain, nonatomic) WAPackageConfig *pkgConfig;
@property (copy, nonatomic) NSString *orientation;
@property (nonatomic) BOOL isFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContact:(id)a0 pkgConfig:(id)a1 extraData:(id)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)onAppPrepared;
- (void)onFullScreenDone;
- (void)onFullScreenStart;
- (void)onHalfScreenDone;
- (void)onHalfScreenStart;
- (void)onRotationDone;
- (void)onRotationStart;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tryForceRotate;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)isRunningInSheetMode;
- (BOOL)isEmbedModeExpandedToFullScreen;
- (BOOL)isSheetModeExpandedToStatusBarTop;
- (BOOL)isInDarkMode;
- (BOOL)systemCoverViewHidden;
- (BOOL)capsuleMenuHidden;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })capsuleMenuOriginalFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })capsuleMenuFrame;
- (long long)capsuleMenuStyleMode;
- (unsigned long long)capsuleMenuType;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;

@end
