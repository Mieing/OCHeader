@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListRedPacketEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry, AWEIMMessageListRedPacketEntryInterface>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (nonatomic) BOOL isRefreshingUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (BOOL)canShowDecidedBySettingsWithContext:(id)a0;
- (void)didClickRedPacket:(long long)a0;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)showRedpacketPage:(id)a0;
- (void)trackChatRedpacketClickEvent;
- (id)mangoConfig;
- (void)p_onItemDidShownFromChatPanel;
- (BOOL)p_processModelAction;
- (void)p_trackJumpDynamicSchemaResult:(long long)a0;
- (void)p_trackRedPackRejectEvent;
- (void)p_redPackRejectWithToast:(id)a0;
- (void).cxx_destruct;

@end
