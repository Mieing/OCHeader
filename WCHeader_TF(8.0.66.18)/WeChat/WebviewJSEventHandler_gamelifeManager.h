@interface WebviewJSEventHandler_gamelifeManager : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)getConversationList:(id)a0 jsEvent:(id)a1;
- (void)addConversation:(id)a0 jsEvent:(id)a1;
- (void)deleteConversation:(id)a0 jsEvent:(id)a1;
- (void)getGameLifeMsg:(id)a0 jsEvent:(id)a1;
- (void)sendGameLifeMsg:(id)a0 jsEvent:(id)a1;
- (void)deleteGameLifeMsg:(id)a0 jsEvent:(id)a1;
- (void)getGameLifeContact:(id)a0 jsEvent:(id)a1;
- (void)getGameLifeSessionId:(id)a0 jsEvent:(id)a1;
- (BOOL)isVaildMiniGameConversation:(id)a0 SessionInfo:(id)a1;
- (BOOL)isVaildMiniGameConversation:(id)a0 inSessionInfoList:(id)a1;
- (BOOL)isNullOrEmpty:(id)a0;
- (void)sendMsg:(long long)a0 sessionId:(id)a1 msg:(id)a2;
- (id)constructMsgWrap:(id)a0 content:(id)a1 selfUsername:(id)a2 talker:(id)a3 msgType:(long long)a4;
- (void)updateContent:(id)a0;
- (id)printNodeText:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

@end
