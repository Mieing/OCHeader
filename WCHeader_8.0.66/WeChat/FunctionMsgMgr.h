@class NSRecursiveLock, NSString, FunctionNewXml, NSMutableArray;

@interface FunctionMsgMgr : MMUserService <IMsgExt, INewSyncExt, PBMessageObserverDelegate, MMServiceProtocol> {
    NSRecursiveLock *m_oLock;
    BOOL m_bGettingMsg;
    FunctionNewXml *m_oCurrNewXml;
    unsigned int m_nextActionTime;
    NSMutableArray *m_xmlList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)test;
- (id)parseAddMsg:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 baseMsg:(id)a1;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)handleFunctionNewXml:(id)a0;
- (void)tryNextTask;
- (void)onNewSyncEnd;
- (void)insertFunctionNewXml:(id)a0;
- (id)getFunctionNewXml:(id)a0;
- (id)removeFunctionNewXml:(id)a0;
- (id)removeFunctionNewXml:(id)a0 version:(unsigned long long)a1;
- (void)mergeFunctionNewXml:(id)a0;
- (void)updateFunctionNewXml:(id)a0 opType:(unsigned int)a1 version:(unsigned long long)a2;
- (void)updateFunctionNewXml:(id)a0 retryCount:(unsigned int)a1 nextRetry:(unsigned int)a2 customBuf:(id)a3 businessBuf:(id)a4;
- (id)getPBPath;
- (id)loadFunctionNewXml;
- (void)saveFunctionNewXml:(id)a0;
- (void)requestCgiWithCgiName:(id)a0 cgiPath:(id)a1 cmdid:(unsigned int)a2 businessId:(unsigned int)a3 functionMsgId:(id)a4 customBuff:(id)a5;
- (void)requestCgi:(id)a0;
- (void)handleGetMsgFail:(id)a0 buf:(id)a1 businessBuf:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetFuncMsgResp:(id)a0 Event:(unsigned int)a1;
- (void)revokeMsg:(id)a0;
- (id)loadFunctionMsg;
- (void)saveFunctionMsg:(id)a0;
- (void)insertFunctionMsg:(id)a0;
- (void)removeFunctionMsg:(id)a0;
- (void)updateFunctionMsg:(id)a0 opType:(unsigned int)a1;
- (id)getFunctionMsg:(id)a0;
- (void)showAddMsg:(id)a0 version:(unsigned long long)a1 createTime:(unsigned int)a2;
- (void)showMessageWrap:(id)a0 bussinessId:(unsigned long long)a1;
- (void)showMessageWraps:(id)a0 bussinessId:(unsigned long long)a1 businessInfo:(id)a2;
- (void)insertAddMsg:(id)a0;
- (id)getAddMsg:(id)a0;
- (void)removeAddMsg:(id)a0;
- (id)loadAddMsg;
- (void)saveAddMsg:(id)a0;
- (void).cxx_destruct;

@end
