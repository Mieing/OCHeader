@interface AWEIMPushAggregator : NSObject

- (id)p_businessTypeWithInfo:(id)a0;
- (BOOL)p_shouldParticipateInAggregationWithBusinessType:(id)a0;
- (id)p_createPushVMWithInfo:(id)a0 context:(id)a1;
- (id)p_conversationsWithInfoArray:(id)a0;
- (id)p_careChatsWithConversations:(id)a0;
- (id)p_businessTypeWithShowChat:(id)a0;
- (long long)p_priorityLevelForPushBusinessType:(id)a0;
- (id)p_pushTitleWithChats:(id)a0 conversationCount:(long long)a1;
- (BOOL)p_shouldHideDetailMsgWithChat:(id)a0;
- (BOOL)p_shouldHidePrivateLetterIconWithChat:(id)a0;
- (long long)p_aggregateStyleWithConversationCount:(long long)a0 messageCount:(long long)a1;
- (unsigned long long)p_aggregateTypeWithContext:(id)a0;
- (id)p_pushContentWithShowChat:(id)a0 messageCount:(long long)a1;
- (id)p_displayNameWithChat:(id)a0 scene:(unsigned long long)a1;
- (id)p_businessTypeWithPushNewMessage:(BOOL)a0 messageType:(long long)a1 aweType:(long long)a2;
- (id)aggregateInfo:(id)a0 withContext:(id)a1;

@end
