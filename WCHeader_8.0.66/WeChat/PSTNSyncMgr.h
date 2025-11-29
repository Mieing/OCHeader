@class MMTimer, NSString;

@interface PSTNSyncMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol> {
    BOOL mIsSessionActive;
    BOOL mIsNeedSync;
    int mRoomId;
    long long mRoomKey;
    long long mCallSeq;
    BOOL m_isDoingSync;
    unsigned int m_nCalledStatus;
    unsigned int m_nStatusSyncKey;
    int mAcceptDataFlag;
}

@property (retain, nonatomic) MMTimer *m_syncTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)check_next_sync;
- (void)HandlePSTNSyncResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)SendSyncRequestFor;
- (void)onServiceClearData;
- (int)getRoomId;
- (long long)getRoomKey;
- (unsigned int)getStatusSyncKey;
- (void)setCalledStatus:(unsigned int)a0;
- (void)setStatusSyncKey:(unsigned int)a0;
- (void)setAcceptDataFlag:(int)a0;
- (id)init;
- (void)StopSyncTimer;
- (void)StartSyncTimer:(unsigned long long)a0;
- (void)forceCheck_next_sync;
- (void)StartSessionWithRoomId:(int)a0 andRoomKey:(long long)a1 andCallSeq:(long long)a2;
- (void)StopSession;
- (void).cxx_destruct;

@end
