@class NSString;

@interface AWEIMMessageIncentiveChatDataUpdateComponent : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMConIncentiveChatDataInterface, AWEIMIncentiveChatServiceMessage, AWEIMMessageListDataAction, AWEIMIncentiveChatPrivateTicketDataServiceMessage>

@property (nonatomic) unsigned long long relationStatus;
@property (nonatomic) BOOL needListenExtUpdateAndRefreshAcb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)completeIncentiveChatServiceUpdate:(id)a0;
- (void)completeInfoOtherIncentiveChatDataUpdate;
- (void)completeCommandMessageIncentiveChatDataUpdate;
- (void)incentiveChatService:(id)a0 relationUpdateWithRelationID:(id)a1 conversationID:(id)a2;
- (void)incentiveChatService:(id)a0 relationProgressUpdate:(id)a1 cacheProgress:(id)a2 source:(unsigned long long)a3;
- (void)incentiveChatService:(id)a0 relationActivationUpdate:(id)a1 source:(unsigned long long)a2;
- (void)incentiveChatServiceActivityExit:(id)a0;
- (void)privateIncentiveTicketInfoUpdate;
- (BOOL)p_needListenExtUpdateAndRefreshAcb;
- (void)p_changeToNewRelationStatus:(unsigned long long)a0;
- (void)dealloc;

@end
