@interface MMLiveHapticsPlayer : NSObject

@property (class, readonly, nonatomic) BOOL hapticsSupported;

- (id)init;
- (void)anticipatePlayingWithinTimeInterval:(double)a0;
- (void)playPattern:(id)a0;
- (void)playPatternInFile:(id)a0;

@end
