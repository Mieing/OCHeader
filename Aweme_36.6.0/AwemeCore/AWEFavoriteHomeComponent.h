@class NSString, DUXPopover, AWEProfileGuidePopoverHelper, AWEBinding, UIImageView, UIViewController;
@protocol AWEUserProfileFavoriteV2ViewControllerProtocol;

@interface AWEFavoriteHomeComponent : AWEUserHomeBaseComponent <DUXPopoverDelegate, AWEProfileGuidePopoverHelperDelegate, AWEProfileTabListProviderProtocol, AWEFavoriteHomeComponentProtocol, AWEProfileRedDotShowViewProtocol>

@property (nonatomic) BOOL enterOtherTab;
@property (nonatomic) BOOL switchFavouriteTabFromClickHomepageButton;
@property (retain, nonatomic) DUXPopover *redDotPopover;
@property (nonatomic) BOOL isRedDotPopoverShowing;
@property (copy, nonatomic) NSString *redDotText;
@property (retain, nonatomic) AWEProfileGuidePopoverHelper *favoriteRedDotPopoverHelper;
@property (retain, nonatomic) AWEBinding *redDotPopoverBind;
@property (retain, nonatomic) UIImageView *redDotPopoverIconView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastSegmentFrame;
@property (nonatomic) BOOL isViewAppeared;
@property (retain, nonatomic) UIViewController<AWEUserProfileFavoriteV2ViewControllerProtocol> *favoriteV2VC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (void)clearFavoriteFirstTabNode;
- (void)refreshRedDotWithModel:(id)a0;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)onTrackEnterPersonalTab:(long long)a0 enterMethod:(id)a1 hasRedDotWhenSwitched:(BOOL)a2 params:(id)a3;
- (void)didSelectFavoriteV2VC;
- (id)collectionTabModel;
- (BOOL)hasFavoriteTab;
- (BOOL)hasFavoritePopoverShowed;
- (void)handleTabbarChanged:(id)a0;
- (void)showFavoriteFirstTabRedDot;
- (void)landingFavoriteLandingType:(unsigned long long)a0;
- (void)checkIfNeedPreFetch;
- (void)trackFavoriteRedDotShow;
- (id)trackServiceController;
- (void)updateFavoriteFirstTabRedDotHiddenStatus;
- (void)trackHomePageRedDotShow:(id)a0 dotType:(id)a1 bizId:(id)a2 componentId:(id)a3;
- (void)showFavoriteRedDotPopoverWithNode:(id)a0;
- (void)storageFirstTabHasShown:(unsigned long long)a0;
- (void)popoverHelperDidInvokeOnclose:(id)a0;
- (void)onTrackEnterPersonalHomepage:(id)a0;
- (void)onRefreshTabsAndVCs;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)onInit;

@end
