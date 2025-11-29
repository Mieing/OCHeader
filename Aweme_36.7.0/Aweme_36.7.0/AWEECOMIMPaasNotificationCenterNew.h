@interface AWEECOMIMPaasNotificationCenterNew : AWEECOMIMPaasNotificationCenter

- (void)websocketStateChange:(unsigned long long)a0;
- (void)websocketDataReceiver:(long long)a0 info:(id)a1;
- (void)longConnectionReceiveMessageServerMessageID:(long long)a0 clientMessageID:(id)a1 conversationID:(id)a2 talkID:(id)a3;
- (void)receiverMessageResponse:(id)a0 conversation:(id)a1 message:(id)a2;
- (void)conversationReadStateChange:(id)a0;
- (void)messageDidInsert:(id)a0 messages:(id)a1;
- (void)messageUpdate:(id)a0;
- (void)p2pMessageNew:(id)a0 conversation:(id)a1;
- (void)conversationUpdate:(id)a0;
- (void)conversationListChange:(id)a0 deletedConvs:(id)a1;
- (void)messagesDeleted:(id)a0;

@end
