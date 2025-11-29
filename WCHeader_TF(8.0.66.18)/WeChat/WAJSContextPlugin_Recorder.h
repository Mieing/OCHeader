@class WABaseRecorder, NSMutableDictionary, NSString;
@protocol IJSContextPluginDelegate;

@interface WAJSContextPlugin_Recorder : WAJSContextPluginBase <IRecordPermissionCheckExt, WARecorderDelegate, WCAudioModuleDelegate>

@property (retain, nonatomic) WABaseRecorder *recorder;
@property (retain, nonatomic) NSMutableDictionary *settings;
@property (nonatomic) BOOL isCheckingPermission;
@property (nonatomic) BOOL isInterrupting;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<IJSContextPluginDelegate> resultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_showRecordDenied;

- (void)dealloc;
- (void)unregisterExt;
- (id)cacheRootPath;
- (id)recordCachePath;
- (id)generateFileRecordFilePath:(unsigned long long)a0;
- (void)startRecord:(id)a0 sampleRate:(unsigned long long)a1 encodeBitRate:(unsigned long long)a2 channels:(unsigned long long)a3 duaration:(double)a4 frameByteSize:(unsigned long long)a5 audioSource:(id)a6;
- (void)realStartRecord;
- (void)pauseRecorder;
- (void)resumeRecorder;
- (void)stopRecorder;
- (void)internalStopRecorder;
- (void)setInactive;
- (BOOL)shouldForceUseBuiltinMic;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (id)getRecorderIdentifier;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
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
