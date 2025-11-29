@class NSString;

@interface IESIMPublishMessageDataComponent : AWEIMComponentBase <IESIMPublishMessageDataComponentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)renderMessages:(id)a0;
- (id)p_renderMessages2:(id)a0;
- (id)p_renderMessages:(id)a0;
- (id)p_queryMessagesWithMsgIDs:(id)a0;
- (id)p_updateQuoteMessagesForMessages:(id)a0 quoteMsgServerIds:(id)a1 conversation:(id)a2;
- (void)p_updateQuoteMsgForMessage:(id)a0 quoteMessage:(id)a1;
- (id)p_convertIESMessage:(id)a0 quoteMsgDic:(id)a1;
- (id)p_queryIESMessagesWithMsgIDs:(id)a0;
- (id)p_queryQuoteMessagesWithQuoteMsgServerIds:(id)a0 conversation:(id)a1;
- (BOOL)p_isSelfSeenMessage:(id)a0;
- (BOOL)isAntiSpamMessageWithTIMOMessage:(id)a0;
- (id)degradeMessageIfNeed:(id)a0 forceDegradeContent:(id)a1;
- (id)p_containTips:(id)a0;
- (BOOL)isSupportPostMessage:(id)a0;
- (id)degradeMessageDescriptionWithMessage:(id)a0;

@end
