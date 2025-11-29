@interface BDECPigeon1v1Conversation : BDECPigeonBaseSingleConversation

+ (Class)messageClass;

- (id)bizConversationID;
- (id)pigeonBizType;
- (id)countdownTime;
- (id)curTalkID;
- (id)customerUID;
- (void)sendReadMessageWithIndex:(long long)a0;
- (BOOL)visitAgain;
- (BOOL)isNewEnter;
- (BOOL)messageReadWithIndex:(long long)a0;
- (id)messageDataSourceWithOptions:(id)a0;
- (void)markAllMessagesAsReadWithMode:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)countdown;

@end
