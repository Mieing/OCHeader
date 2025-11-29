@interface AWEIMGroupShareCommandNetwork : NSObject

+ (void)fetchGroupShareCommandWithConversationId:(id)a0 completion:(id /* block */)a1;
+ (void)__fetchGroupShareCommandV2WithConversationId:(id)a0 completion:(id /* block */)a1;
+ (id)p_insertFailShareCommandMessageWithConversationID:(id)a0;
+ (void)insertGroupShareCommandMessageWithConversationId:(id)a0 completion:(id /* block */)a1;

@end
