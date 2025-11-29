@interface BDECPigeonCustomerBCConversation : BDECPigeonBCConversation

+ (Class)messageClass;

- (void)createSubConversationWhenNotExist:(id /* block */)a0;
- (BOOL)isMessageReadFromLocalWithIndex:(long long)a0;
- (BOOL)tryMarkMessageReadFromLocalWithMessage:(id)a0;
- (id)parentConvChatReadIndexKVKeyWithBizConversationId:(id)a0 bizType:(id)a1;
- (id)messageReadKVStore;
- (BOOL)closed;

@end
