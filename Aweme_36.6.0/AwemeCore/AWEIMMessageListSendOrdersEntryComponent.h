@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListSendOrdersEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry, AWEIMMessageListUserInfoAction>

@property (nonatomic) BOOL isPigeonKeyUser;
@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (BOOL)canShowDecidedBySettingsWithContext:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_insertSendOrdersEntry;
- (void)p_didClickSendOrders;
- (void).cxx_destruct;

@end
