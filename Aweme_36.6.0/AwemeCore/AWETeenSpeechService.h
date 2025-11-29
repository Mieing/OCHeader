@class NSString, SpeechEngine;
@protocol AWETeenSpeechServiceDelegate;

@interface AWETeenSpeechService : NSObject <SpeechEngineDelegate>

@property (retain, nonatomic) SpeechEngine *engine;
@property (weak, nonatomic) id<AWETeenSpeechServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanced;
+ (void)initialize;

- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)p_startEngine;
- (void)p_setupAsrSDK;
- (void)p_speechDidStart;
- (void)p_speechDidStop;
- (void)p_handleRecordErrorResult:(id)a0;
- (void)p_handleRecordResult:(id)a0 isFinish:(BOOL)a1;
- (void)checkMicrophoneAuthWithComplete:(id /* block */)a0;
- (void)stopSpeeching;
- (void)startSpeechingWithDelegate:(id)a0;
- (void)cancleEngine;
- (void)p_checkAudioAccessWithCompleteBlock:(id /* block */)a0;
- (void)p_destoryAsrSDK;
- (void)p_handleVolumeLevel:(id)a0;
- (void)p_finishEngine;
- (void).cxx_destruct;

@end
