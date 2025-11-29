@class MMTimer, NSString, NSMutableArray;
@protocol UploadVoicePrintMgrDelegate;

@interface UploadVoicePrintMgr : MMObject <PBMessageObserverDelegate> {
    unsigned int _uploadType;
    unsigned int _curVoiceId;
    unsigned int _curScene;
    BOOL _isUploading;
    BOOL _isEnd;
    NSMutableArray *_uploadQueue;
    unsigned int _voiceTicket;
    unsigned int _cacheLastOffset;
    unsigned int _cacheLastlength;
    unsigned int _sameLoopCount;
    float _upload_per_time;
}

@property (nonatomic) unsigned int curResId;
@property (weak, nonatomic) id<UploadVoicePrintMgrDelegate> delegate;
@property (retain, nonatomic) MMTimer *checkUploadQueueTimer;
@property (retain, nonatomic) NSString *RsaVerifyTicket;
@property (retain, nonatomic) NSString *RsaCreateTicket;
@property (retain, nonatomic) NSString *RsaVoiceKey;

- (void)cleanItem;
- (void)HandleReturn:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)clearTempFile;
- (void)stopUploadTask;
- (void)stopUploadTaskWithErr:(int)a0 andErrMsg:(id)a1;
- (void)stopUploadTaskWithErr:(int)a0;
- (void)checkUploadQueue;
- (void)doUpload:(unsigned int)a0 Offset:(unsigned int)a1 Len:(unsigned int)a2 EndFlag:(unsigned int)a3;
- (id)init;
- (void)dealloc;
- (void)ResetVoiceTicket;
- (void)Start:(unsigned int)a0 UploadType:(unsigned int)a1 withScene:(unsigned int)a2 andResID:(unsigned int)a3;
- (void)Stop;
- (void)MainUpdateQueue:(id)a0;
- (void)AddNewPart:(unsigned int)a0 Offset:(unsigned int)a1 Len:(unsigned int)a2 EndFlag:(unsigned int)a3;
- (void).cxx_destruct;

@end
