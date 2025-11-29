@class CMMDB, NSMutableDictionary, NSMutableArray;

@interface SendMessageEventHandler : ProtobufEventHandler {
    NSMutableDictionary *m_dicMsgList;
    NSMutableArray *m_arrMsgList;
    CMMDB *m_oMMDB;
}

- (id)init;
- (void)OnProtocolStart:(id)a0 shouldContinue:(BOOL *)a1;
- (id)getMessageKey:(id)a0;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (void)reportWhenMsgSendFinish:(id)a0 msgWrap:(id)a1;
- (void)OnProtocolConnectFail:(id)a0;
- (void)HandleSendFail;
- (void)handleSendSuccessMsg:(id)a0;
- (void)LoadMsgFromDB;
- (void).cxx_destruct;

@end
