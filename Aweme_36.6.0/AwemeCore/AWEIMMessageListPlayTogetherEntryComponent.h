@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListPlayTogetherEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_didStartPlayTogether;
- (void).cxx_destruct;

@end
