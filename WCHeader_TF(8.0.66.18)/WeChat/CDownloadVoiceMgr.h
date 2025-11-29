@class NSRecursiveLock;
@protocol DownloadVoiceDelegate;

@interface CDownloadVoiceMgr : MMObject <PBMessageObserverDelegate> {
    unsigned int m_uiCurDownloadID;
    unsigned long long m_uiQueueCount;
}

@property (nonatomic) BOOL canAutoDownload;
@property (retain, nonatomic) NSRecursiveLock *m_oLock;
@property (weak, nonatomic) id<DownloadVoiceDelegate> m_delNotifyToReceiver;

- (id)init;
- (void)dealloc;
- (void)Start;
- (void)Stop;
- (BOOL)IsInDownloadQueue:(id)a0 LocalID:(unsigned int)a1 VoiceLen:(unsigned int)a2 EndFlag:(unsigned int)a3;
- (void)UpdateRetryCount:(id)a0;
- (void)DeleteMsg:(id)a0 LocalID:(unsigned int)a1;
- (unsigned int)getInitStatus;
- (BOOL)readyToCheckDownloadQueue;
- (void)CheckDownloadQueue;
- (void)OnSyncDownload:(id)a0 LocalID:(unsigned int)a1 n64SvrID:(long long)a2 CreateTime:(unsigned int)a3 Xml:(id)a4 Voice:(id)a5;
- (void)AddNewDownload:(id)a0 LocalID:(unsigned int)a1 n64SvrID:(long long)a2 VoiceLen:(unsigned int)a3 VoiceTime:(unsigned int)a4 CreateTime:(unsigned int)a5 EndFlag:(unsigned int)a6 bufid:(unsigned long long)a7;
- (void)PrepareForDownload:(id)a0;
- (void)HandleDownloadError:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)loadPB;
- (void)savePB:(id)a0;
- (BOOL)IsExistInDownloadVoiceByChatName:(id)a0 localId:(unsigned int)a1 voiceLength:(unsigned int)a2 endFlag:(unsigned int)a3;
- (BOOL)DeleteDownloadVoiceByChatName:(id)a0 localId:(unsigned int)a1;
- (BOOL)DeleteDownloadVoiceByChatName:(id)a0 localId:(unsigned int)a1 voiceLength:(unsigned int)a2 endFlag:(unsigned int)a3;
- (id)GetOneDownloadVoice;
- (BOOL)InsertDownloadVoice:(id)a0;
- (BOOL)UpdateDownloadVoiceRetryCount:(unsigned int)a0 byUserName:(id)a1 localId:(unsigned int)a2 voiceLen:(unsigned int)a3 endFlag:(unsigned int)a4;
- (long long)GetCountOfDownloadVoice;
- (id)getPBPath;
- (void).cxx_destruct;

@end
