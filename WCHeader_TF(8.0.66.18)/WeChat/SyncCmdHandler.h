@class CMMDB, NSMutableDictionary, NSRecursiveLock, NSMutableArray;

@interface SyncCmdHandler : ProtobufEventHandler {
    NSMutableArray *m_arrMsgList;
    NSMutableDictionary *m_dicWebWxClearUnRead;
    NSMutableArray *m_arrContactList;
    NSMutableDictionary *m_dicChatroomMemberList;
    NSMutableArray *m_arrChatroomContactList;
    NSMutableArray *m_arrMsgDigest;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
}

@property (nonatomic) BOOL m_ignoreSession;
@property (nonatomic) unsigned int syncMsgNum;
@property (nonatomic) unsigned long long addMsgTime;
@property (nonatomic) unsigned long long clearUnReadTime;

- (id)init;
- (BOOL)handleCmds:(id)a0 isFromPushData:(BOOL)a1 showLocalPush:(BOOL)a2;
- (BOOL)HandleBatch:(BOOL)a0 ShowPush:(BOOL)a1;
- (BOOL)handleBatchMessages:(id)a0;
- (BOOL)handleBatchMessages:(id)a0 isFromPushData:(BOOL)a1 ShowPush:(BOOL)a2;
- (BOOL)processSpecialMessage:(id)a0;
- (BOOL)BatchAddMsg:(BOOL)a0 ShowPush:(BOOL)a1;
- (BOOL)checkLastAddMsg:(id)a0 chatName:(id)a1;
- (id)StatusNotifyParseUsrName:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 msgWrap:(id)a1;
- (void)ParseStatusNotify:(id)a0 map:(id)a1;
- (unsigned int)StatusNotifyParseCreateTime:(id)a0 chatName:(id)a1;
- (void)AddSpecialMsg:(id)a0 ChatName:(id)a1 MsgWrap:(id)a2;
- (BOOL)HandleHelloMsg:(id)a0 SpcialSession:(id)a1 NotAddDBSession:(id)a2 GetChangeDisplay:(BOOL *)a3;
- (BOOL)AddHelloMsg:(id)a0 HelloUser:(id)a1 ChatName:(id)a2 Des:(unsigned int)a3 OpCode:(unsigned int)a4 DBRet:(BOOL *)a5 GetChangeDisplay:(BOOL *)a6;
- (BOOL)AddHelloMessageToDB:(id)a0 HelloUser:(id)a1 MsgWrap:(id)a2 Des:(unsigned int)a3 OpCode:(unsigned int)a4 GetChangeDisplay:(BOOL *)a5;
- (void)handleClearHadDeleteHelloInInsertNewHelloMsg:(id)a0 HelloUser:(id)a1;
- (void)HandleModContact:(id)a0;
- (id)HandleMemContactDetail:(id)a0 isSimplify:(BOOL)a1;
- (void)BatchModContact;
- (void)BatchModChatroomMember;
- (void)HandleModUsrImg:(id)a0;
- (int)handleAddMessageActionNotifyData:(id)a0;
- (void).cxx_destruct;

@end
