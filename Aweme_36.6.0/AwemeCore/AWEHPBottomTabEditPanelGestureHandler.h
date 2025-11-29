@class NSString, AWEHPBottomEditPanelController;
@protocol AWEHPBottomChannelProtocol, AWENormalModeTabBarItemConfigAbility, AWEBizTabBarUIControlTaskProtocol, AWEBizTabBarItemConfigProtocol;

@interface AWEHPBottomTabEditPanelGestureHandler : NSObject <AWEBizTabBarLightModeListenerProtocol, AWEBizTabBarGlobalPluginProtocol, AWEHPBottomChannelPluginControllerMultiInstanceProtocol>

@property (retain, nonatomic) AWEHPBottomEditPanelController *panelController;
@property (weak, nonatomic) id<AWEBizTabBarItemConfigProtocol> itemConfig;
@property (retain, nonatomic) id<AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (weak, nonatomic) id<AWEHPBottomChannelProtocol> config;
@property (retain, nonatomic) id<AWEBizTabBarUIControlTaskProtocol> tabBarControlTask;
@property (copy, nonatomic) NSString *bottomTipBubbleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToBottomChannel:(id)a0;

- (void)switchToLightModeWithProgress:(double)a0;
- (void)itemViewDidAppear;
- (BOOL)shouldHandleTabBarItemLongPressFromPreviousSelectedType:(long long)a0;
- (BOOL)tabBarItemLongPressFromPreviousSelectedTypeWithInterceptAfterByStateBegan:(long long)a0;
- (id)bubbleComponentID;
- (id)initWithBottomChannel:(id)a0;
- (BOOL)isPluginEffect;
- (BOOL)shouldInterceptSingleClickWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (BOOL)shouldInterceptLongPressWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (BOOL)shouldInterceptDoubleClickWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (void)tabBarWillChangeSelectedTabWithCurrentSelectedTabID:(id)a0 previousSelectedTabID:(id)a1;
- (id)currentTabID;
- (BOOL)p_canShowEditPanel;
- (BOOL)p_tryShowEditPanel;
- (void)trackShowPanelCheckWithStatus:(unsigned long long)a0 error:(id)a1;
- (id)p_generateEditListWithTabList:(id)a0;
- (BOOL)p_showPanelWithEditItemList:(id)a0;
- (void)updatePanelThemeWithLightProgress:(double)a0;
- (id)p_generateEditItemModelWithTabID:(id)a0 inBottom:(BOOL)a1;
- (void).cxx_destruct;

@end
