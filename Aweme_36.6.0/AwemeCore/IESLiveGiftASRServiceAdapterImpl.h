@class NSString, SpeechEngine;
@protocol IESLiveGiftASRServiceDelegate;

@interface IESLiveGiftASRServiceAdapterImpl : IESLiveBaseAdapter <SpeechEngineDelegate, IESLiveGiftASRServiceAdapter>

@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *resultText;
@property (copy, nonatomic) NSString *reqId;
@property (retain, nonatomic) SpeechEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveGiftASRServiceDelegate> delegate;

- (id)initWithDIContext:(id)a0;
- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)feedAudio:(short *)a0 length:(int)a1;
- (void)finishTalking;
- (void)p_engineDidStartWithData:(id)a0;
- (void)p_engineDidStop;
- (void)p_engineError:(id)a0;
- (void)p_engineCallbackWithResult:(id)a0 complete:(BOOL)a1;
- (long long)startEngineWithHotWords:(id)a0;
- (BOOL)setupEngineWithSampleRate:(double)a0 channels:(int)a1;
- (BOOL)updateEngineWithHotWords:(id)a0;
- (void).cxx_destruct;
- (void)destroyEngine;
- (long long)stopEngine;

@end
