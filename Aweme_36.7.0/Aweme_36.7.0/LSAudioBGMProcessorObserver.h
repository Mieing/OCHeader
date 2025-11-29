@interface LSAudioBGMProcessorObserver : NSObject

@property (copy, nonatomic) id /* block */ musicPlayEndBlock;
@property (copy, nonatomic) id /* block */ musicPlayErrorBlock;

- (void)handleAuxPlayEnd;
- (void)handleAuxStartResult:(int)a0;
- (void).cxx_destruct;

@end
