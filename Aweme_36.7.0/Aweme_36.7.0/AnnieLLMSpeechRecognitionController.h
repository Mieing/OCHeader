@class NSString, BDXSpeechEngineParams;
@protocol IESHYHybridViewProtocol, BDXSpeechEngineProtocol;

@interface AnnieLLMSpeechRecognitionController : NSObject <BDXSpeechEngineDelegate>

@property (retain, nonatomic) id<BDXSpeechEngineProtocol> speechEngine;
@property (retain, nonatomic) BDXSpeechEngineParams *params;
@property (weak, nonatomic) id<IESHYHybridViewProtocol> hybridView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)sendAsrStateChangeWithEventType:(unsigned long long)a0 message:(id)a1;
- (void)startRecognitionWithParams:(id)a0 completion:(id /* block */)a1;
- (void)stopRecognition:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
