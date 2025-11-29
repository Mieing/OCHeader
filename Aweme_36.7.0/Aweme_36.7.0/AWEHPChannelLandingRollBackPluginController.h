@class AWEHPTabLandingRollBackFloatButton, AWEHPLandingTabRollBackTask, NSString;
@protocol AWEHPChannelControllerPrivateConfigProtocol, AWEHPChannelProtocol;

@interface AWEHPChannelLandingRollBackPluginController : NSObject <AWEHPLandingRollBackAbility, AWEHPChannelPluginControllerProtocol, AWEHPChannelPluginControllerPrivateProtocol, AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (weak, nonatomic) id<AWEHPChannelProtocol> channel;
@property (weak, nonatomic) id<AWEHPChannelControllerPrivateConfigProtocol> privateConfig;
@property (retain, nonatomic) AWEHPTabLandingRollBackFloatButton *rollBackComponent;
@property (retain, nonatomic) AWEHPLandingTabRollBackTask *rollBackTask;
@property (nonatomic) long long dismissType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelLeaveWithModel:(id)a0;
- (void)channelDidReload:(id)a0;
- (void)channelViewDidAppear;
- (void)channelViewDidDisappear;
- (void)channelLandingTabWithModel:(id)a0;
- (void)channel:(id)a0 didEndRefreshWithModel:(id)a1;
- (id)channelGetCommunicationObject:(id)a0 byProtocol:(id)a1;
- (void)channel:(id)a0 bindPrivateConfig:(id)a1;
- (void)p_dismissComponentIfNeedWithType:(long long)a0;
- (void)p_showRollBackComponentIfNeed;
- (void)p_foldRollBackComponent;
- (void)closeRollBackComponentWithType:(long long)a0;
- (void)foldRollBackComponent;
- (void)p_buttonDidDismiss;
- (void)p_delayShowRollBackComponentOnPageVCIfNeed;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChannel:(id)a0;

@end
