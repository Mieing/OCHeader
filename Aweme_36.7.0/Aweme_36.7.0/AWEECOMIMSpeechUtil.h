@class NSString, SpeechEngine;

@interface AWEECOMIMSpeechUtil : NSObject <SpeechEngineDelegate>

@property (retain, nonatomic) SpeechEngine *speechEngine;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (copy, nonatomic) id /* block */ volumeLevelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)finishTalking;
- (void)starEngine;
- (void)setupSpeechEngine;
- (void)speechEngineError:(id)a0;
- (void)speechEngineResult:(id)a0 isFinal:(BOOL)a1;
- (void)speechEngineVolumeLevel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopEngine;

@end
