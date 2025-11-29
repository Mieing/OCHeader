@class NSString, SpeechEngine;
@protocol AWEEcomSearchASRManagerDelegate;

@interface AWEEcomSearchASRManager : NSObject <SpeechEngineDelegate>

@property (retain, nonatomic) SpeechEngine *engine;
@property (weak, nonatomic) id<AWEEcomSearchASRManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)finishTalking;
- (void)setupEngineParams:(id)a0;
- (void)startRecognition;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)destroy;
- (void)stopEngine;

@end
