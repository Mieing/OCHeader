@class NSRecursiveLock, MMTimer, NSString, NSData, NSMutableArray;

@interface VOIPCSSyncMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol> {
    BOOL mIsWeakSessionActive;
    BOOL mIsSessionActive;
    BOOL mIsNeedSync;
    long long mRoomId;
    long long mRoomKey;
    BOOL m_isDoingSync;
    int cancelInviteStatus;
    unsigned int mCSNotifySeq;
}

@property (retain, nonatomic) NSMutableArray *mOplogList;
@property (retain, nonatomic) NSRecursiveLock *mOplogLock;
@property (retain, nonatomic) MMTimer *m_syncTimer;
@property (nonatomic) unsigned int m_syncTimerCnt;
@property (nonatomic) unsigned int m_syncTimerStopValue;
@property (retain, nonatomic) NSData *mKeyBuf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)check_next_sync;
- (BOOL)isCSNotifySeqNew:(unsigned int)a0;
- (BOOL)isSyncKeyNew:(id)a0;
- (void)retriveKeyFrom:(id)a0 StatusKey:(unsigned int *)a1 RelayKey:(unsigned int *)a2 ConnectingKey:(unsigned int *)a3;
- (void)HandleVoipSyncResp:(id)a0 Event:(unsigned int)a1;
- (void)HandleVoipCSSyncResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)SendSyncRequestFor:(id)a0 withSelector:(unsigned int)a1;
- (void)SendCSSyncRequestFor:(id)a0 withSelector:(unsigned int)a1;
- (void)AddOplog:(unsigned int)a0 data:(id)a1;
- (void)ClearOplog;
- (void)onServiceClearData;
- (long long)getRoomId;
- (long long)getRoomKey;
- (int)getSitemStatus;
- (id)init;
- (void)dealloc;
- (void)StopSyncTimer;
- (void)StartSyncTimer:(unsigned long long)a0;
- (void)forceCheck_next_sync;
- (void)StartWeakSessionWithRoomId:(long long)a0 andRoomKey:(long long)a1;
- (void)StartSessionWithRoomId:(long long)a0 andRoomKey:(long long)a1;
- (void)SyncByNotifyWithRoomId:(long long)a0 andRoomKey:(long long)a1;
- (void)PushControlStatus:(unsigned int)a0;
- (void)PushRelayData:(id)a0;
- (void)StopSession;
- (void).cxx_destruct;

@end
