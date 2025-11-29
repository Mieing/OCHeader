@class AWERelatedRecommendViewController, NSString, AWEPauseRecommendPanelHeaderView, DUXPartialRelatedSheet, AWEBinding, UIViewPropertyAnimator;

@interface AWEFeedPauseToRelatePanelController : AWEBaseController <AWEFeedControllerProtocol, DUXPartialSheetDelegate, AWERelatedRecommendViewControllerDelegate, AWERelatedSheetDelegate, AWERelatedRecommendPausePanelProtocol>

@property (retain, nonatomic) DUXPartialRelatedSheet *sheet;
@property (retain, nonatomic) AWERelatedRecommendViewController *recommendVC;
@property (retain, nonatomic) AWEPauseRecommendPanelHeaderView *panelHeaderView;
@property (nonatomic) BOOL isExpand;
@property (nonatomic) BOOL shouldRecoveryPanel;
@property (nonatomic) BOOL hasInitFetchData;
@property (nonatomic) BOOL isShowingPanel;
@property (nonatomic) BOOL hiddenTabbarByRelatedPanel;
@property (retain, nonatomic) AWEBinding *relatedPanelTabBarHiddenBinding;
@property (retain, nonatomic) UIViewPropertyAnimator *tabbarAnimator;
@property (nonatomic) BOOL didTapCloseButton;
@property (nonatomic) BOOL didTapExpandPanel;
@property (nonatomic) BOOL hasTrackTitleSlide;
@property (nonatomic) BOOL hasTrackTitleClose;
@property (nonatomic) double startShowPanelTime;
@property (nonatomic) double startExpandedPanel;
@property (nonatomic) BOOL hasTrackedPanelExpendClientShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)panelMinimumHeight;
+ (BOOL)shouldKeepDarkStyle;
+ (id)pauseShowRelateConfigDict;

- (void)partialSheetDidDismiss:(id)a0;
- (void)partialSheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)partialSheetWillFloded:(id)a0;
- (void)partialSheetDidFloded:(id)a0;
- (void)partialSheetWillExpanded:(id)a0;
- (void)partialSheetDidExpanded:(id)a0;
- (void)partialSheetWillDismiss:(id)a0;
- (BOOL)partialSheet:(id)a0 gestureRecognizerShouldBegin:(id)a1;
- (BOOL)dcFeedShouldDisableCellClick;
- (BOOL)dcFeedClientShouldShowDislikeVC;
- (void)dcFeedDidBeginReloadTheme;
- (void)currentPlayVideoDidChangePlayState:(long long)a0;
- (void)trackStayTime;
- (id)getCommonTrackParams;
- (void)progressTouchBegin:(id)a0;
- (BOOL)isPauseToRelatedPanelShowing;
- (void)enterFeed;
- (void)playInteractionDescriptionDidClickExpand:(id)a0;
- (void)leaveFeed;
- (void)setStayArea;
- (BOOL)needRecoveryPanel;
- (void)dismissByAnimation:(BOOL)a0;
- (void)showSheet:(BOOL)a0;
- (BOOL)enablePauseToRelated;
- (void)showUnModalViewController;
- (void)resetRecommendPanel;
- (void)panelScrollToTop;
- (BOOL)foldedPanelShouldDrag;
- (BOOL)shouldHiddenTopCard;
- (void)updatePanelHeaderWithHeight:(double)a0;
- (void)expandRecommendPanel;
- (void)trackFeedClientShowIfPanelExpand;
- (BOOL)headerEnableDragToDismiss;
- (void)removeSheetVC;
- (void).cxx_destruct;
- (id)gradientColors;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)dismissSheet;
- (void)showSheet;
- (void)back;

@end
