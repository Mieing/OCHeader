@class StreamVoiceInputLogic, NSString, NSMutableDictionary;
@protocol FTSFloatingVoiceInputViewModelDelegate;

@interface FTSFloatingVoiceInputViewModel : NSObject <IStreamVoiceInputExt>

@property (retain, nonatomic) StreamVoiceInputLogic *voiceInputLogic;
@property (nonatomic) unsigned long long voiceInputState;
@property (copy, nonatomic) NSString *lastResultText;
@property (retain, nonatomic) NSMutableDictionary *delayTasks;
@property (copy, nonatomic) NSString *voiceId;
@property (weak, nonatomic) id<FTSFloatingVoiceInputViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyStreamVoiceInputError:(unsigned long long)a0 errMsg:(id)a1;
- (id)init;
- (void)dealloc;
- (void)startRecordWithCompleBlock:(id /* block */)a0;
- (void)createVoiceInputLogic;
- (void)stopRecord;
- (void)cancelRecord;
- (void)doCancel:(unsigned long long)a0;
- (void)handleTaskWithID:(id)a0;
- (void)addDelayTaskWithID:(id)a0 delay:(double)a1;
- (void)cancelTaskWithID:(id)a0;
- (void)OnPrepareRecord:(unsigned int)a0;
- (void)OnStartRecord:(unsigned int)a0;
- (void)OnEndRecord:(unsigned int)a0;
- (void)OnLevelMeter:(unsigned int)a0 Peak:(float)a1;
- (void)onGetResultText:(id)a0 andInputId:(unsigned int)a1;
- (void)OnVoiceTransEnd:(unsigned int)a0;
- (void)OnError:(int)a0 andInputId:(unsigned int)a1;
- (void)onVoiceRecognizeCgiError:(unsigned int)a0 uiMessage:(long long)a1 ret:(long long)a2 isResposeEmpty:(BOOL)a3;
- (void)onVoiceTransEndedByServer:(unsigned int)a0 endFlag:(unsigned int)a1;
- (void)onVoiceSilentTooLong:(unsigned int)a0;
- (void)onVoiceDetectSpeakingToSlience:(long long)a0 data:(id)a1;
- (void)onVoiceRecognizeCgiDidEnd:(unsigned int)a0 voiceId:(id)a1 seq:(int)a2 textLen:(unsigned long long)a3;
- (void).cxx_destruct;

@end
