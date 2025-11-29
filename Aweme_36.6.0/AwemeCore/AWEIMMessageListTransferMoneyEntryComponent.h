@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListTransferMoneyEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)p_trackWithEvent:(id)a0 params:(id)a1;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_didClickTransferMoney;
- (void).cxx_destruct;

@end
