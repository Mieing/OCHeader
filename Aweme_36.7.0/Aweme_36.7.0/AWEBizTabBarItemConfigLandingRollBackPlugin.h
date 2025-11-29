@class AWEHPTabLandingRollBackFloatButton, AWEHPLandingTabRollBackTask, NSString;
@protocol AWEBizTabBarItemConfigProtocol, AWEHPBottomChannelProtocol;

@interface AWEBizTabBarItemConfigLandingRollBackPlugin : NSObject <AWEHPLandingRollBackAbility, AWEHPBottomChannelPluginControllerMultiInstanceProtocol>

@property (weak, nonatomic) id<AWEHPBottomChannelProtocol> channel;
@property (weak, nonatomic) id<AWEBizTabBarItemConfigProtocol> itemConfig;
@property (retain, nonatomic) AWEHPTabLandingRollBackFloatButton *rollBackComponent;
@property (retain, nonatomic) AWEHPLandingTabRollBackTask *rollBackTask;
@property (nonatomic) long long dismissType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToBottomChannel:(id)a0;

- (void)bottomChannelDidReload:(id)a0;
- (id)bottomChannelGetCommunicationObject:(id)a0 byProtocol:(id)a1;
- (void)beginLandingTabWithTabId:(id)a0 withModel:(id)a1;
- (void)tabBarWillUnSelectItemWithLeaveModel:(id)a0;
- (void)itemViewDidAppear;
- (void)itemViewDidDisappear;
- (id)initWithBottomChannel:(id)a0;
- (void)p_dismissComponentIfNeedWithType:(long long)a0;
- (void)p_showRollBackComponentIfNeed;
- (void)p_delayShowRollBackComponentOnTabVCIfNeed;
- (void)p_foldRollBackComponent;
- (void)closeRollBackComponentWithType:(long long)a0;
- (void)foldRollBackComponent;
- (void)p_buttonDidDismiss;
- (void).cxx_destruct;
- (void)dealloc;

@end
