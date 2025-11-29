@interface WebviewJSEventHandler_gameCenterMsgCtrl : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (int)getMsgList:(id)a0 Result:(id)a1;
- (void)fillResultArray:(id)a0 withMsgList:(id)a1 contentType:(id)a2;
- (int)setMsgListRead:(id)a0 Result:(id)a1;
- (int)getBubbleMsg:(id)a0 Result:(id)a1;
- (int)setBubbleMsgRead:(id)a0 Result:(id)a1;
- (int)getMsgCenterRedDotMsg:(id)a0 Result:(id)a1;
- (int)setMsgCenterRedDotMsgRead:(id)a0 Result:(id)a1;
- (int)getNewAppMsg:(id)a0 Result:(id)a1;
- (int)setNewAppMsgRead:(id)a0 Result:(id)a1;
- (int)getGiftRedDotMsg:(id)a0 Result:(id)a1;
- (int)setGiftRedDotMsgRead:(id)a0 Result:(id)a1;
- (int)closeH5FloatLayer:(id)a0 Result:(id)a1;
- (int)deleteMsg:(id)a0;

@end
