@class LiteAppBaseRecorder, NSMutableDictionary, NSString;

@interface LiteAppRecorderManager : NSObject <IRecordPermissionCheckExt, LiteAppRecorderDelegate, WCAudioModuleDelegate>

@property (retain, nonatomic) LiteAppBaseRecorder *recorder;
@property (retain, nonatomic) NSMutableDictionary *settings;
@property (nonatomic) BOOL isCheckingPermission;
@property (nonatomic) BOOL isInterrupting;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int appUuid;
@property (retain, nonatomic) NSString *recorderSavePath;
@property (retain, nonatomic) NSString *errMsg;
@property (nonatomic) unsigned long long audioThreshold;
@property (nonatomic) BOOL isRecording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_showRecordDenied;

- (id)initWithAppIdAndAppUuId:(id)a0 appUuid:(unsigned int)a1;
- (void)dealloc;
- (id)recordCachePath;
- (id)generateFileRecordFilePath:(unsigned long long)a0;
- (id)startRecord:(id)a0 sampleRate:(unsigned long long)a1 encodeBitRate:(unsigned long long)a2 channels:(unsigned long long)a3 duration:(unsigned long long)a4 frameByteSize:(unsigned long long)a5 audioSource:(id)a6 audioThreshold:(unsigned long long)a7;
- (void)realStartRecord;
- (id)pauseRecorder;
- (id)resumeRecorder;
- (id)stopRecorder;
- (void)setInactive;
- (BOOL)shouldForceUseBuiltinMic;
- (unsigned long long)currentTimeInMilliseconds;
- (id)returnJson:(id)a0 error:(id)a1 isNoisy:(BOOL)a2;
- (void)dispatchAsync:(id /* block */)a0;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)onRecorderDidRecordData:(id)a0 isLastFrame:(BOOL)a1;
- (void)onRecorderStateChange:(unsigned long long)a0 recorder:(id)a1 error:(id)a2;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (id)mixListForAudioModule:(id)a0;
- (void)onCallBackRecordState:(id)a0 params:(id)a1;
- (void)onCallBackStopEvent:(id)a0;
- (void)onCallBackFileError;
- (void)interruptRecord;
- (void)onEndInterruption;
- (void).cxx_destruct;

@end
