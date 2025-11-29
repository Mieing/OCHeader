@interface AWEIMMangoShareService : NSObject <AWEIMMangoSharePanelService>

- (void)handleRouterWithParams:(id)a0;
- (void)handleReflowRouterWithParams:(id)a0;
- (void)showSharePanelWith:(id)a0;
- (void)notifyReflowCompleteWithConversation:(id)a0 messageID:(id)a1;
- (void)doActionWithTaskID:(id)a0 taskToken:(id)a1 taskGroup:(id)a2 completion:(id /* block */)a3;
- (id)init;

@end
