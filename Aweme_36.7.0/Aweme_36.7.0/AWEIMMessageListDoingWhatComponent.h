@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListDoingWhatComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListPlusPanelRegistry>

@property (copy, nonatomic) NSString *lightCameraRepliedMessageIdString;
@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_didClickWhatAreYouDoing;
- (void).cxx_destruct;

@end
