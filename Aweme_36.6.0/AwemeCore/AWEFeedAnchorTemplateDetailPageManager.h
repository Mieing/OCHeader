@class AWEPlayInteractionViewController, AWEFeedAnchorTemplateDetailPageViewController, DUXPartialSheet, AWEAwemeModel, NSString, UIViewController;

@interface AWEFeedAnchorTemplateDetailPageManager : NSObject <DUXPartialSheetDelegate, AWEFeedAnchorTemplateDetailPageViewControllerDelegate>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) AWEPlayInteractionViewController *interactionController;
@property (retain, nonatomic) AWEFeedAnchorTemplateDetailPageViewController *detailPageVC;
@property (retain, nonatomic) DUXPartialSheet *sheet;
@property (nonatomic) BOOL isPanelInFullScreen;
@property (nonatomic) BOOL isVideoPlayWhenEnterPanel;
@property (nonatomic) BOOL statusBarUpdateAvailable;
@property (nonatomic) BOOL statusBarDidUpdate;
@property (nonatomic) unsigned long long statusBarThemeStyleBeforeUpdate;
@property (nonatomic) BOOL isPadSpiltShow;
@property (nonatomic) BOOL hasTabChange;
@property (weak, nonatomic) UIViewController *topVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFixTabBarVisibility;

- (double)panelHeight;
- (void)partialSheetDidDismiss:(id)a0;
- (void)partialSheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)partialSheetWillDismiss:(id)a0;
- (BOOL)partialSheet:(id)a0 gestureRecognizerShouldBegin:(id)a1;
- (BOOL)partialSheet:(id)a0 shouldAnimateWithGesture:(id)a1;
- (BOOL)isPanelShowing;
- (void)dismissPanelIfNeeded;
- (id)setupDetailPageVC;
- (void)trackDetailPageShow;
- (void)didTabChange;
- (void)handleTabBarHidden:(BOOL)a0;
- (void)trackDetailPageClickWithClickArea:(id)a0;
- (void)partialSheetFoldStatusChange:(BOOL)a0;
- (void)resetStatusBarThemeStyle;
- (void)updateStatusBarThemeStyle;
- (void)updateVideoPlayStateWithFoldStatus:(BOOL)a0;
- (id)commonParamsForDetailPageEventTrack;
- (void)onTopBarViewReturnBtnClicked;
- (void)padSplitScreenDidDismiss;
- (void)detailVCDidMoveFromParentVC;
- (void)updateSheetScrollView;
- (id)initWithAwemeModel:(id)a0 interactionViewController:(id)a1;
- (BOOL)showSplitScreenDetailPage;
- (void)showFullScreenDetailPage;
- (void)showDetailPagePanel;
- (void).cxx_destruct;

@end
