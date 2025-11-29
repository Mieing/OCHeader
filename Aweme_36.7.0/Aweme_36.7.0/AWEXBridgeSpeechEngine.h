@class NSString, SpeechEngine;
@protocol BDXSpeechEngineDelegate;

@interface AWEXBridgeSpeechEngine : NSObject <SpeechEngineDelegate, BDXSpeechEngineProtocol>

@property (retain, nonatomic) SpeechEngine *realEngine;
@property (weak, nonatomic) id<BDXSpeechEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)initEngine;
- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (BOOL)createEngineWithDelegate:(id)a0;
- (void)setEngineParams:(id)a0;
- (int)finishTalking;
- (void).cxx_destruct;
- (id)init;
- (void)destroyEngine;
- (int)startEngine;
- (int)stopEngine;

@end
