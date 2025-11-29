@class NSString, AWEHomePageRemoteManager, AWEHomePageRemoteTipsEntry;

@interface AWEHPRemoteGuideTipsController : AWEBaseController <AWEHPHomeContainerViewControllerLifeCycle, AWEHPRemoteControllerProtocol, AWEBizTabBarLightModeListenerProtocol, AWEHPRemoteTipsEntryProtocol, AWEHomePageRemotePanelLifeCycle, AWEBizTabBarGlobalPluginProtocol>

@property (nonatomic) double tabbarProgress;
@property (retain, nonatomic) AWEHomePageRemoteManager *remoteManager;
@property (retain, nonatomic) AWEHomePageRemoteTipsEntry *remoteTipsEntry;
@property (nonatomic) BOOL isBubbleShowing;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panelDidShow;
- (void)addNotification;
- (void)switchToLightModeWithProgress:(double)a0;
- (void)hpSlidingScrollViewWillBeginDragging;
- (void)hpTopTabDidSelectToIndex:(long long)a0 previousIndex:(long long)a1;
- (void)hpTopTabWillSelectToIndex:(long long)a0 previousIndex:(long long)a1;
- (BOOL)hpHandleTabBarDidSingleClick;
- (BOOL)hpHandleTabBarDidDoubleClick;
- (BOOL)hpHandleTabBarDidLongPress;
- (BOOL)isRemotePanelShowing;
- (void)hideRemotePanelWithReason:(long long)a0;
- (BOOL)isPluginEffect;
- (BOOL)shouldInterceptLongPressWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (BOOL)shouldInterceptDoubleClickWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (void)panelDidDismissWithReason:(long long)a0;
- (void)landingToTargetChannelWithAnimateType:(long long)a0;
- (void)entryWillDismissWithReason:(long long)a0 clickModuleType:(long long)a1;
- (void)entryDidShowWithModulesString:(id)a0;
- (BOOL)isModuleValidWithModuleType:(long long)a0;
- (void)p_setupRemotePanelIfNeed;
- (void)removeAllNotification;
- (BOOL)dismissRemotePanelWithReason:(long long)a0 animateType:(long long)a1;
- (long long)currentSelectedBottomTabType;
- (BOOL)p_handelShowHomePageRemotePanelWithEnterMethod:(id)a0;
- (void)p_updateRemotePanelThemeStyleWithProgress:(double)a0;
- (void)p_updateBottomImageWithProgress:(double)a0;
- (id)currentTopTabChannelID;
- (void)loadImageWithModel:(id)a0 completion:(id /* block */)a1;
- (void)p_handleXTabChannelSwitch;
- (id)bottomImageWithProgress:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)dealloc;
- (BOOL)isLightTheme;

@end
