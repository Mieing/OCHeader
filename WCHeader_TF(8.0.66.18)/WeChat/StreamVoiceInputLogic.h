@class NSMutableArray, EVADProcessor, SimpleAudioRecorder, NSMutableDictionary, NSString, UploadStreamVoiceDataMgr, StreamInputResult;

@interface StreamVoiceInputLogic : NSObject <SimpleRecordBufferDelegate, UploadStreamVoiceDataMgrDelegate, EVADProcessorDelegate, WCAudioModuleDelegate> {
    unsigned int m_uiVoiceOffset;
    NSMutableArray *m_voiceIdArray;
    BOOL m_bStop;
    unsigned long long _startInputTiem;
    struct AudioCoder { int x0; void *x1; void *x2; void *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; void *x11; short x12[5][320]; int x13[5][2]; void *x14; } *m_silkEncoder;
}

@property (retain, nonatomic) SimpleAudioRecorder *recorder;
@property (retain, nonatomic) UploadStreamVoiceDataMgr *uploadMgr;
@property (retain, nonatomic) EVADProcessor *evad;
@property (retain, nonatomic) NSMutableDictionary *sequenceMap;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *currentVoiceId;
@property (nonatomic) BOOL bStartFirstDetect;
@property (retain) StreamInputResult *result;
@property (nonatomic) unsigned int currentInputId;
@property (nonatomic) unsigned int inputLanguageType;
@property (readonly, nonatomic) long long scene;
@property (nonatomic) double silenceTimelimit;
@property (nonatomic) float vadSAndNRation;
@property (nonatomic) BOOL disableAudioModule;
@property (nonatomic) BOOL useClientVad;
@property (nonatomic) BOOL forceToUseBuiltInMic;
@property (nonatomic) BOOL shouldFilterResultWithVoiceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithScene:(long long)a0;
- (void)dealloc;
- (void)setVoiceRecognizeExtraData:(id)a0;
- (BOOL)isRecording;
- (long long)getRecordingTime;
- (unsigned int)StartInput;
- (void)asyncStartInput:(id /* block */)a0 withBuiltInMic:(BOOL)a1;
- (void)asyncStartInput:(id /* block */)a0;
- (BOOL)StopRecord;
- (void)ExitVoiceInput;
- (id)GetVoiceIds;
- (void)setCheckMeterInterval:(double)a0;
- (double)checkMeterInterval;
- (void)outputPcmBuffer:(void *)a0 bufferSize:(unsigned int)a1;
- (void)processVoiceDataWithoutEVAD:(id)a0 queueItem:(id)a1;
- (void)outputPeakPower:(float)a0;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (void)onVADDetectFirstStart:(id)a0;
- (void)onVADDetectSlienceToSpeaking:(long long)a0 data:(id)a1 HasSpeak:(BOOL)a2;
- (void)onVADDetectSpeakingToSlience:(long long)a0 data:(id)a1;
- (void)onVADFilterdSpeakingVoice:(id)a0;
- (void)onVADDetectDelayVoice:(id)a0 Pcm:(id)a1;
- (void)onVADDetectSilentTooLong;
- (void)onGetText:(id)a0;
- (void)onLocalFileOperationError;
- (void)onNetworkError:(unsigned int)a0;
- (void)onVoiceRecognizeCgiError:(unsigned int)a0 uiMessage:(long long)a1 ret:(long long)a2 isResposeEmpty:(BOOL)a3;
- (void)onEndVoiceTrans:(unsigned int)a0;
- (void)onVoiceTransEndedByServer:(unsigned int)a0 endFlag:(unsigned int)a1;
- (void)onVoiceRecognizeCgiWillStart:(unsigned int)a0 voiceId:(id)a1 seq:(int)a2;
- (void)onVoiceRecognizeCgiDidEnd:(unsigned int)a0 voiceId:(id)a1 seq:(int)a2 textLen:(unsigned long long)a3;
- (unsigned int)genSquenceByVoiceId:(id)a0;
- (void)resetSquenceMap;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)handleInterruptionBy3rdApp;
- (void).cxx_destruct;

@end
