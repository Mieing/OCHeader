@class NSRecursiveLock, NSString, CMMDB, NSDate, NSMutableArray;

@interface SendMessageMgr : MMUserService <PBMessageObserverDelegate, INewSyncExt, MMServiceProtocol> {
    NSRecursiveLock *m_oLock;
    BOOL m_isSending;
    unsigned int m_uiSyncSendCount;
    NSDate *m_dtLastSyncSend;
    NSString *m_path;
    NSMutableArray *m_messageQueue;
    CMMDB *m_oMMDB;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)SendMessageCountLimit;

- (id)init;
- (void)onServiceInit;
- (void)dealloc;
- (id)loadMessages;
- (void)saveMessages:(id)a0;
- (void)AddMsgToSendTable:(id)a0 MsgWrap:(id)a1;
- (void)DeleteSendMessageByChatName:(id)a0 localId:(unsigned int)a1;
- (unsigned int)deleteSendMsgInArray:(id)a0 withChatName:(id)a1 localId:(unsigned int)a2;
- (id)getSendMessages;
- (unsigned long long)GetCountOfSendMessage;
- (id)getPBPath;
- (void)onNewSyncOplogOK;
- (BOOL)IsSendingMsg;
- (void)CheckResend;
- (void)SendMsg;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
