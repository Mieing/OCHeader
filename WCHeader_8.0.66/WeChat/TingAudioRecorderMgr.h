@class NSString, TingAudioRecorder;

@interface TingAudioRecorderMgr : MMUserService <IRecordPermissionCheckExt, TingAudioRecorderDelegate, MMServiceProtocol>

@property (retain, nonatomic) TingAudioRecorder *recorder;
@property (nonatomic) int recordStatus;
@property (nonatomic) BOOL recording;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) double minTime;
@property (nonatomic) double maxTime;
@property (copy, nonatomic) id /* block */ startBlock;
@property (copy, nonatomic) id /* block */ endBlock;
@property (copy, nonatomic) id /* block */ interruptEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)reset;
- (void)startRecord;
- (void)stopRecord;
- (void)p_startRecordPerimissionCheck;
- (void)p_startRecord;
- (void)p_finishRecord:(unsigned int)a0 filePath:(id)a1 voiceTime:(double)a2;
- (void)tingAudioRecorder:(id)a0 onBeginRecording:(int)a1;
- (void)tingAudioRecorder:(id)a0 onFinishRecordWithRetCode:(unsigned int)a1 filePath:(id)a2;
- (void)tingAudioRecorderOnInterrupt:(id)a0;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void).cxx_destruct;

@end
