@class UIViewController, NSString, NSObject, AWEIMTouchReportGestureRecognizer, UIButton;
@protocol IESIMMessageTabUnreadCountConsistencyCheckerPluginInterface, IESIMBizEntryBadgeInfoProtocol, AWENormalModeTabBarItemConfigAbility, AWEMRDotCountAbilityProtocol, AWENormalModeTabBarGeneralButtonProtocol, AWEBizTabBarMessageItemBadgeModelProtocol, AWEMRBadgeConsistencyPluginProtocol;

@interface AWEBizTabBarMessageItemConfig : NSObject <AWEBizTabBarMessage, AWEMRBadgeConsistencyPluginDelegate, AWEIMTouchReportGestureRecognizerDelegate, AWEBizTabBarItemConfigProtocol, AWEBizTabBarMessageItemConfigProtocol, AWEMRBizTabBarDotCountProtocol, IESIMBizEntryUIManagerProtocol, IESIMBizEntryBadgeConsistencyPluginProtocol>

@property (retain, nonatomic) UIButton<AWENormalModeTabBarGeneralButtonProtocol> *messageButton;
@property (retain, nonatomic) AWEIMTouchReportGestureRecognizer *messageButtonTouchReporter;
@property (retain, nonatomic) UIViewController *messageController;
@property (retain, nonatomic) id<AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (retain, nonatomic) id<AWEMRDotCountAbilityProtocol> dotCountAbility;
@property (retain) id<AWEBizTabBarMessageItemBadgeModelProtocol, IESIMBizEntryBadgeInfoProtocol> badgeModel;
@property (nonatomic) double lastFingerDown;
@property (retain, nonatomic) id<AWEMRBadgeConsistencyPluginProtocol> badgeConsistencyPlugin;
@property (nonatomic) BOOL didTouchDownOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<IESIMMessageTabUnreadCountConsistencyCheckerPluginInterface> *badgeConsistencyChecker;

+ (Class)aAWENormalModeTabBarFactoryCommonAdapterClass;
+ (id)sharedConfigWithChannel:(id)a0;
+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;
+ (id)sharedConfig;

- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (void)tabBarController:(id)a0 didSelectItemType:(long long)a1 previousItemType:(long long)a2;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)canLandingWithTabId:(id)a0 params:(id)a1;
- (void)setupTabBarAbility:(id)a0;
- (void)hideBadgeWithCompletion:(id /* block */)a0;
- (void)showBadgeWithModel:(id)a0 showCallBack:(id /* block */)a1 hideCallBack:(id /* block */)a2 downgradeCallBack:(id /* block */)a3;
- (id)aAWENormalModeTabBarFactoryCommonAdapter;
- (BOOL)bottomChannel:(id)a0 tabBarItemDoubleClickFromPreviousSelectedType:(long long)a1;
- (void)bottomChannel:(id)a0 tapTouchesBegan:(id)a1 withEvent:(id)a2;
- (void)bottomChannel:(id)a0 tapTouchesEnded:(id)a1 withEvent:(id)a2;
- (void)bottomChannel:(id)a0 tapTouchesCancelled:(id)a1 withEvent:(id)a2;
- (void)beginLandingTabWithTabId:(id)a0 withModel:(id)a1;
- (void)endLandingTabWithTabId:(id)a0 withModel:(id)a1;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (id)getCustomTrackParamsWithTrackInfo:(id)a0;
- (id)getPostPluginControllers;
- (BOOL)loginIfNeededAtTabBarItemSelection:(BOOL)a0;
- (id)loginInfoAtTabBarItemSelectionFromPreviousSelectedType:(long long)a0;
- (void)tabBarDidDeselectItem;
- (void)tabBarControllerDidChangedThemeFollowSystem;
- (BOOL)shouldHandleTabBarItemDoubleClickFromPreviousSelectedType:(long long)a0;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)p_regMessageButtonAccessibilityLabelUpdater;
- (void)tabDotCountUpdateRequestWithUnreadModel:(id)a0 completion:(id /* block */)a1;
- (void)clearInteractUnreadCount;
- (void)triggerBadgeConsistencyCheck;
- (void)p_receiveTouchesDown:(id)a0 withEvent:(id)a1;
- (void)p_receiveTouchesUp:(id)a0 withEvent:(id)a1;
- (void)selectMessageViewController;
- (id)getBadgeConsistencyInfo;
- (BOOL)enableConsistencyPlugin;
- (id)bizTrackParamsForBadgeConsistency;
- (void)gestureRecognizer:(id)a0 receiveTouchesDown:(id)a1 withEvent:(id)a2;
- (void)gestureRecognizer:(id)a0 receiveTouchesUp:(id)a1 withEvent:(id)a2;
- (void)setupDotCountAbility:(id)a0;
- (void)messageReachShowCountAbilityDotDidHide;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateTheme;
- (id)initWithChannel:(id)a0;

@end
