@class CHHapticEngine;

@interface MMLiveHapticsEnginePlayer : MMLiveHapticsPlayer

@property (retain, nonatomic) CHHapticEngine *hapticsEngine;

- (void)anticipatePlayingWithinTimeInterval:(double)a0;
- (void)playPattern:(id)a0;
- (void)playPatternInFile:(id)a0;
- (void)createEngine;
- (void)startEngineWithCompletionBlock:(id /* block */)a0;
- (void)stopEngine;
- (void)playPatternWithinData:(id)a0;
- (void).cxx_destruct;

@end
