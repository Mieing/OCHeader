@class MMTimer, NSDate, NSMutableArray, NSMutableData;
@protocol UploadShakeMusicMgrDelegate;

@interface UploadShakeMusicMgr : MMObject <PBMessageObserverDelegate> {
    unsigned int m_inputId;
    NSMutableArray *m_uploadQueue;
    NSMutableData *m_audioBuffer;
    NSMutableArray *m_audioLengthQueue;
    int m_seq;
    int m_offsetTime;
    int m_offsetBytes;
    int m_eventType;
    double m_uploadInterval;
    int m_maxUploadBytesSize;
    unsigned long long m_lastSendTime;
    BOOL m_bUploading;
}

@property (retain, nonatomic) MMTimer *checkUploadQueueTimer;
@property (retain, nonatomic) NSDate *waitingRespTime;
@property (weak, nonatomic) id<UploadShakeMusicMgrDelegate> delegate;
@property (nonatomic) unsigned long long totalBytes;

- (id)init;
- (void)dealloc;
- (void)start:(unsigned int)a0;
- (void)stop;
- (void)addAudioBuffer:(id)a0;
- (void)checkAudioBuffer;
- (int)getSendAudioSize;
- (void)checkUploadQueue;
- (BOOL)canSendData;
- (void)resetStauts;
- (void)doUpload:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
