@class NSString, EVADProcessor, StreamInputResult, UploadStreamVoiceDataMgr, NSMutableArray;
@protocol WCRedEnvAudioTransLogicDelegate;

@interface WCRedEnvAudioTransLogic : NSObject <UploadStreamVoiceDataMgrDelegate, EVADProcessorDelegate>

@property (retain, nonatomic) EVADProcessor *evad;
@property (retain, nonatomic) UploadStreamVoiceDataMgr *uploadMgr;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *currentVoiceId;
@property (retain, nonatomic) NSMutableArray *voiceIdArray;
@property (nonatomic) unsigned int voiceOffset;
@property (nonatomic) unsigned int currentInputId;
@property (nonatomic) unsigned int processVoiceCount;
@property (nonatomic) unsigned int languageType;
@property (retain) StreamInputResult *result;
@property (retain, nonatomic) NSString *nsTranslatedText;
@property (retain, nonatomic) NSMutableArray *arrInputQueueItem;
@property (nonatomic) unsigned long long transState;
@property (weak, nonatomic) id<WCRedEnvAudioTransLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initVoiceDataMgr;
- (BOOL)hadAnyDataSliceToStartTrans;
- (void)createNewVoiceId;
- (unsigned int)startTransVoiceWithLanguage:(unsigned int)a0 StopNow:(BOOL)a1;
- (void)notifyRecordStop;
- (void)stopTransVoiceWithInputId:(unsigned int)a0;
- (id)getInputQueueItemWithItem:(id)a0;
- (void)transVoiceWithInputQueueItem:(id)a0;
- (void)startProcessVoiceData;
- (void)endProcessVoiceData;
- (void)processVoiceData:(id)a0;
- (void)processDataWithEvad:(id)a0;
- (BOOL)shouldAcceptFirstSlice;
- (void)onVADDetectFirstStart:(id)a0;
- (void)onVADDetectSlienceToSpeaking:(long long)a0 data:(id)a1 HasSpeak:(BOOL)a2;
- (void)onVADDetectSpeakingToSlience:(long long)a0 data:(id)a1;
- (void)onVADFilterdSpeakingVoice:(id)a0;
- (void)onVADDetectDelayVoice:(id)a0 Pcm:(id)a1;
- (void)onGetText:(id)a0;
- (void)onEndVoiceTrans:(unsigned int)a0;
- (void)onVoiceTransTimeout:(unsigned int)a0;
- (void)onVoiceTransDisaster:(unsigned int)a0;
- (void).cxx_destruct;

@end
