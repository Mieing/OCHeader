@class MMTimer, VoicePrintMgr, NSString;
@protocol VoicePrintRecorderDelegate;

@interface VoicePrintRecorder : NSObject <WCAudioModuleDelegate, IVoicePrintMgrExt>

@property (nonatomic) unsigned int voiceId;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) VoicePrintMgr *voicePrintManager;
@property (nonatomic) double recordingBeginTime;
@property (nonatomic, getter=isRecordingTooShort) BOOL recordingTooShort;
@property (retain, nonatomic) MMTimer *timeoutTimer;
@property (nonatomic) unsigned int retryCount;
@property (weak, nonatomic) id<VoicePrintRecorderDelegate> delegate;
@property (nonatomic) unsigned int resourceId;
@property (nonatomic, getter=isRecording) BOOL recording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManger:(id)a0;
- (void)deactiveAudio;
- (void)startRecordForResourceId:(unsigned int)a0 isFirstStep:(BOOL)a1;
- (void)stopRecord;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)OnStartRecord;
- (void)OnGetMatchingResult:(int)a0 andVoiceId:(unsigned int)a1;
- (void)OnUploadError:(int)a0 withVoiceId:(unsigned int)a1 andMessage:(id)a2;
- (void)OnLevelMeter:(unsigned int)a0 Peak:(float)a1;
- (void).cxx_destruct;

@end
