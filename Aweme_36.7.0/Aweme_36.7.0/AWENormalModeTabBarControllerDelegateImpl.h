@class NSString, AWENormalModeTabBarUpdateSelectedOptions, AWENormalModeTabBarControllerLongPressPair;

@interface AWENormalModeTabBarControllerDelegateImpl : NSObject <AWEUserMessage, AWENormalModeTabBarControllerDelegate>

@property (nonatomic) BOOL hasEnterBackground;
@property (retain, nonatomic) AWENormalModeTabBarUpdateSelectedOptions *selectedOptions;
@property (retain, nonatomic) AWENormalModeTabBarControllerLongPressPair *longPressPair;
@property (copy, nonatomic) id /* block */ landingExitBlock;
@property (nonatomic) BOOL enableLifeCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)addNotification;
- (void)tabBarControllerViewWillAppear:(id)a0;
- (void)tabBarController:(id)a0 beforeViewDidAppear:(BOOL)a1;
- (void)tabBarControllerDidChangedFrame:(id)a0;
- (BOOL)shouldUpdateSelectedTabWithTabBarController:(id)a0 selectedType:(long long)a1 previousSelectedType:(long long)a2 selectedChannel:(id)a3 previousChannel:(id)a4 isByTap:(BOOL)a5;
- (void)didSelectedTabWithTabBarController:(id)a0 selectedType:(long long)a1 previousSelectedType:(long long)a2 selectedChannel:(id)a3 previousChannel:(id)a4 options:(id)a5;
- (void)executeLandingExitBlockWithEnterFrom:(id)a0 enterPageName:(id)a1 hasEnterPageNotice:(BOOL)a2 isLoginStateChanged:(BOOL)a3;
- (void)tabBarControllerUpdateSelectedTabIfNeeded:(id)a0 itemType:(long long)a1 tabBarButton:(id)a2 options:(id)a3;
- (void)tabBarControllerUpdateTabBarUIByCurrentSelected:(id)a0;
- (void)tabBarControllerTabBarReady:(id)a0;
- (BOOL)tabBarControllerCanHandleDoubleClick:(id)a0 tabBarButton:(id)a1;
- (void)tabBarControllerHandleDoubleClick:(id)a0 tabBarButton:(id)a1;
- (BOOL)tabBarControllerCanHandleLongPress:(id)a0 tabBarButton:(id)a1;
- (void)tabBarControllerHandleLongPress:(id)a0 tabBarButton:(id)a1 gestureRecognizer:(id)a2;
- (BOOL)tabBarControllerForbidDoubleClick:(id)a0 tabBarButton:(id)a1;
- (BOOL)tabBarControllerTapGestureRecognizerShouldReceiveTouch:(id)a0 tabbarButton:(id)a1 touch:(id)a2;
- (void)tabBarController:(id)a0 tabBarButton:(id)a1 tapTouchesBegan:(id)a2 withEvent:(id)a3;
- (void)tabBarController:(id)a0 tabBarButton:(id)a1 tapTouchesEnded:(id)a2 withEvent:(id)a3;
- (void)tabBarController:(id)a0 tabBarButton:(id)a1 tapTouchesMoved:(id)a2 withEvent:(id)a3;
- (void)tabBarController:(id)a0 tabBarButton:(id)a1 tapTouchesCancelled:(id)a2 withEvent:(id)a3;
- (void)tabBarController:(id)a0 handleNavigationController:(id)a1 didPushViewController:(id)a2 animated:(BOOL)a3;
- (void)tabBarController:(id)a0 tabBarDidSetHidden:(BOOL)a1 businessID:(id)a2;
- (void)tabBarController:(id)a0 tabBarDidSetAlpha:(double)a1 businessID:(id)a2;
- (void)tabBarController:(id)a0 tabBarDidSetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_newTabBarControllerUpdateSelectedTabIfNeeded:(id)a0 itemType:(long long)a1 tabBarButton:(id)a2 options:(id)a3;
- (void)p_oldTabBarControllerUpdateSelectedTabIfNeeded:(id)a0 itemType:(long long)a1 tabBarButton:(id)a2 options:(id)a3;
- (void)p_updateChannelPerfMetricsMonitorTouch:(id)a0;
- (BOOL)p_tabBarChannelSupportSelected:(id)a0;
- (void)p_beginUpdateSelectedChannelPerfMetricsMonitor:(id)a0 previousChannel:(id)a1 options:(id)a2;
- (void)p_cancelUpdateSelectedChannelPerfMetricsMonitor:(id)a0 previousChannel:(id)a1 options:(id)a2;
- (void)willSelectedTabWithTabBarController:(id)a0 selectedType:(long long)a1 previousSelectedType:(long long)a2 previousSelectedTypeObj:(id)a3 selectedChannel:(id)a4 previousChannel:(id)a5 options:(id)a6;
- (void)p_selectedTabRepeatSelectWithTabBarController:(id)a0 selectedType:(long long)a1 selectedChannel:(id)a2 tabBarButton:(id)a3 options:(id)a4;
- (void)p_updateSelectedTabIfNeedWithTabBarController:(id)a0 selectedType:(long long)a1 previousSelectedType:(long long)a2 previousSelectedTypeObj:(id)a3 selectedChannel:(id)a4 previousChannel:(id)a5 tabBarButton:(id)a6 options:(id)a7;
- (void)p_endUpdateSelectedChannelPerfMetricsMonitor:(id)a0 previousChannel:(id)a1 options:(id)a2;
- (void)handleLeftSideBarWillOpen;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)dealloc;
- (id)tabBarController:(id)a0 animationControllerForTransitionFromViewController:(id)a1 toViewController:(id)a2;

@end
