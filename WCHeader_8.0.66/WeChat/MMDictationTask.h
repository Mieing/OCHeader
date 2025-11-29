@class MMDictationUploader, NSString, SimpleAudioRecorder, NSDate, NSMutableArray;
@protocol MMDictationTaskDelegate;

@interface MMDictationTask : NSObject <SimpleRecordBufferDelegate, MMDictationUploaderDelegate, WCAudioModuleDelegate, AudioRecordCheckerExt, ISysCallCheckExt>

@property (copy, nonatomic) NSString *resultText;
@property (retain, nonatomic) SimpleAudioRecorder *recorder;
@property (nonatomic) struct AudioCoder { int x0; void *x1; void *x2; void *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; void *x11; short x12[5][320]; int x13[5][2]; void *x14; } *silkEncoder;
@property (retain, nonatomic) MMDictationUploader *uploader;
@property (retain, nonatomic) NSMutableArray *peakPowerArray;
@property (nonatomic) unsigned long long peakPowerHitCount;
@property (retain, nonatomic) NSDate *currentStartTime;
@property (retain, nonatomic) NSDate *currentEndTime;
@property (nonatomic) long long endFlag;
@property (weak, nonatomic) id<MMDictationTaskDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *voiceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(long long)a0 sessionId:(id)a1;
- (void)dealloc;
- (void)didReceiveWillResignActiveNotification:(id)a0;
- (void)setDictationExtraData:(id)a0;
- (BOOL)isRecording;
- (void)startRecord;
- (void)stopRecord:(unsigned long long)a0;
- (id)peakPowerTraceLog;
- (void)outputPcmBuffer:(void *)a0 bufferSize:(unsigned int)a1;
- (void)outputPeakPower:(float)a0;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)handleInterruptionBy3rdApp;
- (void)MMDictationUploader:(id)a0 didGetText:(id)a1;
- (void)MMDictationUploader:(id)a0 didEndedByServer:(unsigned int)a1;
- (void)MMDictationUploader:(id)a0 onNetError:(long long)a1 responseRet:(long long)a2 isResposeEmpty:(BOOL)a3;
- (void)MMDictationUploaderDidEnd:(id)a0;
- (void)MMDictationUploader:(id)a0 cgiWillStart:(int)a1;
- (void)MMDictationUploader:(id)a0 cgiDidEnd:(int)a1 resultTextLen:(long long)a2;
- (void)InputIsAvailableChanged:(BOOL)a0;
- (void)BeginInterruption;
- (void)onDetectMicriphoneMuted;
- (void).cxx_destruct;

@end
