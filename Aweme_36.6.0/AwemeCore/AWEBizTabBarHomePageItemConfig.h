@class UIViewController, NSString, AWEUserHomeViewControllerV2, UIButton;
@protocol AWEProfileRedDotNodeModelProtocol, AWERouterViewControllerProtocol, AWENormalModeTabBarItemConfigAbility, AWENormalModeTabBarGeneralButtonProtocol, AWETabBarItemViewControllerProtocol, AWEGuestHomeViewControllerProtocol;

@interface AWEBizTabBarHomePageItemConfig : NSObject <AWEUserMessage, AWEGuestModeMessage, AWEBizTabBarItemConfigProtocol, AWEProfileRedDotShowViewProtocol, AWEHomePageTabItemBadgeProtocol>

@property (retain, nonatomic) UIButton<AWENormalModeTabBarGeneralButtonProtocol> *homePageButton;
@property (retain, nonatomic) AWEUserHomeViewControllerV2 *userHomeController;
@property (retain, nonatomic) id<AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (copy, nonatomic) NSString *tabbarEnterMethod;
@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> currentShowModel;
@property (retain, nonatomic) UIViewController<AWEGuestHomeViewControllerProtocol, AWETabBarItemViewControllerProtocol, AWERouterViewControllerProtocol> *guestHomeViewController;
@property (copy, nonatomic) NSString *tabbarPreviousPageString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long badgeCount;

+ (Class)aAWENormalModeTabBarFactoryCommonAdapterClass;
+ (id)sharedConfigWithChannel:(id)a0;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)sharedConfig;

- (void)didFinishEditProfileFromNewUser:(id)a0;
- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)canLandingWithTabId:(id)a0 params:(id)a1;
- (void)setupTabBarAbility:(id)a0;
- (void)setupObserver;
- (void)hideBadgeWithCompletion:(id /* block */)a0;
- (void)showBadgeWithModel:(id)a0 showCallBack:(id /* block */)a1 hideCallBack:(id /* block */)a2 downgradeCallBack:(id /* block */)a3;
- (id)aAWENormalModeTabBarFactoryCommonAdapter;
- (void)beginLandingTabWithTabId:(id)a0 withModel:(id)a1;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)loginIfNeededAtTabBarItemSelection:(BOOL)a0;
- (id)loginInfoAtTabBarItemSelectionFromPreviousSelectedType:(long long)a0;
- (void)tabBarDidDeselectItem;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (unsigned long long)currentBadgeType;
- (void)guestModeDidEnter;
- (void)guestModeDidLeave;
- (void)refreshRedDotWithModel:(id)a0;
- (void)dismissCampaignBubble;
- (void)guest_tabBarDidSelectItemFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (void)navigationController:(id)a0 topViewControllerHotSwitchTo:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChannel:(id)a0;
- (void)setupConfig;

@end
