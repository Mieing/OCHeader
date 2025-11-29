@class NSRecursiveLock, MMTimer, NSString, NSData, NSMutableArray;

@interface VOIPSyncMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol> {
    BOOL mIsWeakSessionActive;
    BOOL mIsSessionActive;
    BOOL mIsNeedSync;
    unsigned long long mRoomId;
    long long mRoomKey;
    BOOL m_isDoingSync;
    int cancelInviteStatus;
}

@property (retain, nonatomic) NSMutableArray *mOplogList;
@property (retain, nonatomic) NSRecursiveLock *mOplogLock;
@property (retain, nonatomic) MMTimer *m_syncTimer;
@property (nonatomic) unsigned long long mSendVoipSyncTime;
@property (retain, nonatomic) NSData *mKeyBuf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)check_next_sync;
- (BOOL)isSyncKeyNew:(id)a0;
- (void)retriveKeyFrom:(id)a0 StatusKey:(unsigned int *)a1 RelayKey:(unsigned int *)a2 ConnectingKey:(unsigned int *)a3;
- (void)HandleVoipSyncResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)SendSyncRequestFor:(id)a0 withSelector:(unsigned int)a1;
- (void)AddOplog:(unsigned int)a0 data:(id)a1;
- (id)GetOplogArray;
- (void)RemoveOplogArray:(id)a0;
- (void)ClearOplog;
- (void)onServiceClearData;
- (unsigned long long)getRoomId;
- (long long)getRoomKey;
- (int)getSitemStatus;
- (id)init;
- (void)dealloc;
- (void)StopSyncTimer;
- (void)StartSyncTimer:(unsigned long long)a0;
- (void)forceCheck_next_sync;
- (void)StartWeakSessionWithRoomId:(unsigned long long)a0 andRoomKey:(long long)a1;
- (void)StartSessionWithRoomId:(unsigned long long)a0 andRoomKey:(long long)a1;
- (void)SyncByNotifyWithRoomId:(unsigned long long)a0 andRoomKey:(long long)a1;
- (void)PushControlStatus:(unsigned int)a0;
- (void)PushRelayData:(id)a0;
- (void)StopSession;
- (void).cxx_destruct;

@end
