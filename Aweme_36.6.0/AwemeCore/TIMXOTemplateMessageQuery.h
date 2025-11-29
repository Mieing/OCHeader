@interface TIMXOTemplateMessageQuery : TIMXOTemplateQuery

+ (id)queryLocalMessagesOfTypes:(id)a0 beforeMessage:(id)a1 inConversation:(id)a2 limit:(unsigned long long)a3;
+ (id)queryLocalMessagesOfTypes:(id)a0 afterMessage:(id)a1 inConversation:(id)a2 limit:(unsigned long long)a3;

- (void)assertUnknown;
- (id)init;

@end
