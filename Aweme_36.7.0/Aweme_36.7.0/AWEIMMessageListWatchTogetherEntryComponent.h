@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListWatchTogetherEntryComponent : AWEIMComponentBase <AWEIMMessageListPlayEntryRegistry, AWEIMMessageListPlusPanelRegistry>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)onTapPlayEntryItem:(id)a0;
- (BOOL)canShowInPlayEntryWithContext:(id)a0;
- (id)playEntryBizKey;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_onItemDidSelectedWithExtraInfo:(id)a0;
- (BOOL)p_shouldShowWatchTogetherEntranceWithContext:(id)a0;
- (void).cxx_destruct;

@end
