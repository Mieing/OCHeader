@interface WAJSEventHandler_gamelifeManager : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)getGameLifeRedCount;
- (BOOL)isVaildMiniGameConversation:(id)a0 SessionInfo:(id)a1;
- (BOOL)isVaildMiniGameConversation:(id)a0 inSessionInfoList:(id)a1;

@end
