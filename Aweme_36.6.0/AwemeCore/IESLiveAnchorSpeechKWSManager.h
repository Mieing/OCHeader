@class IESLiveAnchorSpeechCommentMonitor, SpeechEngine, NSString;
@protocol IESLiveAnchorSpeechKWSDelegate;

@interface IESLiveAnchorSpeechKWSManager : NSObject <SpeechEngineDelegate>

@property (nonatomic) long long state;
@property (retain, nonatomic) SpeechEngine *engine;
@property (weak, nonatomic) id<IESLiveAnchorSpeechKWSDelegate> delegate;
@property (retain, nonatomic) IESLiveAnchorSpeechCommentMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)feedAudio:(short *)a0 length:(int)a1;
- (void)p_engineDidStop;
- (void)p_engineError:(id)a0;
- (BOOL)setupEngineWithSampleRate:(double)a0 channels:(int)a1 modelPath:(id)a2;
- (void)p_engineDidStart;
- (void)p_engineWakeUp:(id)a0;
- (void).cxx_destruct;
- (void)destroyEngine;
- (void)startEngine;
- (void)stopEngine;

@end
