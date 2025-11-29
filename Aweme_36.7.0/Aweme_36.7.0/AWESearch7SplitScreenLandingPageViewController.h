@class DUXNavigationBar, NSString, DUXPartialSheet, AWESearchAD7SplitScreenLandingPageBottomView, AWEAdWebViewController, AWEBDARifleViewController, AWESearchAD7SpliteScreenLandingPageParams;

@interface AWESearch7SplitScreenLandingPageViewController : UIViewController <DUXPartialSheetDelegate, AWEBDARifleViewControllerLifeCycleProtocol>

@property (weak, nonatomic) DUXPartialSheet *partialSheet;
@property (retain, nonatomic) AWEAdWebViewController *adWebViewController;
@property (retain, nonatomic) AWESearchAD7SplitScreenLandingPageBottomView *bottomView;
@property (retain, nonatomic) DUXNavigationBar *naviBar;
@property (nonatomic) double screenHeight;
@property (nonatomic) double sevenSplitScreenHeight;
@property (nonatomic) double videoHeightInShrink;
@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) AWEBDARifleViewController *lynxVC;
@property (nonatomic) BOOL shouldUsePanelManager;
@property (nonatomic) double sheetRation;
@property (retain, nonatomic) AWESearchAD7SpliteScreenLandingPageParams *pageParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)partialSheetDidDismiss:(id)a0;
- (void)partialSheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)partialSheetWillFloded:(id)a0;
- (void)partialSheetDidFloded:(id)a0;
- (void)partialSheetWillExpanded:(id)a0;
- (void)partialSheetDidExpanded:(id)a0;
- (void)partialSheetDidClickMaskArea:(id)a0;
- (void)partialSheetDidDragToDismiss:(id)a0;
- (void)partialSheetWillDismiss:(id)a0;
- (void)partialSheetDidDragToExpanded:(id)a0;
- (void)trackPageShow;
- (void)rifleViewController:(id)a0 loadFailedWithErrorInfo:(id)a1;
- (void)onRightSurveyButtonClicked;
- (void)showLynxSurveyWithEnterMethod:(id)a0;
- (void)showLandingPage;
- (BOOL)enableLynxLandingPage;
- (void)setupLynxViewContainer;
- (void)setupAdWebViewContainer;
- (void)setupBottomView;
- (void)setBottomViewHidden:(BOOL)a0 animation:(BOOL)a1;
- (void)preventAutoPauseVideo;
- (void)shrinkVideoWithAnimation:(BOOL)a0;
- (void)showLandingPageWithDUX;
- (void)addBottomViewToContainerView;
- (void)updateBottomViewAlphaWithSheetTop:(double)a0;
- (void)publishEventToH5WithPartialSheetExpanded:(BOOL)a0;
- (void)setSearchBarHidden:(BOOL)a0 animation:(BOOL)a1;
- (void)magnifyVideo;
- (void)trackClickTopAreaToDismiss;
- (void)trackSlideDownToDismiss;
- (void)trackSlideUpToExpanded;
- (void)trackDidClickBottomView;
- (void)trackDidClickBottomButton;
- (id)landingPageReferString;
- (BOOL)isLandingPageInFoldedState;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupNavigationBar;
- (void)playVideo;
- (void)pauseVideo;

@end
