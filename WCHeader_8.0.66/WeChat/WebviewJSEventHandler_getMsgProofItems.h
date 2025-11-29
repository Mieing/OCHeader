@interface WebviewJSEventHandler_getMsgProofItems : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)showChatWindowsForPickingMsgFromUser:(id)a0;
- (void)processResultWithUser:(id)a0 logicController:(id)a1 msgList:(id)a2;

@end
