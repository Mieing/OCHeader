@class CMMDB, MMTimer, NSRecursiveLock, NSMutableDictionary;
@protocol UploadVoiceDelegate;

@interface MMNewUploadVoiceMgr : BaseUploadVoiceMgr <PBMessageObserverDelegate, IMsgExt> {
    unsigned int m_uiCurUploadID;
    BOOL m_bIsUploading;
    unsigned int m_uiQueueCount;
    BOOL m_bDBError;
    NSMutableDictionary *m_dicMergeResult;
}

@property (retain, nonatomic) CMMDB *m_oMMDB;
@property (retain, nonatomic) NSRecursiveLock *m_oLock;
@property (retain, nonatomic) MMTimer *m_timerCheck;
@property (weak, nonatomic) id<UploadVoiceDelegate> m_delNotifyToSender;

- (id)init;
- (void)dealloc;
- (void)InitUploadMgr:(id)a0 Lock:(id)a1 Delegate:(id)a2;
- (void)Start;
- (void)Stop;
- (void)TimerCheckUploadQueue;
- (BOOL)ModifyMsgSource:(id)a0 byToUser:(id)a1 localId:(unsigned int)a2;
- (void)AddNewPart:(id)a0 LocalID:(unsigned int)a1 n64SvrID:(long long)a2 Offset:(unsigned int)a3 Len:(unsigned int)a4 VoiceTime:(unsigned int)a5 CreateTime:(unsigned int)a6 EndFlag:(unsigned int)a7 CancelFlag:(unsigned int)a8 VoiceFormat:(unsigned int)a9 ForwardFlag:(unsigned int)a10 msgSource:(id)a11;
- (void)ResendVoiceMsg:(id)a0 MsgWrap:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)insertNewRowInUploadVoice:(id)a0;
- (BOOL)mergeToDB:(id)a0;
- (void)DeleteMsg:(id)a0 LocalID:(unsigned int)a1;
- (void)CancelUpload:(id)a0 LocalID:(unsigned int)a1 n64SvrID:(long long)a2 Offset:(unsigned int)a3 Len:(unsigned int)a4 VoiceTime:(unsigned int)a5 CreateTime:(unsigned int)a6 EndFlag:(unsigned int)a7 CancelFlag:(unsigned int)a8 VoiceFormat:(unsigned int)a9;
- (BOOL)startSend;
- (BOOL)uploadOnePacket;
- (id)getOneUploadItemFromDB;
- (BOOL)loadDataFromAudioFile:(id)a0;
- (BOOL)loadDataFromAudioFileForExpirePacket:(id)a0;
- (void)UpdateRetryCount:(id)a0;
- (BOOL)CreateUploadEvent:(id)a0;
- (BOOL)PrepareForUpload:(id)a0 packetExpireTime:(BOOL)a1;
- (void)MainThreadNotifyUploadVoiceOK:(id)a0;
- (BOOL)IsInUploadQueue:(id)a0 LocalID:(unsigned int)a1 Offset:(unsigned int)a2;
- (void)HandleUploadVoiceOK:(id)a0;
- (id)loadPB;
- (void)savePB:(id)a0;
- (BOOL)InsertUploadVoice:(id)a0;
- (BOOL)UpdateUploadVoiceRetryCount:(id)a0 byUserName:(id)a1 localId:(unsigned int)a2 offset:(unsigned int)a3;
- (BOOL)UpdateUploadVoicePropertys:(id)a0 byUserName:(id)a1 localId:(unsigned int)a2 offset:(unsigned int)a3;
- (BOOL)DeleteUploadVoiceByToUser:(id)a0 localId:(unsigned int)a1;
- (BOOL)DeleteUploadVoiceByToUser:(id)a0 localId:(unsigned int)a1 offset:(unsigned int)a2;
- (id)GetOneUploadVoice;
- (BOOL)IsExistInUploadVoiceByToUser:(id)a0 localId:(unsigned int)a1 offset:(unsigned int)a2;
- (unsigned int)GetCountOfUploadVoice;
- (id)getPBPath;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
