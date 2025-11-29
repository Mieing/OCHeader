@class NSString, SpeechEngine;
@protocol IESLiveFormatSpeechASRDelegate;

@interface HTSFormatSpeechASRManager : NSObject <SpeechEngineDelegate>

@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *resultText;
@property (copy, nonatomic) NSString *reqId;
@property (retain, nonatomic) SpeechEngine *engine;
@property (weak, nonatomic) id<IESLiveFormatSpeechASRDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)feedAudio:(short *)a0 length:(int)a1;
- (void)finishTalking;
- (BOOL)setupEngineWithSampleRate:(double)a0 channels:(int)a1 config:(id)a2;
- (void)startASREngine;
- (void)p_engineDidStartWithData:(id)a0;
- (void)p_engineDidStop;
- (void)p_engineError:(id)a0;
- (void)p_engineCallbackWithResult:(id)a0 complete:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)destroyEngine;
- (void)dealloc;
- (void)stopEngine;

@end
