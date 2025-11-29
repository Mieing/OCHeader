@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListMyLikeEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry, AWEIMMessageListMyLikeEntryInterface>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)didStartMyLikeWithContext:(id)a0;
- (void).cxx_destruct;

@end
