@class NSString, EVADProcessor, StreamInputResult, UploadStreamVoiceDataMgr, NSMutableArray;
@protocol MMNewVoiceInputCacheLogicDelegate;

@interface MMNewVoiceInputCacheLogic : NSObject <UploadStreamVoiceDataMgrDelegate, EVADProcessorDelegate> {
    struct AudioCoder { int x0; void *x1; void *x2; void *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; void *x11; short x12[5][320]; int x13[5][2]; void *x14; } *m_silkEncoder;
}

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
@property (retain, nonatomic) NSMutableArray *arrInputQueueItemWhenPausing;
@property (nonatomic) unsigned long long transState;
@property (nonatomic) BOOL bStartFirstDetect;
@property (retain, nonatomic) NSString *nsChatName;
@property (nonatomic) unsigned int audioId;
@property (weak, nonatomic) id<MMNewVoiceInputCacheLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initVoiceDataMgr;
- (void)setUserName:(id)a0 AudioId:(unsigned int)a1;
- (BOOL)hadAnyDataSliceToStartTrans;
- (void)createNewVoiceId;
- (unsigned int)startTransVoiceWithLanguage:(unsigned int)a0 StopNow:(BOOL)a1;
- (unsigned int)reTransVoiceWithLanguage:(unsigned int)a0;
- (void)pauseVoiceTranslating;
- (void)resumeVoiceTranslating;
- (void)notifyRecordStop;
- (void)stopTransVoiceWithInputId:(unsigned int)a0;
- (id)getInputQueueItemWithItem:(id)a0;
- (void)transVoiceWithInputQueueItem:(id)a0;
- (void)startProcessVoiceData;
- (void)endProcessVoiceData;
- (void)processVoiceData:(id)a0;
- (void)processDataWithEvad:(id)a0;
- (void)processVoiceDataWithoutEVAD:(id)a0 queueItem:(id)a1;
- (BOOL)shouldAcceptFirstSlice;
- (void)onVADDetectFirstStart:(id)a0;
- (void)onVADDetectSlienceToSpeaking:(long long)a0 data:(id)a1 HasSpeak:(BOOL)a2;
- (void)onVADDetectSpeakingToSlience:(long long)a0 data:(id)a1;
- (void)onVADFilterdSpeakingVoice:(id)a0;
- (void)onVADDetectDelayVoice:(id)a0 Pcm:(id)a1;
- (void)onGetText:(id)a0;
- (void)onEndVoiceTrans:(unsigned int)a0;
- (void)onVoiceTransTimeout:(unsigned int)a0;
- (void).cxx_destruct;

@end
