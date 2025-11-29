@class CHHapticEngine;

@interface AWEIMInteractiveEmojiHaptic : NSObject

@property (retain, nonatomic) CHHapticEngine *engine;
@property (nonatomic) BOOL isSupportsHaptics;

+ (id)sharedInstance;

- (void)playWithFilePath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;

@end
