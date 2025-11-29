@class NSString, DUXPartialSheet, UITabBar, UIViewController;

@interface AWELiveSoloKTVDetailViewManager : NSObject <DUXPartialSheetDelegate>

@property (nonatomic) BOOL previousIsHideTabBar;
@property (nonatomic) BOOL previousIsDisableFullscreenPopTransition;
@property (nonatomic) BOOL previousIsPlayerMute;
@property (nonatomic) BOOL previousIsPlayerPlaying;
@property (nonatomic) long long previousStatusBarStyle;
@property (weak, nonatomic) DUXPartialSheet *partialSheet;
@property (retain, nonatomic) UIViewController *topVC;
@property (retain, nonatomic) UITabBar *tabBar;
@property (nonatomic) BOOL isExpended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)partialSheetDidDismiss:(id)a0;
- (void)partialSheetDidFloded:(id)a0;
- (void)partialSheetDidExpanded:(id)a0;
- (void)showSoloKTVDetailViewWithSongId:(id)a0 extra:(id)a1;
- (void)detailViewWillAppear;
- (void)detailViewDidAppear;
- (id)fullContainerView;
- (void)dismissSoloKTVDetailView;
- (void)updateAppearStateWithViewController:(id)a0 isAppear:(BOOL)a1;
- (void)resumePlayerStatusAfterFoldingDetailView:(id)a0;
- (void)setupPlayerStatusAfterExpendingDetailView:(id)a0;
- (void)updateAppearStateWithViewControllerAndChild:(id)a0 isAppear:(BOOL)a1;
- (void)setupStatusBeforeEnterDetailView;
- (void)recordPlayerStatusBeforeEnterDetailViewIfNeed;
- (void)updateVideoViewControllerState:(BOOL)a0;
- (void)updateProgressViewControllerState:(BOOL)a0;
- (void)resumeStatusAfterOutDetailView;
- (void).cxx_destruct;

@end
