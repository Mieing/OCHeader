@interface LiteAppJsApiGetMsgProofItems : LiteAppJsApi

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)showChatWindowsForPickingMsgFromUser:(id)a0;
- (void)processResultWithUser:(id)a0 logicController:(id)a1 msgList:(id)a2;

@end
