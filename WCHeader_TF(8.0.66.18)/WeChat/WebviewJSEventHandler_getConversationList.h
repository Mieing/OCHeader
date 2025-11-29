@interface WebviewJSEventHandler_getConversationList : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)isVaildMiniGameConversation:(id)a0 SessionInfo:(id)a1;
- (BOOL)isVaildMiniGameConversation:(id)a0 inSessionInfoList:(id)a1;

@end
