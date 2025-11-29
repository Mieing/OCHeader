@class NSDate, MMTimer, NSMutableDictionary, NSMutableSet, NSString, NSMutableArray, NSData;
@protocol UploadStreamVoiceDataMgrDelegate;

@interface UploadStreamVoiceDataMgr : MMObject <PBMessageObserverDelegate> {
    unsigned int _addTaskCount;
    unsigned int _uploadTaskCount;
    NSDate *m_dtStopRecordTime;
    NSMutableSet *m_setEndFlagList;
    BOOL m_bCheckTransResult;
    BOOL m_bReportEnd;
}

@property (retain, nonatomic) MMTimer *checkUploadQueueTimer;
@property (retain, nonatomic) NSMutableArray *runningQueue;
@property (retain, nonatomic) NSMutableArray *waitingQueue;
@property (nonatomic) unsigned int currentInputId;
@property (nonatomic) unsigned int maxPacketSize;
@property (nonatomic) unsigned int languageType;
@property (nonatomic) unsigned long long nextCheckResultTime;
@property (nonatomic) double uploadInterval;
@property (retain, nonatomic) NSMutableSet *processingVoiceIds;
@property (retain, nonatomic) NSMutableDictionary *sequenceMap;
@property (retain, nonatomic) NSString *lastVoiceId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int cgiTotalTimeOut;
@property (nonatomic) unsigned int cgiRetryCount;
@property (nonatomic) BOOL useBackendEVAD;
@property (weak, nonatomic) id<UploadStreamVoiceDataMgrDelegate> delegate;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSData *extraData;
@property (nonatomic) float transTimeoutInsec;
@property (readonly, nonatomic) BOOL canShowSimplifyButton;
@property (readonly, nonatomic) NSString *simplifyButtonText;
@property (readonly, nonatomic) NSString *cancelSimplifyButtonText;

+ (BOOL)voiceMsgNewCgi;

- (id)init;
- (void)dealloc;
- (void)Start:(unsigned int)a0;
- (void)Stop;
- (void)AddNewPart:(id)a0;
- (void)ClearLastUploadData;
- (void)notifyRecordStop;
- (void)resetUploadTimer;
- (void)safeStopUploadTimer;
- (void)stopUploadTask;
- (BOOL)canMergeItem:(id)a0 withItem:(id)a1;
- (void)mergeItem:(id)a0 withItem:(id)a1;
- (void)addItem:(id)a0;
- (void)addVoiceIdToProcessingQueue:(id)a0;
- (void)checkUploadQueue;
- (void)stopUploadTaskWithErr:(int)a0;
- (void)onCgiError:(long long)a0 ret:(long long)a1 isResposeEmpty:(BOOL)a2;
- (BOOL)tryAddNewUploadTask;
- (BOOL)useNewCgi;
- (BOOL)doUpload:(id)a0;
- (BOOL)_doUploadNew:(id)a0;
- (BOOL)_doUpload:(id)a0;
- (void)RemoveFromRunningQueueForSeq:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)checkUploadResultWithInterval:(int)a0;
- (void)handleVoiceRecognizeResponse:(id)a0;
- (void)handleVoiceTransResponse:(id)a0;
- (unsigned int)genSquenceByVoiceId:(id)a0;
- (void).cxx_destruct;

@end
