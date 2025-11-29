@class NSString;

@interface AWEIMMessageListPlatformEntryComponent : AWEIMComponentBase <AWEIMMessageListPlatformEntryInterface>

@property BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)chatPanelModelWithPlatformChatModelType:(unsigned long long)a0;
- (void)p_onItemDidSelectedFromChatPanelWithChatPanelModel:(id)a0;
- (void)handlePanelButtonShowAction:(id)a0;
- (void)handleGroupBuyShowAction:(id)a0;
- (void)p_performActionWithModel:(id)a0;
- (void)p_checkChatPanelAvailabilityWithModel:(id)a0 completion:(id /* block */)a1;
- (id)p_URLWithConversationContextFromOriginalURL:(id)a0;
- (void)p_chatPanelClickReportWithPlatformChatPanelModel:(id)a0;
- (id)p_conversationContext;
- (id)p_converastionType;

@end
