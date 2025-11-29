@class NSString;

@interface TingObjcAudioChatServiceCpp : TingAudioModuleListenerCpp <TingObjcAudioChatService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)stop;
- (void)start:(id)a0;
- (int)getStatus;
- (void)preload;
- (void)startVoiceRecord;
- (void)startVoiceRecordWithContext:(id)a0;
- (void)startNewConverstation:(id)a0;
- (void)stopVoiceRecord;
- (void)cancelVoiceRecord;
- (void)resetSession;
- (void)setBizContext:(id)a0;
- (id)getBizContext;
- (BOOL)didStartRecording;
- (id)exportHistoryDebugInfo;
- (id)getDisplayText;
- (void)executeTasks;
- (void)skipUnplayableTasks;
- (void)onASRResult:(id)a0 listenId:(id)a1 chatRequestKey:(id)a2 isSuccess:(BOOL)a3 errorCode:(int)a4 errorMessage:(id)a5;
- (void)onASRDetectUserSpoken;
- (void)onVADEnd;

@end
