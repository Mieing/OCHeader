@class NSString, NSObject, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface BadRoomMgr : MMUserService <MessageDBExt, IMMNewSessionMgrExt, INewSyncExt, MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *m_updateDigestQueue;
}

@property (retain, nonatomic) NSRecursiveLock *m_oLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)existsInDeletedMsg:(long long)a0;
- (void)AddDeletedMsg:(long long)a0 createTime:(unsigned int)a1;
- (id)getPBPath;
- (id)loadDeleteMsg;
- (void)saveDeleteMsg:(id)a0;
- (void)onServiceInit;
- (void)onNewSyncBadRoomClearUnread:(id)a0;
- (void)onNewSyncBadRoomBatchHandleDigest:(id)a0;
- (void)batchHandleDigestDatas:(id)a0;
- (id)convertDataToDigest:(id)a0;
- (id)genSessionByDigest:(id)a0 updateSequenceDigests:(id)a1;
- (void)updateSessionInfos:(id)a0 updateSequenceDigests:(id)a1;
- (void)onDeleteBrokenMsg:(unsigned int)a0 chatName:(id)a1;
- (void)onDeleteAllMsgs:(id)a0;
- (void)onDeleteBadRoomMsg:(long long)a0 createTime:(unsigned int)a1 chatName:(id)a2;
- (void)onWillDeleteSession:(id)a0;
- (void)notifyWithData:(id)a0;
- (id)HandleSysMsg:(id)a0 revokeMsgId:(long long *)a1;
- (void).cxx_destruct;

@end
