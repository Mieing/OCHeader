@class NSString, SpeechEngine;

@interface IESLiveRadioTextContainerSpeechServiceImpl : NSObject <SpeechEngineDelegate, IESLiveRadioTextContainerSpeechService>

@property (retain, nonatomic) SpeechEngine *engine;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)p_handleRecordErrorResult:(id)a0;
- (void)p_handleRecordResult:(id)a0 isFinish:(BOOL)a1;
- (void)p_handleVolumeLevel:(id)a0;
- (void)p_finishEngine;
- (void)handleSpeechEventWithParams:(id)a0 completion:(id /* block */)a1;
- (void)p_startEngineWithParams:(id)a0;
- (void)stopSpeechAsr;
- (void)startMicToSpeech;
- (void)p_setupAsrSDKWithParams:(id)a0;
- (void)p_destroyAsrSDK;
- (void)cancelEngine;
- (void).cxx_destruct;

@end
