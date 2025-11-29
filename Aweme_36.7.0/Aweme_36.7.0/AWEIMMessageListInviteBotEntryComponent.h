@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListInviteBotEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_groupBotsInviteClicked;
- (void).cxx_destruct;

@end
