@class AWEHPEditPanelController, AWEHPMessageForwardManager;

@interface AWEFeedChannelManager : AWEHPChannelBaseManager

@property (retain, nonatomic) AWEHPMessageForwardManager *messageForwardManager;
@property (retain, nonatomic) AWEHPEditPanelController *editPanelController;

+ (id)sharedInstance;

- (void)tabBarWillUnSelectItemWithLeaveModel:(id)a0;
- (void)tabBarWillSelectItemWithEnterModel:(id)a0;
- (void)willSetupChannel:(id)a0;
- (id)generateTopItemUIModelWithChannel:(id)a0;
- (void)didSetupChannel:(id)a0;
- (void)p_sendMonitorWithChannel:(id)a0 event:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4;
- (BOOL)callCanLandingUsingRecursiveWithConfig:(id)a0;
- (id)getFeedHomePageContextWithChannel:(id)a0;
- (void)didSwitchSelectedChannelFromChannel:(id)a0 toChannel:(id)a1 config:(id)a2;
- (void)didUpdateCurrentChannels:(id)a0;
- (void)callEnterUsingRecursiveWithModel:(id)a0;
- (void)callLeaveUsingRecursiveWithModel:(id)a0;
- (id)getTopTabEditPanelController;
- (id)getEditPanelConfig;
- (BOOL)isEditPanelShowing;
- (id)getTopBarStageWithChannel:(id)a0;
- (id)p_getReorderedAllChannelListWithCurrentChannelList:(id)a0;
- (void)reloadChannelWithChannelModels:(id)a0 currentChannelIDList:(id)a1 reloadType:(id)a2 selectedChannelID:(id)a3;
- (void).cxx_destruct;

@end
