@interface WebviewJSEventHandler_getClipboardData : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)handleJSEventInMainThread:(id)a0;
- (void)readPasteBoardWithEvent:(id)a0 hasContentPtr:(BOOL *)a1;
- (void)fetchClipBoardContentWithTextPtr:(id *)a0 htmlPtr:(id *)a1 hasContentPtr:(BOOL *)a2;
- (BOOL)iOSReadPasteBaordRemindOpen;
- (double)getRemindAminitionDuration;

@end
